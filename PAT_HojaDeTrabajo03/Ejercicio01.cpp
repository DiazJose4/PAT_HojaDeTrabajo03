#include "Ejercicio01.h"

int Ejercicio01::findMin(int nums[], int n)
{
    if (n == 0) {
        return 0;
    }

    //busqueda
    int l1 = 0;
    int l2 = n - 1;

    //Encuentro 
    while (l1 < l2) {
        int mid = l1 + (l2 - l1) / 2;

        if (nums[mid] > nums[l2]) {

            l1 = mid + 1;
        }
        else {

            l2 = mid;
        }
    }

    return nums[l1];
}
