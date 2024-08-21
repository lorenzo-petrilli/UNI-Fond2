# Stack vs Heap

### La memoria in C++: Stack e Heap
Quando un programma C++ viene avviato, la memoria viene suddivisa in diverse aree. Tra queste, lo stack e l'heap sono probabilmente le più importanti per i programmatori.
Il sistema operativo, all'avvio di un'applicazione, carica l'intero programma in memoria e alloca una quantità sufficiente di RAM fisica per la sua esecuzione. All'interno di questa RAM, troviamo sia lo stack che l'heap.
Lo stack è un'area di memoria con una dimensione predefinita, tipicamente intorno ai 2 megabyte. Ha una struttura LIFO (Last In, First Out) e viene utilizzato per memorizzare variabili locali, parametri di funzione e informazioni di controllo.
L'heap, d'altra parte, è un'area di memoria più flessibile. Anche se ha una dimensione iniziale predefinita, può crescere o diminuire durante l'esecuzione del programma. L'heap viene utilizzato per l'allocazione dinamica della memoria, permettendo di creare oggetti la cui dimensione o durata non è nota al momento della compilazione.
`È importante sottolineare che entrambe queste aree di memoria si trovano fisicamente nella RAM del computer. C'è un'idea sbagliata comune che lo stack possa essere memorizzato nella cache della CPU. Sebbene sia probabile che parti dello stack siano frequentemente nella cache a causa del suo utilizzo continuo, non è possibile che l'intero stack sia contenuto nella cache della CPU.`
La comprensione di come funzionano lo stack e l'heap è fondamentale per una gestione efficace della memoria in C++. Questa conoscenza permette ai programmatori di fare scelte informate su come allocare e deallocare la memoria, evitando problemi comuni come perdite di memoria o accessi non validi.


### Quindi noi abbiamo la possibilità di scegliere di allocare su heap o su stack e c++ ci darà la porzione di memoria 
## Chiedere porzioni di memoria si chiama allocazione 
#### Come facciamo a farla ? 
La facciamo ogni volta che per esempio iniziaalizziamo una variabile:
prendiamo per esempio un int,sulla maggiorparte delle piattaforme è 4 byte, quindi bisogna trovare un pezzo di mamoria contigua che sia almnno 4 byte

se facciamo questo:
```cpp
int value = 5;
```
abbiamo allocato sullo stack, adeso vediamo sull'heap cosa cambia:
```cpp
int* value= new int;
*value=5;
```
### Vediamo come si allocano tre tipi di dato su stack e su heap
#### stack:
```cpp
struct punto{
        int x,y;
};
int main(){
        //allocazione su stack 
        int value = 5;
        int array[5];
        punto punto1;
}
```
#### Heap:
```cpp
struct punto{
        int x,y;
};

int main(){
        //allocazione su heap
        int* value= new int;
        *value = 5;
        int* array=new int[5];
        punto* punto1= new punto;
}
```
## Possiamo notare che la keyword `new` è quella che si usa per allocare nell'heap
anche per questo dobbiamo usare dei puntatori, perchè usando new avremo come ritorno l'indirizzo di memoria che è stato allocato.

## Perchè lo stack è molto più veloce 
la memoria dello stack e gestita come un unico spazio contiguo, quindi se vogliamo allocare 5 variabili lo stack partirà dalla fine (per comodità gli stack partono dalla fine e crescono verso l'inizio, indirizzi di memoria più grandi avranno le prima variabili che abbiamo allocato quindi alla fine dello stack ci saranno le ultime variabili che abbiamo allocato) quindi la cpù deve fare pochissime istruzione per allocare la memoria
1. spostare il puntatore dello stack sul nuovo indirizzo dopo i byte che i servono per il tipo di variabile 
2. ritornare l'indirizzo del puntatore nuovo 
#### Non dobbiamo liberare la memoria usando `delete` perchè quando lo scope delle variabili termina anche la memoria viene eliminata e l'operazione è praticamente nulla in termini computazionali a differenza della keyword `delete` che invece deve andare a fare delle operazioni 

### Idealmente conviene allocare sullo stack evitndo l'hep quando è possibile ma dipende anche dal lifetime che dobbiamo dare alla variabile,nel caso in cui vogliamo che il dato sia più lungo dello scope in cui si trova oppure se il dato è molto grande (ad esempio una texture di 50MB)


# La performance cambia per l'allocazione non la lettura 
