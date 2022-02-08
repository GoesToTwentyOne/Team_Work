#include<stdio.h>
int main()
{
  int A[100][100];
  int B[100][100];
  int C[100][100];
  int rowlimit,columunlimit;
  //input limit  message to user
  printf("Enter your A matrix row and column  :");
  scanf("%d %d",&rowlimit,&columunlimit );
  for(int i=0;i<rowlimit;i++){

    for(int j=0;j<columunlimit;j++){
      //input index show to user
      printf("A[%d] [%d]: ",i,j);
      scanf("%d",&A[i][j] );

    }


  }
  printf("Enter your B matrix row and column  :");
  scanf("%d %d",&rowlimit,&columunlimit );
  //input limit  message to user

  for(int i=0;i<rowlimit;i++){

    for(int j=0;j<columunlimit;j++){
      //input index show to user
      printf("B[%d] [%d]: ",i,j);
      scanf("%d",&B[i][j] );

    }
  }
  //input limit  message to user
  printf("\nA matrix :\n");
  for(int i=0;i<rowlimit;i++){
    printf("\t");
    for(int j=0;j<columunlimit;j++){
      //input index show to user
      printf("%d ",A[i][j]);
    }
    printf("\n");

  }
  printf("\nB matrix :\n");
  for(int i=0;i<rowlimit;i++){
    printf("\t");
    for(int j=0;j<columunlimit;j++){
      //input index show to user
      printf("%d ",B[i][j]);

    }
    printf("\n");

  }


  for(int i=0;i<rowlimit;i++){

    for(int j=0;j<columunlimit;j++){
      C[i][j]=A[i][j]-B[i][j];
    }

  }

  printf("\nA-B matrix :\n");
  for(int i=0;i<rowlimit;i++){
    printf("\t");
    for(int j=0;j<columunlimit;j++){
      //input index show to user
      printf("%d ",C[i][j]);

    }
    printf("\n");

  }
  return 0;
}
