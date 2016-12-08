#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc,string argv[])
{
    if(argc == 2)
    {
        int k = atoi(argv[1]);
        string message = GetString();
        
        for(int i = 0, j = strlen(message);i<j;i++)
        {
            if(isalpha(message[i]))
            {
                if(isupper(message[i]))
                {
                    printf("%c",(((message[i]-65)+k)%26)+65);
                }
                else
                {
                    printf("%c",(((message[i]-97)+k)%26)+97);
                }
            }
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
        return 1;    
    }
}
