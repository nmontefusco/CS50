/**
*Takes a string from the user (pokemon) and assigns it to an array. Data is then choosen at random and given back to the user.




#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{


string pokemon[5];

for(int i=0;i<5;i++)

    {
        printf("Hello, please enter 5 pokemon: \n");
        pokemon[i]= get_string();
        
    }
    srand(time(NULL)); 
    // we use the srand() function to seed the randomizer. 
    //Basically, the computer can generate random numbers based 
    //on the number that is fed to srand(). If you gave the same seed value, 
    //then the same random numbers would be generated every time.
    
    printf("Your pokemon: %s \n",pokemon[rand()%5]);
}
