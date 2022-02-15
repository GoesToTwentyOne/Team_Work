#include <stdio.h>

void main(){


  int arr[100];
  int num,position,i;
  //input limit  message to user
  printf("Enter your limit  :");
  scanf("%d", &num);
  for(i=0;i<num;i++){
    //input index show to user
    printf("arr[%d] : ",i+1);
    scanf("%d",&arr[i] );
  }

  printf("\nInput the position which item you want to delete: ");
  scanf("%d",&position);
  i=0;
  while(i!=position-1)
            i++;
  while(i<num){
            arr[i]=arr[i+1];
            i++;
  }
  num--;
   printf("\nAfter delete array is : ");
  for(i=0;i<num;i++){
		   printf("  %d",arr[i]);
		}
    printf("\n\n");

}
