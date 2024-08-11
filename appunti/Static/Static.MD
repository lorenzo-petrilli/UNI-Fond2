# Utilizzo di Static 
## Come cambia quando è usato fuori oppure usato dentro una classe o struct
quando dichiariamo una variabile come `static` in uno scope globale sarà visibile solo a quel determinato file cpp altrimenti sarà disponibile globalmente a tutta la translation unit;
Simile  a come funziona private nelle classi 

## Differenze se utilizzato in classi o struct

permette di avere una sola variabile condivisa per ogni istanza della clase o della struct, come se tutte le varibili che abbiamo dichiarato statiche in una classe quando le chiamiamo da entità diverse puntano tutte alla stessa porzione di memoria 

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
Possiamo definire static anche i metodi.Un metodo statico può essere chiamato senza creare un'istanza della classe o struct. Non ha accesso ai membri non statici della classe o struct.
Quindi possiamo usare in un metodo static solo varibili static.
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
il compilatore quando creiamo un metodo non static e come se segretamente passa un instanza della classe in cui è dichiarato come parametro della funzione, utilizzando static il compilatore non lo passa più quindi non possiamo avere accesso alle varibili

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