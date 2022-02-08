#include<stdio.h>
int main()
{
  int arr1[100];
  int arr2[100];
  int merge[100];
  int num1,num2,num3;
  int i,j,temp;
  //input limit  message to user
  printf("Enter your first array limit  :");
  scanf("%d", &num1);
  for(i=0;i<num1;i++){
    //input index show to user
    printf("arr[%d] : ",i+1);
    scanf("%d",&arr1[i] );
  }
  //print the array element in one line
  printf("Input first array is :");
  for(i=0;i<num1;i++){
    printf(" %d  ",arr1[i] );

  }
  //input limit  message to user
  printf("\nEnter your second array limit  :");
  scanf("%d", &num2);
  for(i=0;i<num2;i++){
    //input index show to user
    printf("arr[%d] : ",i+1);
    scanf("%d",&arr2[i] );
  }
  //print the array element in one line
  printf("Input second array is :");
  for(i=0;i<num2;i++){
    printf(" %d  ",arr2[i] );

  }
  //merge array size
  num3=num1+num2;
  //merge array Input
  for(i=0;i<num1;i++){
   merge[i]=arr1[i];
  }
  //merge array Input
  for(j=0;j<num2;j++){
   merge[i]=arr2[j];
   i++;
  }
  //print the merge
  printf("\nbefore (decending)sorting merge array \n");
  for(i=0;i<num3;i++){
    printf("%d  ",merge[i] );
  }
  //decending
  for(i=0;i<num3;i++){
    for( j=i+1;j<num3;j++){
      if (merge[i]<merge[j]){
        temp=merge[i];
        merge[i]=merge[j];
        merge[j]=temp;
      }
    }
  }
  printf("\nAfter (decending)sorting the array \n" );
  for( i=0;i<num3;i++){
    printf("%d  ", merge[i]);
}



  return 0;
}
