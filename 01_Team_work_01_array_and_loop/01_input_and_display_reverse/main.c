#include<stdio.h>
int main()
{
  int arr[100];
  int num;
  //input limit  message to user
  printf("Enter your limit  :");
  scanf("%d", &num);
  for(int i=0;i<num;i++){
    //input index show to user
    printf("arr[%d] : ",i+1);
    scanf("%d",&arr[i] );
  }
  //print the array element in one line
  printf("Input array is :");
  for(int i=0;i<num;i++){
    printf(" %d  ",arr[i] );

  }
  //reverse and print the array
  printf("\nReverse array is :");
  for(int i=num-1;i>=0;i--){
    printf(" %d  ",arr[i] );

  }


  return 0;
}
