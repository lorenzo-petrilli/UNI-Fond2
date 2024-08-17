# Costruttori 
### cosa sono e a cosa servono
Sono una specie di metodi speciali che si eseguono ogni volta che viene instanziato un ogetto.
Servono per inizializzare l'oggetto e quindi andare ad assegnare i valori inziali ai suoi attributi.
```cpp
class Punto {
public:
    int x, y;

    // Costruttore senza parametri (costruttore di default)
    Punto() {
        x = 0;
        y = 0;
    }

    // Costruttore con parametri
    Punto(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }
};
```
## In questo esempio vediamo due tipi di costruttori
Il primo non prende alcun parametro e quindi li inzializza ad un default, mentre possiamo crearne anche di tipo che prendono un parametro e specificarlo ogni volta che creiamo l'ogetto; In questo caso li abbiamo creati entrambi.

# Distruttori
Il distruttore è una funzione membro di una classe che viene chiamata automaticamente quando un oggetto della classe esce dal suo ambito di vita, cioè quando viene distrutto. Lo scopo principale del distruttore è quello di liberare le risorse che l'oggetto potrebbe aver acquisito durante il suo ciclo di vita, come la memoria dinamica.

```cpp
class Punto {
public:
    int x, y;

    // Costruttore
    Punto(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }

    // Distruttore
    ~Punto() {
        // Codice per liberare risorse, se necessario
        // In questo caso, non è necessario perché non ci sono risorse dinamiche
    }
};
```
