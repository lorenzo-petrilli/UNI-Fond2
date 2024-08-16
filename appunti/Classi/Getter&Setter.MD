# Getter & Setter
## Cosa sono e come si usano 
Si collegano al principio di information hiding e astrazione. Sono dei metodi nella programmazione orientata agli oggetti che servono per accedere o manipolare gli attributi di una classe.
Forniscono un modo controllato per leggere e modificare i dati degli oggetti, mantenendo un ottimo incapsulamento.

### Getter
Come si può intuire dal termine stesso, i getter servono per ottenere in ritorno gli attributi privati o protetti di una determinata classe. 
(Per convenzione, di solito hanno un nome che inizia con `get` seguito dal nome dell'attributo con la prima lettera maiuscola)
```cpp
class Persona {
private:
    string nome;

public:
    // Getter
    string getNome() const {
        return nome;
    }
};
```
### Setter 
Allo stesso modo, il setter ha una funzionalità simile ma serve per cambiare il valore di un attributo. È un metodo che prende in input il nuovo valore e lo va a modificare.
```cpp
class Persona {
private:
    std::string nome;

public:
    // Setter
    void setNome(const std::string& nuovoNome) {
        nome = nuovoNome;
    }
};
```

### Perché usare getter e setter?
1. `Incapsulamento`: Gli attributi di una classe sono spesso dichiarati come private o protected, in modo che non possano essere modificati direttamente dall'esterno. Getter e setter forniscono un'interfaccia pubblica per accedere a questi attributi, mantenendo il controllo sulla validità dei dati.

2. `Validazione`: I setter possono includere logiche di validazione per assicurarsi che i valori assegnati agli attributi siano validi. Ad esempio, si potrebbe voler verificare che un attributo numerico sia sempre positivo.

3. `Flessibilità`: L'uso di getter e setter consente di cambiare l'implementazione interna di una classe senza dover modificare il codice che utilizza la classe. Ad esempio, si potrebbe iniziare con un semplice attributo e successivamente decidere di calcolarne il valore dinamicamente, senza cambiare l'interfaccia pubblica della classe.