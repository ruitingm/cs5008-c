#include <stdio.h>

// Swap two ints
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble sort
// Time complexity O(n^2), O(n) for sorted array
// Space complexity O(1)
void bubble_sort(int* arr, int arr_size){
    int num_swap = 0;
    for (int i = 1; i < arr_size; i++){
        for (int j = 0; j < arr_size-i; j++){
            if (arr[j] > arr[j+1]){
		num_swap++;
                swap(&arr[j], &arr[j+1]);
            }
        }
	if (num_swap == 0){
		break;
	}
    }
}

// Helper function for selection sort
// Find the min index from a given array
int find_minimun(int* arr, int start, int end){
    int min_val = arr[start];
    int min_idx = start;
    for (; start < end; start++){
        if (arr[start] < min_val){
            min_val = arr[start];
            min_idx = start;
        }
    }
    return min_idx;
}

// Selection sort
// Time complexity O(n^2), O(n^) for nearly sorted array
// Space complexity O(1)
void selection_sort(int* arr, int size){
    for (int i = 0; i < size-1; i++){
        int min_idx = find_minimun(arr, i+1, size);
        if (arr[i] > arr[min_idx]){
            swap(&arr[i], &arr[min_idx]);
        }
    }
}

// Insertion sort
// Time complexity O(n^2), O(n) for nearly sorted array
// Space complexity O(1)
void insertion_sort(int* arr, int size){
    for (int i = 0; i < size-1; i++){
        for (int j = i+1; j > 0; j--){
            if (arr[j] < arr[j-1]){
                swap(&arr[j], &arr[j-1]);
            }
            else{
                break;
            }
        }    
    }
}


int main() {
    int arr1[6] = {6, 5, 1, 3, 2, 4};
    int arr2[10] = {100, 2, 45, 39, 20, 99, 49, 100, 4, -10};
    bubble_sort(arr2, 10);
    // selection_sort(arr2, 10);
    // insertion_sort(arr2, 10);
    for (int i = 0; i < 10; i++){
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}
