#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
//command line argument should only prompt for a single key
    if(argc == 2)
    {
        int k= atoi(argv[1]);
        
        //printf("Yay, your key is %i \n",k);
        
        //printf("Please enter your message:");
        
        string message = GetString();
        
        //loop through each character in the message
        for(int i=0; i<strlen(message); i++)
        {
            
            //if it's alphabetic
            if(isalpha(message[i]))
            {
                 
                 //Upper Case Range value formula correlates with Ascii A:65
                 if(isupper(message[i])){
                     printf("%c",((((message[i]-65)+k)%26)+65));
                 }
                 // Lower Case Range Value formula with Ascii a:97
                 else{
                     printf("%c", ((((message[i] - 97)+k)%26)+97));
                 }
            } 
            
            
            //filter anyting non alphabetic characters.
            else
            
            { 
             printf("%c",message[i]);
            }
        
            
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("You're doing it wrong");
        return 1;
    }
}