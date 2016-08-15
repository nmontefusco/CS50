#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{   //prompt user for input, store input.
   // printf("Please enter your name.");
    string s = GetString();
    
    //prints the first letter of their name in uppercase.
 
    printf("%c",toupper(s[0]));
    
    for(int i=0; i<strlen(s); i++)
    {
        
        if(s[i]==32)
        {
            printf("%c",toupper(s[i+1]));
           
            
        }

     
    }
    
 
}


