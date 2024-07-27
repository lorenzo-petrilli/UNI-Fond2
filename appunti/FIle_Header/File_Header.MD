# File Header
In C++, un "file header" è un termine informale che si riferisce alla parte superiore di un file di codice sorgente (solitamente con estensione .h o .hpp) che contiene dichiarazioni di funzioni, classi, costanti e altre dichiarazioni di tipo che saranno utilizzate in altri file del progetto.

## Vediamone un esempio
punto.h
```cpp
// File punto.h (HEADER)

// se non è stato definito 
#ifndef punto_h
//definisci
#define punto_h

struct punto {
    int x;
    int y;
};

#endif
```
### Capiamo ora le varie parti
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

#### Dichiarazione della struttura punto
```cpp
struct punto {
    int x;
    int y;
};
```
Qui viene dichiarata una struttura chiamata punto con due membri di tipo int, x e y. Questa dichiarazione è disponibile per essere inclusa in altri file sorgente.
### Utilizzo del file punto.h in un altro file 

```cpp
#include <iostream>
#include "punto.h"

int main() {
    punto p1;
    p1.x = 10;
    p1.y = 20;

    std::cout << "Punto p1: (" << p1.x << ", " << p1.y << ")" << std::endl;

    return 0;
}
```