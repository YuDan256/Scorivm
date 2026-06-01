liber test_mica;

forma densa StatusReg {
    sit is_ready: logica mica 1;
    sit mode: p8 mic 3;
    sit error_code: i16 mic 10; // 跨字节拼接，有符号整数，占 10 bits
}

forma StandardReg {
    sit a: p8 mic 5;
    sit b: p8 mic 4; // 5+4=9 > 8，在非 densa 模式下，b 会被推到下一个字节
}

actio edita princeps() -> medius {
    sit reg: StatusReg;
    
    // 写入位域测试
    reg.is_ready = verum;
    reg.mode = 5;
    reg.error_code = -12; // 测试有符号负数
    
    // 读取与打印测试
    scribe("--- Testatio Micularum (Bitfield Test) ---\n");
    scribe("is_ready:   ", reg.is_ready, "\n");
    scribe("mode:       ", reg.mode, "\n");
    scribe("error_code: ", reg.error_code, "\n");
    
    // 内存大小测试 (1 + 3 + 10 = 14 bits -> 向上取整为 2 bytes)
    scribe("Magnitudo:  ", magnitudo(StatusReg), " bytes\n");
    
    scribe("\n--- Testatio Standardis (Non-densa) ---\n");
    sit s_reg: StandardReg;
    s_reg.a = 31;
    s_reg.b = 15;
    scribe("a: ", s_reg.a, ", b: ", s_reg.b, "\n");
    // a 占 1 字节，b 占 1 字节，总大小应为 2 bytes
    scribe("Magnitudo StandardReg: ", magnitudo(StandardReg), " bytes\n");
    
    redde 0;
}
