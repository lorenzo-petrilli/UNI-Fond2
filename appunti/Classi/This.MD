# `This` ed il suo utilizzo 
## Rimanendo nell'ambito delle classi 
uno operatore che è sempre molto utile [(anche per scrivere i getter e i setter)](Getter&Setter.MD) è l'operatore `This`
vediamo bene come si usa e a cosa serve
### Cos'è
l'operatore `This` è disponibile solo in una funzione membro di una classe,chiamati anche metodi e dentro i metodi possiamo fare riferimento a `This` che è un puntatore alla corrente istanza dell'oggetto a cui appartiene il metodo
```cpp
class Persona {
private:
    std::string nome;

public:
    // Setter con disambiguazione
    void setNome(const std::string& nome) {
        this->nome = nome;  // 'this->nome' si riferisce all'attributo della classe
    }
};
```
## Può tornare i riferimenti all'istanza della classe 
qindi permette il method chaining chaiamando più metodi della stessa classe sulla stessa istanza in modo concatenato
```cpp
class Persona {
private:
    std::string nome;
    int età;

public:
    Persona& setNome(const std::string& nome) {
        this->nome = nome;
        return *this;  // Restituisce un riferimento all'oggetto corrente
    }

    Persona& setEtà(int età) {
        this->età = età;
        return *this;  // Restituisce un riferimento all'oggetto corrente
    }
};

int main() {
    Persona p;
    p.setNome("Mario").setEtà(30);  // Concatenazione di metodi
    return 0;
}
```
## **Oggetti dinamici** : 
Quando un oggetto viene creato dinamicamente con `new`, this rappresenta l'indirizzo dell'oggetto allocato in memoria.