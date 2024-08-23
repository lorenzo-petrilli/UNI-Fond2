Puntatori in C++
Un puntatore è una variabile che contiene l'indirizzo di memoria di un'altra variabile. Sono strumenti potenti utilizzati in C++ per la gestione della memoria, l'allocazione dinamica, la manipolazione di array e altre operazioni avanzate.

1. Dichiarazione di un Puntatore
Per dichiarare un puntatore, si utilizza l'operatore asterisco (*). La sintassi è:

```cpp
tipo* nomePuntatore;
```
Ad esempio:

```cpp
int* p;  // p è un puntatore a un intero
```
2. Assegnazione di un Puntatore
Un puntatore viene inizializzato con l'indirizzo di un'altra variabile usando l'operatore ampersand (&):

```cpp
int x = 10;
int* p = &x;  // p punta all'indirizzo di x
```
3. Dereferenziazione
L'operatore asterisco (*) viene anche utilizzato per dereferenziare un puntatore, cioè per accedere al valore della variabile a cui il puntatore fa riferimento.

```cpp
int x = 10;
int* p = &x;
int y = *p;  // y è ora uguale a 10
```
4. Puntatori e Array
In C++, il nome di un array rappresenta un puntatore al primo elemento dell'array.

```cpp
int arr[3] = {1, 2, 3};
int* p = arr;  // p punta al primo elemento di arr

// Accesso agli elementi dell'array tramite il puntatore
int first = *p;        // first = 1
int second = *(p + 1); // second = 2
```
5. Puntatori e Allocazione Dinamica
I puntatori sono spesso usati con l'allocazione dinamica della memoria, usando gli operatori new e delete.

```cpp
// Allocazione dinamica di un singolo intero
int* p = new int;
*p = 5;  // Assegna il valore 5 alla memoria allocata
delete p;  // Dealloca la memoria

// Allocazione dinamica di un array
int* arr = new int[10];
delete[] arr;  // Dealloca l'array
```
6. Puntatori a Puntatori
Un puntatore può anche contenere l'indirizzo di un altro puntatore. Questo si chiama "puntatore a puntatore".

```cpp
int x = 10;
int* p1 = &x;   // Puntatore a intero
int** p2 = &p1; // Puntatore a puntatore a intero

// Accesso al valore tramite il puntatore a puntatore
int y = **p2;  // y è uguale a 10
```
7. Puntatori Nulli
Un puntatore che non punta a nessuna variabile può essere impostato a nullptr (introdotto in C++11) per indicare che è un puntatore nullo.

```cpp
int* p = nullptr;  // p non punta a nessun indirizzo valido
```
8. Puntatori e Funzioni
I puntatori possono essere utilizzati come argomenti di funzione per passare variabili per riferimento.

```cpp
void incrementa(int* p) {
    (*p)++;
}

int main() {
    int x = 5;
    incrementa(&x);  // Passa l'indirizzo di x alla funzione
    // x è ora 6
    return 0;
}
```