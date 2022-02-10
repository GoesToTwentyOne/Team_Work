#include<stdio.h>
int main()
{
  int A[100][100];
  int TC[100][100];
  int rowlimitA,columunlimitA,i,j;
  //input limit  message to user
  printf("Enter your A matrix row and column  :");
  scanf("%d %d",&rowlimitA,&columunlimitA);
  for(int i=0;i<rowlimitA;i++){
    for(int j=0;j<columunlimitA;j++){
      //input index show to user
      printf("A[%d] [%d]: ",i,j);
      scanf("%d",&A[i][j] );
    }
  }
  printf("\nA matrix :\n");
  for(int i=0;i<rowlimitA;i++){
    printf("\t");
    for(int j=0;j<columunlimitA;j++){
      //input index show to user
      printf("%d ",A[i][j]);
    }
    printf("\n");

  }
  //input limit  message to user
  for(int i=0;i<rowlimitA;i++){
    for(int j=0;j<columunlimitA;j++){
      TC[j][i]=A[i][j];
    }
  }
  printf("\nTranspose A matrix :\n");
  for(int i=0;i<columunlimitA;i++){
    printf("\t");
    for(int j=0;j<rowlimitA;j++){
      //input index show to user
      printf("%d ",TC[i][j]);

    }
    printf("\n");

  }
  return 0;
}
