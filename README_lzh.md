<div align="center">

# S C O R I V M
**硅 石 律 令 與 典 範**

<br>

*<a href="README.md">Lingua Latina</a> | 文言*

<br>

**匠人：YV LIANGYANG**
*清華大學*

<br>
</div>

**序 言**

夫今之程序，蔓衍無度，疊庫若山，致使算機呻吟其下。茲作意在追復古道，明體達用。蓋大圭不琢，至理必簡。

Scorivm 者，直築於精鐵之上，其體絕微，僅二百四十千節，而用至大。不假外求，不累於繁雜之聯結。納原本之辭，滌其污垢，直化為 X86_64 機器真言。此間去偽存真，唯留絕對之理，乃人智與硅石幽理交織之所。茲作所以明志：但使寸心清明，法度嚴整，雖毫末之器，可就千秋之業。


### 卷 一 ： 論 造 物 之 理

此作非出偶然，實本於至理。欲使機樞流轉如電，必奉此數端：

**一曰析理求樹。** 吾之析文器，絕不役於外物。採納亂辭，斷以義理，於混沌中拔出文法之樹。此樹復化為賦命唯一之式，使萬物之變，唯生一次，永不更易。

**二曰十一樞衛與零傾溢。** 兵陣之中，內存遲滯且多變。乃以圖彩之術，召十一物理樞衛赴陣。瞬息之變數，盡藏於此驍騎，必使纖毫數據不墜於深棧。

**三曰坦途絕卜。** 今之算機，多耗時於前途之妄測。吾之法度，遇 si 之擇，則絕此妄卜。引 CMOVcc 之令，化曲為直，使指令之川奔流無阻。算機無揣度，故動罔不吉。


### 卷 二 ： 論 言 之 體 相

Scorivm 絕非他門附庸，乃精鐵之絕對主宰。其御物之律有四：

**一曰絕俗典之梏。** 徹底摒絕 C 之俗典。欲觸本根而避系統之陰影，唯闢 barbara 為門以通核樞。

**二曰陣軍與游標。** 馭存之度，極嚴且明。via 為無界之裸游標；cohors 為度量嚴明之重裝軍。此中萬象，絕無暗度陳倉之理。

**三曰微粒與密實之構。** 為御底層器物與網羅，創 forma densa 密實之構以壓實眾端，不留毫隙。復以 mica 微粒為刃，分剖毫芒，雖二進制之微，亦受嚴剖。

**四曰輔音骨幹。** 恤書者指力之疲，律許刪減繁辭，獨存骨幹。故 forma 約作 frm，cohors 約作 crs，mica 作 mic，aliter 作 alt。凡目視其簡，而造化之樹知其本一。


### 卷 三 ： 決 勝 之 局

試鋒於斐波那契之陣，循用 fib(40) 逾兩億四百萬次。與巨獸 MSVC 較，勝負如下：

* **結營：** 巨獸之軀，量以吉字節。吾作僅以二百四十千節獨篇立世。
* **被甲：** 巨獸耗十三毫秒以煉碼成鋼。吾作悄然引弦，十一毫秒即成。
* **鋒刃：** 巨獸產物龐達八十五千節。吾之槍尖，剔透純粹，僅二千節。
* **交鋒：** 硅石場中，吾持四重兵法以克宿敵：
  * **-O0 素衣：** 五百四十八毫秒。
  * **-O1 初陣：** 三百二十六毫秒，與巨獸平分秋色。
  * **-O2 陣解：** 一百零一毫秒，化繁為簡，展列平川。
  * **-O3 極理折疊：** 七毫秒。未動而先知，乃戰於廟堂之上也。


### 卷 四 ： 論 提 調 之 淵 息

苟以純粹電池運此機，則時延驟增至五百六十七毫秒。世人多謂之疾，實乃物理之常，純粹之大功也。蓋臃腫之器，遇算則警報四起，驚擾內核，強起雷霆之電。然吾作寧靜絕倫，無冗餘之波瀾。提調者未之覺也，故淵息不醒，而算機獨留底層之微息。此乃硅石最真之脈動也。


### 卷 五 ： 起 陣 之 儀

欲喚此機，當守 CMake 之法：
```bash
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

誦此真言，以昭明理：
```bash
./bin/scorivm tests/fib.sco -o fib.exe
./bin/scorivm tests/fib.sco -O3 -o fib.exe
./bin/scorivm tests/fib.sco -o fib.exe --emitte-ir
./bin/scorivm tests/fib.sco -o fib.exe --emitte-asm
```


### 卷 六 ： 格 物 之 例

觀此二象，一為純理，一為御鐵。

**法相一：籌算與玄理**
```scorivm
actio fib(n: medius) -> medius {
    si (n <= 1) redde n;
    aliter redde fib(n - 1) + fib(n - 2);
}

actio princeps() -> medius {
    scribe("Calculando... Exspecta!\n");
    sit res: medius = fib(40);
    scribe("Resultatum: ", res, "\n");
    redde 0;
}
```

**法相二：御鐵之術**
```scorivm
forma densa edita RegistrumStatus {
    sit paratus: logica mica 1; 
    sit signum: p8 mic 3;      
    sit _: p8 mic 4;           
}

// 外域名必與動聯庫符契合無間
actio bbr("kernel32.dll") WriteFile(
    hFile: via nhl,
    lpBuffer: via RegistrumStatus,
    nNumberOfBytesToWrite: p32,
    lpNumberOfBytesWritten: via p32,
    lpOverlapped: via nhl
) -> lgc;
```

<br>
<br>

<div align="center">
  <i>"源於微末，方見堅固。出於簡素，鑄就永恆。"</i>
</div>