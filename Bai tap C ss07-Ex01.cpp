#include<stdio.h>
   int main (){
    int arr[] = {1, 12, 3, 17, 25, 34}; 
    int length = sizeof(arr) / sizeof(arr[0]); 
    
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < length; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("Do dai cua mang la: %d\n", length);

    return 0;
}

