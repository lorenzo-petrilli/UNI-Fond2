# Array multidimensionali
Gli array multidimensionali in C++ permettono di memorizzare dati in più dimensioni, come matrici (2D), cubi (3D) e strutture con dimensioni ancora superiori. Ecco una guida con esempi e concetti chiave sugli array multidimensionali.

Un array bidimensionale può essere dichiarato specificando il numero di righe e colonne:
```cpp
int m[3][4];  // Array bidimensionale di 3 righe e 4 colonne
```
Gli array possono avere più di due dimensioni. Un esempio di array tridimensionale è:
```cpp
int arr[10][20][30];  // Array tridimensionale
```
In questo caso, `arr` è un array di 10 blocchi, ciascuno contenente una matrice di 20 righe e 30 colonne.

### Inizializzazione di un Array Bidimensionale
Gli array bidimensionali possono essere inizializzati al momento della dichiarazione:
```cpp
int m2[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
};
```
## Stampare unarray bidimensionale 
Possiamo usare la normale funzione cout:
```cpp
cout<<array[2][3]<<endl;
```
