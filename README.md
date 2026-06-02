<div align="center">

# S C O R I V M
**L E X · E T · O R D O · S I L I C I I**

<br>

*Lingua Latina | <a href="README_zh-CN.md">简体中文</a>*

<br>

**Auctore YV LIANGYANG**
*Universitas Tsinghuaensis*

<br>
</div>

**P R O O E M I V M**

In temporibus nostris, ubi aedificia programmatum sine fine et sine ratione in immensum crescunt, et ubi machinae sub gravi pondere bibliothecarum turgidarum gemunt, hoc opus ad virtutem antiquam et austeram revertitur. Maiestas non in multitudine, sed in simplicitate et veritate consistit. 

Scorivm est compilator e metallo nudo aedificatus, pars minima sed potentissima, pendens tantum **CCXL milia octetorum (240 KB)**. Nullis adminiculis externis, nullis vinculatoribus obesus, codicem legit, purgat, et directe in praecepta machinae (X86_64) cum formis exsecutabilibus vertit. Hic non est locus ornamentis aut fallaciis; hic est solus locus veritati absolutae, ubi intellectus humanus cum structura intima silicii convenit. Opus hoc est demonstratio: nos adhuc posse res magnas aedificare ex parvis, si modo disciplinam mentis servamus.


### L I B E R · I : D E · A R C H I T E C T V R A · C O M P I L A T O R I S

Opus non fortuito constructum est, sed summa peritia et ratione. Machina, ut sine ullo impedimento ad celeritatem lucis procedat, his praeceptis aedificatoria paret:

**I. Lector et Arbor Veritatis:** Lector noster sine ullis servis externis aut machinis generantibus functiones suas explet. Codicem rudem accipit, in partes secat divinas, et ex chaos arborem logicam deducit. Haec arbor transit in formam intermediam SSA, ubi omnis variabilis semel tantum nascitur.

**II. Undecim Ministri Nullo Exsilio:** In praedis operandis, memoria RAM iniqua et tarda est. Ergo undecim registra physica in campum vocata sunt per artem colorationis graphorum. Variabiles caducae in praesidia velociora recipiuntur, ne ulla data in profundum acervi repelli debeant.

**III. Via Recta et Abolitio Divinationis:** Processores hodierni multum temporis perdunt vaticinando de viis futuris. In architectura nostra, ubi conditio `si` occurrit, divinatio evitatur. Scorivm flumen instructionum rectum facit per praecepta conditionalia `CMOVcc`. Machina numquam errat, quia nunquam divinat.


### L I B E R · I I : D E · N A T V R A · E T · L E G I B V S · L I N G V A E

Lingua ipsius Scorivm non est ancilla aliarum, sed domina metalli nudi. Hae sunt leges quibus gubernat:

**I. Sine Vinculis Barbarorum:** Scorivm bibliothecam normatam C penitus respuit. Ut machinam sine ulla umbra systematis operandi tangat, sola porta `barbara` adhibetur ad communicandum cum nucleo intimo.

**II. Acies, Cohors et Via:** Memoria stricte et aperte regitur. `Via` est monstrator nudus sine finibus; `cohors` est sagitta gravis cum mensura longitudinis. Nullae conversiones occultae inter has formas tolerantur.

**III. Micae et Formae Densae:** Ad ferramenta et retia imperanda, `forma densa` structuras sine spatiis inanibus cogit. Per verbum `mica`, programmatur ipsos digitos binarios minutissimos secare et iungere potest.

**IV. Sceleta Consonantium:** Ne digiti scribentium fatigentur, lex sinit verba classica ad ossa consonantium reduci. Ita `forma` fit `frm`, `cohors` fit `crs`, `mica` fit `mic`, `aliter` fit `alt`. Oculi hominum brevitatis gaudent, sed oculus compilatoris in arbore AST utrumque unum esse intelligit.


### L I B E R · I I I : M A X I M V M · C E R T A M E N

Ad virtutem teli probandam, machina nostra vocata est in proelium maximum numerorum Fibonaccianorum: computationem recursivam `fib(40)`. Ubi ducenties et quater decies viciens centena milia recursiones invocantur. Si Scorivm cum gigante MSVC comparas, hanc aequitatem et victoriam invenies:

* **Magnitudo Castrorum:** Gigas formidabilis in gigaoctetis metitur. Scorivm tantum **240 KB** unici fasciculi occupat.
* **Tempus Armandi:** Gigas, ut codicem in ferrum mutet, XIII millisecondis indiget. Scorivm sine ullo murmure in **XI millisecondis** fulgurat.
* **Magnitudo Teli:** Exitus gigantis LXXXV KB requirit. Scorivm teli cuspidem puram in **II KB** perficit.
* **Ictus in Proelio:** In campo silicii, machina nostra quattuor gradus perfectionis habet, quibus hostem sternit:
  * **-O0 (Sine Arte):** DXLVIII (548) milliseconda.
  * **-O1 (Tactica Prima):** CCCXXVI (326) milliseconda. Aequo gradu currit cum gigante.
  * **-O2 (Evolutio Finium):** CI (101) milliseconda. Fundamenta recursiones in aciem rectam explicantur.
  * **-O3 (Plicatura Absoluta):** VII (7) milliseconda. Compilator responsum percipit et plicat antequam programma currit. Victoria ante proelium.


### L I B E R · I V : D E · S O M N O · G V B E R N A T O R I S

Si hanc machinam sub potestate pilae curris, tempus exsecutionis subito ad **~DLXVII (567) milliseconda** augetur. Multi hoc vitium putant, sed re vera lex physicae et triumphus puritatis est. Cum aedificia crassa curres, preces et monita ad systema fundunt, unde gubernator terretur et vim maximam instanter excitat. Scorivm autem tam quietum, tam purum est, ut nullas inanes moras generet. Gubernator id non sentit, ergo in somno manet et processor ad infimam frequentiam virtutis relinquitur. Hoc est pulsus verus et frigidus silicii ipsius.


### L I B E R · V : R I T V S · E T · I N C A N T A T I O N E S

Ad hanc machinam aedificandam, sola lex *CMake* requiritur:
```bash
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

Utere his incantamentis ad compilandum:
```bash
./bin/scorivm tests/fib.sco -o fib.exe
./bin/scorivm tests/fib.sco -O3 -o fib.exe
./bin/scorivm tests/fib.sco -o fib.exe --emitte-ir
./bin/scorivm tests/fib.sco -o fib.exe --emitte-asm
```


### L I B E R · V I : S P E C I M E N · S C R I P T V R A E

Ecce duo specimina artis. Primum est logica pura, secundum est dominatio ferramentorum.

**Specimen I: Computatio et Logica**
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

**Specimen II: Dominatio Metalli Nudi**
```scorivm
forma densa edita RegistrumStatus {
    sit paratus: logica mica 1; 
    sit signum: p8 mic 3;      
    sit _: p8 mic 4;           
}

// Nomen functionis exactum esse debet ut in DLL definitur
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
  <i>"Ex parvis, firmitas. Ex simplicitate, aevum."</i>
</div>