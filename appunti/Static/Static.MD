# Utilizzo di Static 
## Come cambia quando è usato fuori oppure usato dentro una classe o struct
Quando dichiariamo una variabile come `static` in uno scope globale, sarà visibile solo a quel determinato file CPP; altrimenti, sarà disponibile globalmente a tutta la translation unit. È simile a come funziona `private` nelle classi.


## Differenze se utilizzato in classi o struct

Permette di avere una sola variabile condivisa per ogni istanza della classe o della struct. Questo significa che tutte le variabili dichiarate come statiche in una classe o struct, quando chiamate da entità diverse, puntano tutte alla stessa porzione di memoria. 

```cpp
struct MyStruct {
    static int sharedValue;
};

// Definizione fuori dalla struct
int MyStruct::sharedValue = 0;

int main() {
    MyStruct a, b;
    a.sharedValue = 5;
    std::cout << b.sharedValue << std::endl; // Stampa 5
}
```
## Metodo statico in una classe
Possiamo definire come statici anche i metodi. Un metodo statico può essere chiamato senza creare un'istanza della classe o struct. Non ha accesso ai membri non statici della classe o struct, quindi possiamo usare in un metodo statico solo variabili statiche.
```cpp
class MyClass {
public:
    static void staticMethod() {
        std::cout << "Metodo statico chiamato" << std::endl;
    }
};

int main() {
    MyClass::staticMethod(); // Chiamata senza creare un'istanza
}
```
## Per il compilatore cosa cambia 
Il compilatore, quando creiamo un metodo non statico, è come se segretamente passasse un'istanza della classe in cui è dichiarato come parametro della funzione. Utilizzando static, il compilatore non lo passa più, quindi non possiamo avere accesso alle variabili non statiche.    

```cpp
struct Entity
{
    static x,y;
    static void Print(){
        std::cout << x<<","<<y<<endl;    
    }
    //cosa farebbe il compilatore se Print() non fosse stata dichiarata static, tutti i metodi delle classi funzionano cosi in segreto
    /*
    static void Print(Entity a){
        std::cout << a.x<<","<<a.y<<endl;    
    }
    */

}

int main(){
    Entity e;
    e.x=5;
    e.y=8;
    Entity::Print();
}
```