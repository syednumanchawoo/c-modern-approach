/*
 * Finds the largest and second-largest elements in array `a` of size `n`,
 * storing them via pointers `largest` and `second_largest`.
 */
#include <stdio.h>
#define N 10

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(){
    int n = N, largest, second_largest;
    int a[N] = {10, 4, 43, 76, 23, 94, 95, 65, 34, 74};
    
    find_two_largest(a, n, &largest, &second_largest);
    printf("Largest: %d\nSecond Largest: %d", largest, second_largest);
    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest){
    int i;
    *largest = a[0];
    for(i=0; i<n; i++){
        if(a[i]> *largest){
            *second_largest = *largest;
            *largest = a[i];
        }
        else if(a[i] > *second_largest && ){
            *second_largest = a[i];
        }
    }
}
