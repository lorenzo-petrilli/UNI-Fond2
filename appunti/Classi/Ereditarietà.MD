# Ereditarietà

L'ereditarietà è un concetto fondamentale nella programmazione orientata agli oggetti (OOP) e viene utilizzata in C++ per creare nuove classi (classi derivate) basandosi su classi esistenti (classi base). Questo permette di riutilizzare codice, migliorare la struttura del software e facilitare la manutenzione.

Prendiamo per esempio che volessimo usare la nostra classe Persona, che è generale, per creare altri tipi di classi che vanno a identificare altri tipi di persona.

```cpp
#include <iostream>
using namespace std;

class Persona {
public:
    string nome;
    int età;

    void mostraInformazioni() {
        cout << "Nome: " << nome << ", Età: " << età << endl;
    }
};

class Studente : public Persona {
public:
    string scuola;

    void mostraInformazioni() {
        cout << "Nome: " << nome << ", Età: " << età << ", Scuola: " << scuola << endl;
    }
};

int main() {
    Studente s;
    s.nome = "Mario Rossi";
    s.età = 20;
    s.scuola = "Università di Roma";
    s.mostraInformazioni();
    return 0;
}
```
### Facendo così abbiamo potuto usare gli attributi nome ed età di Persona in studente senza doverlo riscriverlo di nuovo e se abbiamo molte classi possiamo modificarlo solo una volta per renderlo effettivo per tutte le classi "figlie"

L'ereditarità ovviamente si condivide "verso il basso" le classi derivate non possono passare i loro attributi alla classe da cui derivano 