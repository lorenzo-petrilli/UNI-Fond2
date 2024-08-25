# Divide Et Impera
## Tecnica di programmazione 


- Dividi il problema in sottoproblemi
- Risolvi i sottoproblemi
- Ricombina le soluzioni dei sottoproblemi

## Esempio

Consideriamo un array ordinato di numeri in cui dobbiamo cercare x.

Possiamo dividere l'array in due parti.

Confrontando x con l'elemento centrale (che funge da divisore), possiamo dedurre se x potrebbe trovarsi nella prima metà dell'array.

Se x potrebbe essere nella prima metà, possiamo ulteriormente suddividere questa metà in altre due parti.

### come capire se conviene usare questo algoritmo oppure il classico
y
se dobbiamo fare una ricerca in un array non ordinato non conviene perché la messa in ordine impiega molto tempo e per una sola ricerca non vale la pena farlo, se dobbiamo fare molteplici ricerca allora possiamo ordinare l’array 
```cpp
//ricerca binaria 
bool ricercabinaria(int v[], int x, int in, int fin) {
    if (in > fin) 
        return false; // The element is not found
    else {
        int medio = (in + fin) / 2; // Calculate the mid index
        if (v[medio] < x) {
            return ricercabinaria(v, x, medio + 1, fin); // Search in the right half
        } else if (v[medio] > x) {
            return ricercabinaria(v, x, in, medio - 1); // Search in the left half
        } else {
            return true; // Element found
        }
    }
}

```
## bubble sort

```cpp
//bubble sort 
void bubblesort(int a[],int n){
    bool scambi;
		int x=n,lastswap;
    do{scambi=false;
        for (int i=0;i<x-1,++i){
            if (a[i]<a[i+1]){
                temp=a[i];
								a[i]=a{i+1};
								a[i+1]=temp;
                scambi=true;
                lastswap=i;
            }
        }
         x=lastswap;
         while (scambi){
         }    
    }
}
```

### selection sort

```cpp
void selectionSort (int[a],int n){
	for (int i=0;i<n-1;i++){
		int min=i;
		for (int j=i+1;j<n,j++){
			if (a[j]<a[min]) {min=j;}
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
}
```

### insertion sort

considerato il migliore dei 3
```cpp
void InsertionSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        int temp = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}
```
