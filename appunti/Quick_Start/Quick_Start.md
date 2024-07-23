# Quick start in c++

### varibili
```cpp

    bool b; // true o false
    char c; // singolo valore alfanumerico

    int i;           // numero intero (4 byte)
    short sh;        // numero intero (2byte)
    long lo;         // numero intero (8byte)
    unsigned int ui; // numero intero senza segno ()
    float f;         //numeri a virgola mobile 
    double d;        //numero a virgola mobile con maggiore precisione 
```

le variabili vanno sempre iniziallizzate (non usare auto)
##### le varibili possono essere modificate con l'utilizzo di modificatori come long, short, signed e unsigned



```cpp
 int a = 10;
if (a > 5) {
// codice eseguito se a è maggiore di 5
} else if (a == 5) {
// codice eseguito se a è uguale a 5
} else {
// codice eseguito se a è minore di 5
}
```
## gli operatori di confronto
#### spieghiamo prima cosa si intende per short circiut
nel caso degli operatori and e or usare gli short circuit abbrevia i tempi di esecuzione perchè se già alla prima condizione si annulla tutto il controllo delle altre condizioni

```cpp
// CONFRONTI
    (1 == 1); //  è uguale?
    (1 != 2); //  è diverso?
              // &  AND senza short circuit
              // || OR  con short circuit
              // && AND con short circuit
```
