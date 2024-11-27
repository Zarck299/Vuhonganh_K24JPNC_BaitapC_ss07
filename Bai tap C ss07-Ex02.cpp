#include<stdio.h>
   int main (){
    int arr[5];
    int i;
    int length = sizeof(arr) / sizeof(arr[0]); 
    printf("Hay nhap 5 phan tu trong mang: \n");
    for (i=0; i<5; i++){
	printf("Nhap phan tu thu %d: ", i+1);
    scanf("%d", &arr[i]);
	}
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < length; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("Do dai cua mang la: %d\n", length);

    return 0;
}
