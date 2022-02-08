#include<stdio.h>
int main()
{
  int temp;
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
  printf("Before sorting the array \n" );
  for(int i=0;i<num;i++){
    printf("%d  ", arr[i]);
}
  for(int i=0;i<num;i++){
    for(int j=i+1;j<num;j++){
      if (arr[i]>arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  printf("\nAfter sorting the array \n" );
  for(int i=0;i<num;i++){
    printf("%d  ", arr[i]);
}

}
