# Classi 
## Preambolo
#### Capiamo la differenza tra classi e struct 

Definizione di Struct
Una struct è un tipo di dato definito dall'utente che permette di raggruppare variabili sotto un unico nome. In C++, le struct sono molto simili alle classi, con alcune differenze chiave.

` Accesso Predefinito `: I membri di una struct sono pubblici per default, mentre quelli di una classe sono privati.
`Uso Storico`: Le struct sono spesso usate per raggruppare semplici dati senza funzionalità di incapsulamento.

```cpp
struct NomeStruct {
    Tipo variabile;
    void metodo();
};
```

|Classi|Struct|
|-------------------|-----------------------|
|I membri sono privati per default.| I membri sono pubblici per default.
|Utilizzata principalmente per definire oggetti con incapsulamento, ereditarietà e polimorfismo.| Utilizzata per raggruppare semplici dati senza la necessità di incapsulamento.|
|Supporta ereditarietà pubblica, protetta e privata.| Supporta ereditarietà, ma i membri ereditati sono pubblici per default.|
|Può avere più overhead dovuto all'uso delle caratteristiche OOP.|Generalmente ha meno overhead, essendo utilizzata per dati più semplici.|

# Classi
## capiamo le loro caratteristiche 
concetti che vedremo e che ci serviranno
concetti che servono 

- astrazione
- information hiding
- encapsulation
- gerarchie

### Astrazione
L'astrazione è un concetto fondamentale nella programmazione orientata agli oggetti (OOP) che consiste nel nascondere i dettagli complessi di un sistema e mostrare solo le funzionalità essenziali. In altre parole, si tratta di ridurre la complessità di un sistema estraendo le caratteristiche principali e ignorando quelle non essenziali. Questo permette di gestire la complessità dei sistemi software concentrandosi solo sugli aspetti rilevanti.

### Information Hiding
Il concetto di information hiding, o nascondere l'informazione, è strettamente legato all'astrazione e all'incapsulamento. Esso consiste nel nascondere i dettagli di implementazione di un oggetto o di un modulo, esponendo solo una interfaccia pubblica. Questo migliora la modularità del software e riduce l'interdipendenza tra i componenti, rendendo il sistema più facile da mantenere e modificare.

### Encapsulation
L'incapsulamento è un principio della programmazione orientata agli oggetti che prevede l'inclusione di dati (variabili) e metodi (funzioni) all'interno di un'unica unità chiamata oggetto. L'incapsulamento consente di nascondere i dettagli di implementazione e di proteggere lo stato interno dell'oggetto, esponendo solo ciò che è necessario attraverso una interfaccia pubblica. Questo aiuta a mantenere l'integrità dei dati e facilita la manutenzione del codice.

### Gerarchie
Le gerarchie si riferiscono alla struttura ad albero che rappresenta le relazioni tra le classi in un sistema orientato agli oggetti. Le gerarchie permettono di definire relazioni di ereditarietà tra le classi, dove una classe derivata (o sottoclasse) eredita attributi e metodi da una classe base (o superclasse). Questo favorisce il riuso del codice e la progettazione di sistemi più organizzati e modulari. Le gerarchie possono essere semplici, con una singola catena di ereditarietà, o più complesse, con classi che ereditano da più superclassi.

# specificatori

- private
- protected
- public

## privati:

sono membri accessibili solo dall’interno della classe(se non viene specificato nulla come dai il programma assegna private di default ) 

## protected:

simile al private, sono accessibili solo agli oggetti della stessa classe ma anche dalle classi derivate 

## public:

elementi accessibili da qualunque classe



# Definizione di una classe Rettangolo
```cpp
def class rectangle{
    int width,height;
    public:
     
    void set_height(int);//fornisce un livello di protezione alla classe per evitare problemi dovuti all'utente,funzione setter
    void set_width(int);//setters
    int get_height();//getters
    int get_width();//getter
    int area();
    
}
```
# Uso funzione rettangolo
```cpp
int main(){
    rectangle rect;
    rect.setwidth(3);//nome oggetto di tipo rettangolo(istanza di rettangolo) ,punto,funzione da usare relativa all'oggetto
    rect.setheight(4);
    cout<<rect.area();
    rect.width=.....//non si può fare perche width è privato e non visibile dal main
    
}
```
# Definizione di una funzione nella classe
#### comodo ma non abbiamo information hiding
```cpp 
def class rectangle{
    int width,height;
    public:
     
    void set_height(int);//fornisce un livello di protezione alla classe per evitare problemi dovuti all'utente,funzione setter
    void set_width(int);//setters
    int get_height();//getters
    int get_width();//getter
    int area(){return width*height};//scrittura definita "inline", comoda ma si sporca la deifinizione della classe 
    
}
```
#### scrivere fuori dalla classe così l’utente non vede come vengono eseguite le cose (generalmente si scrive in un altro file con tutte le funzioni)
```cpp
//si procede con l'utilizzo degli scope 
void rectangle::set_height(int y){
    height=y
}

int rectangle::get_height(){
    return height;
}
```
# Esempio di più oggetti della stessa classe 
```cpp
int main (){
    rectangle rect,rectb;
    rect.set_height(4),rect.set_width(3);
    rectb.set_height(6),rectb.set_width(5);
    cout<<"area primo"<<rect.area()<<endl;//12
    cout<<"area secondo "<<rectb.area()<<endl;//30
}
```
