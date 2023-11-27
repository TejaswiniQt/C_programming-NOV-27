#include<stdio.h>

int main()
{
    long int arr[5],max=0,min,sum=0,i;
    for(i=0; i<5; i++)
    {
        scanf("%ld",&arr[i]);
        sum = sum + arr[i];
    }
    min = arr[0];
    for(i=0; i<5; i++)
    {
        if(arr[i] > max)
        max = arr[i];
        if(arr[i] < min)
        min = arr[i];
    }
    printf("%ld %ld\n",sum-max,sum-min);
    return 0;
}
