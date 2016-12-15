#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

string VigenereEncrypt(string plainTxt, string key);

int main(int argc,string argv[])
{
    
    string key = argv[1];
    //command line arguments must be 2 to function correctly
    if (argc != 2)
    {
        printf("Program will not accept as a key\n");
        return 1;
    }
    //check for any "illegal" input arguments 
        for (int i=0,j=strlen(key); i<j; i++)
        {
            if (!isalpha(key[i]))
            {
                printf("Non-Alphabetic chars detected in key");
                return 1;
            }
        }
        
        string message;
        //take message input
        do {
            message = GetString();
        } 
        while(strlen(message)==0);
    
    //use the message and the string key as arguments to encrypt,then print message
     string secretMessage = VigenereEncrypt(message, key);
    printf("%s\n",secretMessage);
    
    return 0;
}
    //function to encrypt message using Vigenere cipher
     string VigenereEncrypt(string plainTxt, string key)
    {
        int keyLength=strlen(key);
        string cipherTxt =plainTxt;
    
    //loop through characters in the string, if Alphabetic,
    //convert using modulo ascii math algorithim, preserve casing and characters
        for(int i=0,j=0,n=strlen(plainTxt);i<n; i++)
        {
            if(isalpha(plainTxt[i]))
            {
                if(isupper(plainTxt[i]))
                {
                    cipherTxt[i]=((plainTxt[i] - 'A' + (key[(j % keyLength)] - 'A')) % 26) + 'A';
                    j++;
                }
                else if(islower(plainTxt[i]))
                {
                    cipherTxt[i]=((plainTxt[i] - 'a' + (key[(j % keyLength)] - 'a')) % 26) + 'a';
                    j++;
                }
            }
            else
            {
                cipherTxt[i] = plainTxt[i];
            }
        }
        
        return cipherTxt;
    }
