# TLDR 
## Dove metto le cose importante che voglio tenre a mente tralasciando gli appunti di mera sintassi 

### Funzioni Sovraccaricate(Overloading)

C++ permette di definire più funzioni con lo stesso nome ma con parametri differenti. Questo si chiama sovraccarico delle funzioni.
```cpp
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}
```

## Gli operatori di confronto
#### Spieghiamo prima cosa si intende per short circiut
Nel caso degli operatori and e or usare gli short circuit abbrevia i tempi di esecuzione perchè se già alla prima condizione si annulla tutto il controllo delle altre condizioni

```cpp
// CONFRONTI
    (1 == 1); //  è uguale?
    (1 != 2); //  è diverso?
              // &  AND senza short circuit
              // || OR  con short circuit
              // && AND con short circuit
```
### File_header
#### Guardie di inclusione:
```cpp
#ifndef punto_h
#define punto_h
#endif
```
Questi comandi impediscono l'inclusione multipla del file header. Se il file viene incluso più di una volta in un progetto, senza queste guardie si otterrebbero errori di compilazione dovuti a dichiarazioni multiple. La sequenza funziona come segue:

1. ` #ifndef punto_h `: verifica se punto_h non è ancora stato definito.
2. `#define punto_h`: se punto_h non è definito, lo definisce.
3. `#endif`: chiude il blocco delle guardie di inclusione.



### Classi
## capiamo le loro caratteristiche 
concetti che vedremo e che ci serviranno
concetti che servono 

- astrazione
- information hiding
- encapsulation
- gerarchie
