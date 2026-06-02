#ifndef SCORIVM_TYPES_H
#define SCORIVM_TYPES_H

#include <stdbool.h>
#include <stdint.h>
#include "../frontend/token.h"

typedef enum {
    TY_UNKNOWN,
    TY_NIHIL,
    TY_NULLUS,
    TY_I8, TY_I16, TY_I32, TY_I64,
    TY_P8, TY_P16, TY_P32, TY_P64,
    TY_F32, TY_F64,
    TY_LOGICA,
    TY_LITTERA,
    TY_VIA,      // 裸指针
    TY_COHORS,   // 切片
    TY_ACIES,    // 数组
    TY_FORMA,    // 结构体
    TY_UNIO,     // 联合体
    TY_ENUM,     // 枚举
    TY_ACTIO,    // 函数
    TY_MODULE    // 模块命名空间
} TypeKind;

typedef struct ScorivmType ScorivmType;

// 结构体字段
typedef struct {
    Token name;
    ScorivmType* type;
    uint8_t bit_size; // 0 表示非位域
} StructField;

// 枚举变体
typedef struct {
    Token name;
    int64_t value;
} EnumVariant;

struct ScorivmType {
    TypeKind kind;
    
    union {
        // 用于 TY_VIA, TY_COHORS
        ScorivmType* inner;
        
        // 用于 TY_ACIES
        struct {
            ScorivmType* inner;
            uint32_t length;
        } array;
        
        // 用于 TY_FORMA
        struct {
            Token name;
            StructField* fields;
            int field_count;
            bool is_densa;
        } struct_type;

        // 用于 TY_ENUM
        struct {
            Token name;
            EnumVariant* variants;
            int variant_count;
        } enum_type;
        
        // 用于 TY_ACTIO
        struct {
            ScorivmType** param_types;
            int param_count;
            ScorivmType* return_type;
            bool is_variadic;
            bool is_native_variadic;
        } func_type;
    } as;
};

// 类型系统初始化 (初始化基础类型的单例)
void types_init(void);

// 获取基础类型单例
ScorivmType* type_get_basic(TypeKind kind);

// 获取或创建复合类型 (Type Interning)
ScorivmType* type_get_via(ScorivmType* inner);
ScorivmType* type_get_cohors(ScorivmType* inner);
ScorivmType* type_get_acies(ScorivmType* inner, uint32_t length);

// 创建结构体、联合体和函数类型
ScorivmType* type_create_forma(Token name, bool is_densa);
ScorivmType* type_create_unio(Token name, bool is_densa);
void type_forma_add_field(ScorivmType* forma_type, Token name, ScorivmType* field_type, uint8_t bit_size);

ScorivmType* type_create_enum(Token name);
void type_enum_add_variant(ScorivmType* enum_type, Token name, int64_t value);

ScorivmType* type_create_actio(ScorivmType* return_type, ScorivmType** param_types, int param_count, bool is_variadic, bool is_native_variadic);

// 类型比较 (因为使用了 Interning，大部分情况下可以直接比较指针)
bool type_equals(ScorivmType* a, ScorivmType* b);

// 获取类型在内存中的实际字节大小
int type_get_size(ScorivmType* type);

// 获取类型在内存中的对齐要求 (字节数，必定是 2 的幂)
int type_get_align(ScorivmType* type);

// 获取结构体/联合体中指定字段的内存偏移量 (字节)
int type_get_field_offset(ScorivmType* type, Token field_name);

// 获取字段的完整布局信息 (字节偏移和位偏移)
bool type_get_field_layout(ScorivmType* type, Token field_name, int* out_byte_offset, int* out_bit_offset, int* out_bit_size);

// 判断类型是否有符号/无符号
bool type_is_signed(ScorivmType* type);
bool type_is_unsigned(ScorivmType* type);

#endif // SCORIVM_TYPES_H
