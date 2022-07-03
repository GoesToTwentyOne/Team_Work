#include<stdio.h>
int main()
{
  int A[100][100];
  int DiagoanlC[100][100];
  int rowlimitA,columunlimitA,i,j,sum=0;
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
      if(i==j){
        sum=sum+A[i][rowlimitA-i-1];
      }
    }
  }
  printf("\nSum of left diagonal of A matrix %d:\n",sum);

  return 0;


}
