# Operatore Freccia "->"
L'operatore freccia -> in C++ è un operatore di accesso a membri utilizzato per accedere ai membri (metodi o variabili) di un oggetto tramite un puntatore. In altre parole, l'operatore -> combina la dereferenziazione di un puntatore e l'accesso ai membri in un'unica operazione.
Nel caso in cui avessimo una situizione dove chiamiamo un metodo di un istanza che è un puntatore non possiamo chiamare direttamente il metodo, dobbiamo prima dereferenziare il puntatore e poi chiamarlo `(*puntatore).metodo()`
vediamolo in modo più esplicito

```cpp
class Persona{
    public:
            void Print(){
                cout<<"hello!"<<endl;
            }
};

int main(){
    Persona a;
    a.Print;

    Persona* ptr = &a;
    (*ptr).Print();//questo funziona ma non è molto leggibile
    /* possiamo fare questo 
    ptr->Print();
    che equivale e dereferenziare il puntatore e fare quello che abbiamo visto sopra */
}
```
### Vediamo in un loop
```cpp
class Persona {
private:
    string nome;

public:
    // Costruttore esplicito per impostare il nome
    Persona(const string& nome_iniziale) {
        setNome(nome_iniziale);
    }

    // Metodo per salutare
    void saluta() const {
        cout << "Ciao, mi chiamo " << nome << endl;
    }
};

int main() {
    // Numero di persone da gestire
    const int numPersone = 4;

    // Creiamo un array di puntatori a Persona
    Persona* persone[numPersone] = {
        new Persona("Mario"),
        new Persona("Luigi"),
        new Persona("Peach"),
        new Persona("Yoshi")
    };

    // Ciclo for per chiamare il metodo saluta su ciascun puntatore
    for (int i = 0; i < numPersone; ++i) {
        persone[i]->saluta();
    }

    // Deallocazione della memoria
    for (int i = 0; i < numPersone; ++i) {
        delete persone[i];
    }

    return 0;
}
```
# `->` ci serve se usaimo l'operatore `new` per creare gli oggetti visto che ci viene restituito un puntatore 