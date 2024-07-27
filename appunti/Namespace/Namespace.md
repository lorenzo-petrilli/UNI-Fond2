# Namespace

In programmazione, un namespace (spazio dei nomi) è una struttura che consente di organizzare il codice in modo che nomi di variabili, funzioni e altri identificatori non entrino in conflitto con nomi di identificatori simili in altri contesti del programma. I namespace sono utilizzati per evitare collisioni di nomi e migliorare la modularità del codice.

In C++, il termine "namespace" si riferisce a un meccanismo che consente di raggruppare un insieme di identificatori sotto un nome specifico. Il namespace standard in C++ è chiamato `std` e contiene molte delle funzioni e classi standard della libreria del linguaggio. Ad esempio, `cout` e `endl` sono definiti nel namespace `std`.

Ecco un esempio di come si utilizza un namespace in C++:


```c++
#include <iostream>

// Dichiarazione di un namespace chiamato 'mio_namespace'
namespace mio_namespace {
    int x = 5;
    void stampaMessaggio() {
        std::cout << "Ciao dal mio namespace!" << std::endl;
    }
}

int main() {
    // Accesso alle variabili e alle funzioni del namespace 'mio_namespace'
    std::cout << mio_namespace::x << std::endl;
    mio_namespace::stampaMessaggio();

    return 0;
}


```


## Semplificato:
in pratica è come una creazione di oggetto dove abbiamo disponibili funzioni o variabili da richiamare in ogni momento e possiamo chiamare due variabili in modo uguale basta che usino due namespace diversi 