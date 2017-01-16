#include<cs50.h>
#include<stdio.h>

#define SIZE 8



bool search(int needle, int haystack[],int size)
{

int min = 0;
int max = size-1;

while(min<=max)
    {
        int midpoint= (min+max)/2;
     
        if(haystack[midpoint]==needle)
        {
          return true;
        }
        else if(needle<haystack[midpoint])
          {
            max= midpoint - 1;
          }
        else if(needle>haystack[midpoint])
        {
            min = midpoint + 1;
        }
        
        
    }
       
           
        
        
        return false;
}

int main(void)
{
    int numbers[SIZE] = {4,8,15,16,23,42,50,108};
    printf("> ");
    int n= get_int();
    if(search(n,numbers,SIZE))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
