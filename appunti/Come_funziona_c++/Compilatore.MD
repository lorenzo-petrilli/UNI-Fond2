# Compilatore 
[fonte youtube](https://youtu.be/3tIqpEmWMLI?si=sc-3yhjkmkOHAmqD)

### Capiamo ora due parti importanti del linguaggio C++

Per capire meglio come funziona C++ "under the hood" dobbiamo capire due passaggi fondamentali di quando andiamo a compilare il nostro codice.
Il compilatore C++ prende il nostro codice C++ e lo converte in codice macchina che il nostro computer può eseguire. Lo fa in due fasi principali:

1. Preelaborazione: Il preelaboratore prende il nostro codice C++ e fa alcune trasformazioni di base su di esso. Ad esempio, sostituisce le istruzioni #include con il contenuto dei file inclusi.
2. Compilazione: Il compilatore prende il codice preelaborato e lo converte in codice macchina. Questo comporta diverse fasi, tra cui la tokenizzazione del codice, l'analisi del codice, la generazione di un albero sintattico astratto e la generazione del codice macchina.

## Le fasi della compilazione

Ricordiamo che il compilatore non ha come interesse il tipo di file, è semplicemente una "convenzione" che usiamo i file .h e i file .cpp; altrimenti, se specificato, possiamo usare qualsiasi tipo di file che contenga del codice in C++ per compilare.

### Translation Unit
Quando compiliamo un file `.cpp`, ognuno di questi e i file che include vengono trasformati in un file `.obj` e sono definiti Translation Unit. 
*Un file `.cpp` non corrisponde ad una sola Translation Unit perché magari più file `.cpp` sono inclusi in un solo file `.cpp` di compilazione, quindi avendo una sola Translation Unit.*
Se invece si fa un progetto con diversi file `.cpp` ma non vengono mai inclusi tra di loro, allora si avranno diverse Translation Unit.

## Pre-Processor statement

### Cosa succede quando usiamo `#include`
Sostanzialmente va a copiare tutto quello che è nel file `.h` e lo incolla nel file .cpp che lo include.
Ad esempio, avendo il file math.cpp:

```cpp
int multiply(int a, int b) {
    int result = a * b;
    return result;
```
 come si vede manca una parentesi graffa,quindi il compilatore darebbe un errore,allora possiamo creare `EndBrace.h`

 EndBrace.h
 ```cpp
 }
 ```

 Quindi se ora scriviamo questo non avremo più alcun errore e il compilatore funzionerà:
 ```cpp
 int multiply(int a,int b){
    int result=a*b;
    return result
#include Endbrace.h
 
 ```

 praticamente sarà così:
```cpp
 int multiply(int a,int b){
    int result=a*b;
    return result
 // copio il contenuto di Endbrace.h
 }
 // fine della copia del contenuto di EndBrace.h
 ```


 ### Utilizzo di Define
 Sostanzialmente va a sostituire tutto quello che noi definiamo con una parola da noi creata. Ad esempio:
  ```cpp
  #define INTEGER int 
 int multiply(int a,int b){
    INTEGER result=a*b;
    return result;
 }

 ```
 Possiamo quindi usare `INTEGER` al posto di int e il compilatore funzionerà lo stesso.


 ### utilizzo di #if

 Ci permette di includere o escludere dalla compilazione determinate porzioni di codice in base ad una nostra condizione scelta:
  ```cpp
#if 0 //viene sempre escluso in questo caso  
 int multiply(int a,int b){
    int result=a*b;
    return result
 }
 #endif
 ```


