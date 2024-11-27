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
	for ( i=0; i<5;i++){
    printf("Phan tu chan trong mang la:\n");	
	 if (arr[i] % 2 == 0){
        printf("arr[%d] = %d\n", i, arr[i]);
   	
	 }
	  
	}
    
    return 0;
}
