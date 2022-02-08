#include<stdio.h>
int main()
{
  int arr[100];
  int even[100];
  int odd[100];
  int num;
  int counter1=0,counter2=0;

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
  for(int i=0;i<num;i++){
    if(arr[i]%2==0){
      even[counter1]=arr[i];
      counter1++;
    }else{
      odd[counter2]=arr[i];
      counter2++;
    }
  }
  printf("\nEven array is :");
  for(int i=0;i<counter1;i++){
    printf(" %d  ",even[i] );
  }
  printf("\nOdd array is :");
  for(int i=0;i<counter2;i++){
    printf(" %d  ",odd[i] );

  }

  return 0;
}
