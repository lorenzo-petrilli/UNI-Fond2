# Funzioni
### veloce introduzione sulle funzioni 

Definizione di una Funzione

La definizione di una funzione include la dichiarazione e il corpo della funzione, che contiene il codice che verrà eseguito quando la funzione viene chiamata.

```cpp
returnType functionName(parameter1Type parameter1Name, parameter2Type parameter2Name, ...) {
    // Corpo della funzione
}
```
Funzioni con Valore di Ritorno

Una funzione può restituire un valore utilizzando il tipo di ritorno specificato nella dichiarazione della funzione. Il valore di ritorno viene fornito usando l'istruzione return.

```cpp
returnType functionName(parameters) {
    // Corpo della funzione
    return value; // Restituisce un valore di tipo returnType
}
```
# Parametri di Funzione
### Parametri per Valore

I parametri vengono copiati nella funzione e le modifiche a questi non influenzano le variabili originali.
```cpp
void modifyValue(int x) {
    x = 10;
}
```
### Parametri per Riferimento

I parametri passati per riferimento permettono alla funzione di modificare le variabili originali.
```cpp
void modifyValue(int &x) {
    x = 10;
}
```

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


