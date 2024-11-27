#include<stdio.h>
  int main(){
  	int n,i;
  int arr[5];
  printf ("\nHay nhap so phan tu cua mang: \n");
  for (i = 0; i < n; i++) {  
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nCac phan tu trong mang la:\n");
    for (i = 0; i < n; i++) {    
    printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
  }
