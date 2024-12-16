#include <stdio.h>
int main() {
    int number = 10; 
    int *ptr = &number; 
    printf("Gia tri cua x: %d\n", number);        
    printf("Ðia chi cua x: %p\n", (void*)&number); 
    printf("Gia tri cua x qua con tro: %d\n", *ptr);  
    printf("Ðia chi cua x qua con tro: %p\n", (void*)ptr); 
    
    return 0;
}

