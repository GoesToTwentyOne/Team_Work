#include<stdio.h>
int main()
{
  int num;
  int arr[100];
  int copyarr[100];
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
  //copy arry element to another null array
  for(int i=0;i<num;i++){
//copy
   copyarr[i]=arr[i];
  }
  //print the copyarray
  printf("\nCopy array is :");
  for(int i=0;i<num;i++){
    printf(" %d  ",copyarr[i] );

  }

}
