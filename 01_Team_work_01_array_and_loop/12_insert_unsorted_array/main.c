#include<stdio.h>
int main()
{
  int temp;
  int arr[100];
  int num;
  int counter=0;
  int insert_num,i;
  //input limit  message to user
  printf("Enter your limit  :");
  scanf("%d", &num);
  for(int i=0;i<num;i++){
    //input index show to user
    printf("arr[%d] : ",i+1);
    scanf("%d",&arr[i] );
  }
  printf("Input  array is:\n" );
  for(int i=0;i<num;i++){
    printf("%d  ", arr[i]);
}

//input the value
printf("\nInput the value you want to inserted in  the sorted array :" );
scanf("%d",&insert_num);
for(int i=0;i<num;i++){
  if(arr[i]>insert_num){
    counter=i;
    break;
  }else{
    counter=i+1;
  }
}
arr[counter]=insert_num;
printf("\nAfter sorting the array after insert \n" );
for(int i=0;i<=num;i++){
  printf("%d  ", arr[i]);
}

}
