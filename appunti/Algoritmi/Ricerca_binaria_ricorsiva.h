// versione ricorsiva, può occupare più memoria nello stack e avere un pochino di performnce peggiori
#ifndef Ricerca_binaria_ricorsiva.h
#define Ricerca_binaria_ricorsiva.h
bool ricercabinaria_ricorsiva(int v[], int x, int in, int fin) {
    if (in > fin)
        return false; // The element is not found
    else {
        int medio = (in + fin) / 2; // Calculate the mid index
        if (v[medio] < x) {
            return ricercabinaria_ricorsiva(v, x, medio + 1, fin); // Search in the right half
        } else if (v[medio] > x) {
            return ricercabinaria_ricorsiva(v, x, in, medio - 1); // Search in the left half
        } else {
            return true; // Element found
        }
    }
}
#endif
