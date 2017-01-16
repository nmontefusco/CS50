#include <stdio.h>

#define SIZE 8

void sort(int array[], int size)
{
   int counter;
   do{
   
   counter = 0;
   for(int i=0;i<size-1;i++)
   {
        if(array[i]>array[i+1])
        {
            int swap = array[i+1];
            array[i+1] = array[i];
            array[i] = swap;
            counter++;
            
        }
    }
   
   }while(counter>0);
}

int main(void)
{
    int numbers[SIZE] = { 4, 15, 16, 50, 8, 23, 42, 108 };
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
    sort(numbers, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
}
