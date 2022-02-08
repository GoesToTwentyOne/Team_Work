#include<stdio.h>
#include<limits.h>
int main()
{
  int arr[100];
  int num,i;
  int min,second_min;
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
   min=second_min=INT_MAX;
  for(i=0;i<num;i++){
    if(arr[i]<min){
      second_min=min;
      min=arr[i];
     }
    else if(arr[i]>min && arr[i]<second_min){
      second_min=arr[i];
    }
    else{
      printf("second min is :%d\n",second_min );
    }
  }

  return 0;
}
