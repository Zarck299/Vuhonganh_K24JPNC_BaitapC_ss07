#include<stdio.h>
  int main(){
  	int Sophantumang,i;
    int arr[Sophantumang];
  printf ("\nHay nhap so phan tu cua mang: \n");
  scanf("%d", &Sophantumang);
  if(Sophantumang<=0){
  printf("Mang khong hop le\n");
  return 1;
  }
  for (i = 0; i < Sophantumang; i++) {  
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nCac phan tu trong mang la:\n");
    for (i = 0; i < Sophantumang; i++) {    
    printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
  }
