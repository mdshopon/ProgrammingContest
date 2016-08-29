#include "stdio.h"

int data[100];
int sum = 0;
void partition(int minsum,int size);
void PrintPartition(int start,int end);
int LeastPartitionSum(int size);
int main()
{
    int  i,size,minsum;
    printf("Enter the number of elements\n");
    scanf("%d",&size);
    printf ("Enter the elements\n");
    for(i=0 ;i<size ;i++)
    {
        scanf("%d",&data[i]);
        sum+=data[i];
    }
    minsum = LeastPartitionSum(size);
        printf("The total smallest sum of equal partition is %d\n", minsum);
    printf("The partitions are : \n");
    partition(minsum,size);

   return 0;
}
/* Equipped with knowledge of minsum , find the exact elements */
void partition(int minsum,int size)
{
    int i,sum=0,count=0,start=0;
    for (i =0 ;i < size ; i++)
    {
        sum+=data[i];
        count++;

        if(sum == minsum)
        {
            sum = 0;
            PrintPartition(start,count);
            start=count;
        }
    }
}
/* method to print the elements in readable format */
void PrintPartition(int start,int end)
{
    int i;
    printf("[");
    for ( i=start; i<end; i++)
    {
        if(i != end-1)
        {

            printf("%d,",data[i]);
        }
        else
        {
            printf("%d",data[i]);
        }
    }
    printf("]\n");
}
/* method to find if remaining elements can be bunched to be factors of the total sum */
int CheckRemBunchSum(int BunchSum, int start, int size)
{
    int i, RemBunchSum;
    RemBunchSum = 0;
    for(i = start; i < size ; i++)
    {
        RemBunchSum += data[i];
        if(RemBunchSum > BunchSum)
            {
                return 0;
            }
            else if(RemBunchSum == BunchSum)
            {
                RemBunchSum = 0;
            }
    }
    if(RemBunchSum != 0)
    {
            return 0;
    }
    return 1;
}

/* trying to find the first possible set of elements which are a factor of total sum */
int LeastPartitionSum(int size)
{
   int BunchSum, i; /*bunch sums over a loop until its a factor of total sum */
   for(i = 0, BunchSum = 0; (i < size) && (BunchSum <= sum/2) ; i++)
   {
    BunchSum += data[i];
    if((sum % BunchSum) == 0)
    {   /* BunchSum divides sum, so lets go ahead and check if remaining elements are factors */
        if(CheckRemBunchSum(BunchSum, i+1, size))
        {
            return BunchSum;
            }

        }
   }
   /* if no subset is formed */
   printf("There is no subset formed. We have to consider the whole array as the set\n");
   return sum;
}
