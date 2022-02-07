#include<stdio.h>
int main()
{
  int arr[100];
  int sum=0,num;
  printf("Enter your limit to sum  :");
  scanf("%d", &num);
  for(int i=0;i<num;i++){
    printf("arr[%d] : ",i+1);
    scanf("%d",&arr[i] );
    sum=sum+arr[i];
  }
  printf("Total sum of array elements :%d\n",sum );
}
