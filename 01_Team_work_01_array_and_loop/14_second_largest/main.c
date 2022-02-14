#include<stdio.h>
#include<limits.h>
int main()
{
  int arr[100];
  int num,i;
  int max,second_max;
  //input limit  message to user
  printf("Enter your limit  :");
  scanf("%d", &num);
  for( i=0;i<num;i++){
    //input index show to user
    printf("arr[%d] : ",i+1);
    scanf("%d",&arr[i] );
  }
  //print the array element in one line
  printf("Input array is :");
  for(i=0;i<num;i++){
    printf(" %d  ",arr[i] );
  }
   max=second_max=INT_MIN;
  for(i=0;i<num;i++){
    if(arr[i]>max){
      second_max=max;
      max=arr[i];

     }
    else if(arr[i]<max && arr[i]>second_max){
      second_max=arr[i];
    }
    else{
      printf("second max is :%d\n",second_max );
    }
  }

  return 0;
}
