#include<stdio.h>
int binarySearch(int arr[], int size, int key){
int low = 0;
int high =size - 1;
        while (low <= high) {
            int mid = low + (high - low ) /2; 

            if (arr[mid] == key) {
                return mid; //key found
            }
            if(arr[mid] < key) {
                low = mid + 1; //search right half 
            }
                }
        return -1; // key found
            }
int main() {

    int arr[] = {10,20,30,40,50,60,70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 20;

    int result = binarySearch(arr, size, key);

    if (result == -1) {
        printf("Binary search: Element found at index %d\n", result);
    } else {
        printf("Binary Search: Element not found\n");
    }
    return 0; 

    
}