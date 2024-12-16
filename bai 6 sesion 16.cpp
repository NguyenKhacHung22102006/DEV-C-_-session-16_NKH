#include <stdio.h>
int searchElement(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;  
        }
    }
    return -1;  
}
int main() {
    int arr[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(arr) / sizeof(arr[0]);  
    int value = 30;  
    int position = searchElement(arr, size, value);
    if (position != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", value, position);
    } else {
        printf("Phan tu %d khong tim thay trong mang.\n", value);
    }
    return 0;
}


