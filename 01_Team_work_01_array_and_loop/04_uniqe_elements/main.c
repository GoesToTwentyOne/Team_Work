#include <stdio.h>
int main()
{
  int arr[100];
  int num;
  int counter=0;
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
    printf("\nThe unique elements of array : ");
    for(int i=0; i<num; i++)
    {
        counter=0;
        for(int j=0; j<num; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i!=j)
            {
		       if(arr[i]==arr[j])
              {
                 counter++;
               }
             }
        }
       if(counter==0)
        {
          printf("%d ",arr[i]);
        }
    }
       printf("\n");
}
