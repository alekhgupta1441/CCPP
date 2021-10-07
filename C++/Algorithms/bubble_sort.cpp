// This program features a basic sorting algorithm known as Bubble Sort.
// It is a naive sorting algorithm in which an array is sorted in ascending/descending order by comparing all unsorted adjecent numbers in array at each pass.
// Complexity of this algorithm is O(n*n).
#include <iostream>

// Bubble sort
// @param *arr pointer to first element of array of numbers to be sorted.
// @param n length upto where array is to be sorted.
template <typename T>
void bubble_sort(T* arr, int n){
    for(int i = 0; i < n; i++){
        // after every iteration of i, the (n-i)th element is in the place where it should be. 
        for(int j = 0; j < n-i-1; j++){
            //if current number is greater than next number, swap them. Else, continue.
            if(arr[j]>arr[j+1]){
                //swap arr[j] and arr[j+1]
                arr[j] = arr[j]^arr[j+1];
                arr[j+1] = arr[j]^arr[j+1];
                arr[j] = arr[j]^arr[j+1];
            }
        }
    }
}

int main(){
    int arr[] = {7,58,168,10,54};
    bubble_sort(arr,4);
    for(int i = 0; i < 5; i++){
        std::cout << arr[i] << ' ';
    }
}