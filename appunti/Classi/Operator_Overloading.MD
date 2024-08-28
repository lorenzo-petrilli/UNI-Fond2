## Operator Overloading 
### Cos'è l'Operator Overloading?

L'overloading degli operatori in C++ permette di definire o ridefinire il comportamento di un operatore (come +, -, *, ==, ecc.) per tipi definiti dall'utente (come classi o strutture). Questo permette agli oggetti di queste classi di comportarsi in modo simile ai tipi primitivi.

### Perchè serve:
permette di leggere eglio il codice evitando chiamate a funzioni cosi usiamo solo gli operatori con cui abbiamo familiarità,in più va a migliorare l'strazione e l'incapsulamento così da avere un interfaccia semplice è pulita.

```cpp
class Person {
private:
    string name;
    int age;

public:
    // Costruttore
    Person(string n = "", int a = 0) : name(n), age(a) {}

    // Overloading dell'operatore +
    Person operator+(const Person& other) {
        // Concatenazione dei nomi e somma delle età
        string combinedName = name + " " + other.name;
        int combinedAge = age + other.age;
        return Person(combinedName, combinedAge);
    }
};
```
