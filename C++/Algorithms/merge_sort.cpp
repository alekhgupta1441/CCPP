// Merge sort is a efficicient divide and concour method of sorting an array.
// In this algorithm, we keep on dividing the array into two sub parts, those sub parts into 2 more sub parts and so on.

#include <iostream>
#define MAX 1<<31-1

/*
    Merge Sort
    @params *arr array to be sorted
    @params e length of array upto which array is to be sorted.
    @params s used by internal working of sorting method, basically representing first index of array/subarray.
*/
void merge_sort(int *arr, int e, int s = 0){
    // m is the middle element of sub array from s to e
    int m = (s+e)/2;
    // n and b are respective sizes of left and right sub arrays with one extra element.
    int n = m-s, b = e-m;
    int l[n+1], r[b+1];

    // creation of sub arrays
    for(int i = 0; i < n; i++){
        l[i] = arr[i];
    }
    for(int i = 0; i < b; i++){
        r[i] = arr[n+i];
    }

    // assigning last element of each sub array to a very large number that is the limit of integer datatype to stop sorting sub array on reaching it.
    l[n] = MAX;
    r[b] = MAX;

    // sorting left sub array
    if(s - m+1){
        merge_sort(l, m, s);
    }
    
    // sorting right sub array
    if(m - e+1){
        merge_sort(r, e, m);
    }

    // joining sorted sub arrays, to make a sorted parent array.
    int x = 0, y = 0;
    for(int i = 0; i < e-s; i++){
        if(l[x] < r[y]){
        arr[i] = l[x];
        x++;
        }
        else{
        arr[i] = r[y];
        y++;
        }
    }
}

int main(){
    int arr[] = {96,76,153,4,16,48};
    merge_sort(arr,6);
    for(int i = 0; i < 6; i++){
        std::cout << arr[i] << ' ';
    }
}