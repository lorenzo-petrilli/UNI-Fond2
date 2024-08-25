#ifndef Ricerca_binaria.h
#define Ricerca_binaria .h
#include <stdio.h>
using namespace std;
bool ricercabinaria(int array[], int size, int val)
{
    int lo = 0;
    int hi = size-1;
    do
    {
        int mid = lo + (hi - lo) / 2;
        if (array[mid] == val)
        {
            return true;
        }
        else if (array[mid] < val)
        {
            lo = mid + 1;
        }
        else if (array[mid] > val)
        {
            hi = mid;
        }

    } while (lo<hi);
    return false;

}

#endif
// versione ricorsiva, può occupare più memoria nello stack e avere un pochino di performnce peggiori

/* bool ricercabinaria(int v[], int x, int in, int fin) {
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
 */