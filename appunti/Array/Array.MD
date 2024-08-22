# Array
Gli array in C++ sono una struttura dati che permette di memorizzare più elementi dello stesso tipo in una sequenza contigua di memoria. Ogni elemento in un array è identificato da un indice, che parte da 0. Gli array sono molto utili quando si ha bisogno di lavorare con collezioni di dati dello stesso tipo, come una lista di numeri, caratteri o oggetti.
```cpp
int array[10];  // Dichiarazione di un array di 10 interi
```
possiamo inserire i dati per ogni indice oppure tutti insieme
```cpp
array[2]=0;


int array[5] = {1, 2, 3, 4, 5};  // Inizializza l'array con questi valori
```
per stampare possiamo usare lo stesso metodo 
```cpp
cout<<array[2]<<endl;
```
non possiamo usare:
```cpp
cout<<array<<endl;
```
perchè stamperebbe l'indirizzo di memoria dell'array in quanto un array è un puntatore all'inizio della memoria allocata 

### Possiamo allocare sull'heap
```cpp
int* array= new int[10];
// poi dobbiamo usare la keyword 
delete[] array ;
//dobbiamo usare le parentesi quadre perchè le abbiamo usate per crearlo
``` 
