#ifndef Ricerca_binaria.h
#define Ricerca_binaria.h
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
