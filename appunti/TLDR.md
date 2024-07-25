# TLDR 
## Dove metto le cose importante che voglio tenre a mente tralasciando gli appunti di mera sintassi 

### Funzioni Sovraccaricate(overloading)

C++ permette di definire più funzioni con lo stesso nome ma con parametri differenti. Questo si chiama sovraccarico delle funzioni.
```cpp
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
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
