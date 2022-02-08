#include <stdio.h>
//max func
int max(int arr[],int num)
{
    printf("\nElements of array are : ");
    for(int i=0;i<num;i++)
    {
        printf("%d ", arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<num;i++)
    {
      if(max<arr[i]){
        max=arr[i];
      }
    }
    return max;
}
//min func
int min(int arr[],int num)
{
    printf("\nElements of array are : ");
    for(int i=0;i<num;i++)
    {
        printf("%d ", arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<num;i++)
    {
      if(min>arr[i]){
        min=arr[i];
      }
    }
    return min;
}

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
    printf(" %d ",arr[i] );

  }
   printf("\n\n\n" );
   printf("\n Maximum result is : %d\n", max(arr,num) );
   printf("\n Minimum result is : %d\n", min(arr,num) );
   return 0;
}
