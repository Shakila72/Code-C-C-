#include <stdio.h>
int main()
{
    int avg = 0;
    int sum =0;
    int j=0;

    // Array- declaration – length 10//
    int num[10];

    
    for (j=0; j<10;j++)
    {
        printf("please i enter number %d \n", (j+1));
        scanf("%d", &num[j]);
        sum = sum+num[j];
    }
    
      
    avg = sum/10;
    printf(" please also print  sum of number is %d\n" ,sum);
    printf("Average of entered number is: %d\n", avg);
    return 0;
}
