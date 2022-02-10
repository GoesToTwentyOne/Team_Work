#include<stdio.h>
int main()
{
  int A[100][100];
  int B[100][100];
  int C[100][100];
  int rowlimitA,columunlimitA,rowlimitB,columunlimitB,sum=0,i,j;
  //input limit  message to user
  printf("Enter your A matrix row and column  :");
  scanf("%d %d",&rowlimitA,&columunlimitA);
  printf("Enter your B matrix row and column  :");
  scanf("%d %d",&rowlimitB,&columunlimitB );

  while(rowlimitA!=columunlimitB){
    printf("Enter your A matrix row and column  :");
    scanf("%d %d",&rowlimitA,&columunlimitA );
    printf("Enter your B matrix row and column  :");
    scanf("%d %d",&rowlimitB,&columunlimitB );
  }
  for(int i=0;i<rowlimitA;i++){
    for(int j=0;j<columunlimitA;j++){
      //input index show to user
      printf("A[%d] [%d]: ",i,j);
      scanf("%d",&A[i][j] );
    }
  }

  //input limit  message to user

  for(int i=0;i<rowlimitB;i++){
    for(int j=0;j<columunlimitB;j++){
      //input index show to user
      printf("B[%d] [%d]: ",i,j);
      scanf("%d",&B[i][j] );
    }
  }

  for(int i=0;i<rowlimitA;i++){

    for(int j=0;j<columunlimitB;j++){
      for(int k=0;k<columunlimitA;k++){
          sum=sum+A[i][k]*B[k][j];
      }
      C[i][j]=sum;
      sum=0;
    }
  }
  //input limit  message to user
  printf("\nA matrix :\n");
  for(int i=0;i<rowlimitA;i++){
    printf("\t");
    for(int j=0;j<columunlimitA;j++){
      //input index show to user
      printf("%d ",A[i][j]);
    }
    printf("\n");

  }
  printf("\nB matrix :\n");
  for(int i=0;i<rowlimitB;i++){
    printf("\t");
    for(int j=0;j<columunlimitB;j++){
      //input index show to user
      printf("%d ",B[i][j]);

    }
    printf("\n");

  }
  printf("\nA*B matrix :\n");
  for(int i=0;i<rowlimitA;i++){
    printf("\t");
    for(int j=0;j<columunlimitB;j++){
      //input index show to user
      printf("%d ",C[i][j]);

    }
    printf("\n");

  }
  return 0;
}
