#include <stdio.h>
int main()
{
  int arr[100];
  int fr[100];
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
    printf(" %d  ",arr[i] );
  }
    int visited = -1;
    for(int i = 0; i < num; i++){
        int count = 1;
        for(int j = i+1; j < num; j++){
            if(arr[i] == arr[j]){
                count++;
                //To avoid counting same element again
                fr[j] = visited;
            }
        }
        if(fr[i] != visited)
            fr[i] = count;
    }

    //Displays the frequency of each element present in array
    printf("\n");
    for(int i = 0; i < num; i++){
        if(fr[i] != visited){
            printf("    %d", arr[i]);
            printf("  %d\n", fr[i]);
        }
    }
    return 0;
}
