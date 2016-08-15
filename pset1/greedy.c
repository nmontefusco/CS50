#include <stdio.h>
#include <cs50.h>
#include <math.h>




    int main (void){
    
    float change=0;
    int coins=0;    
    int c;  
        
        //do-while loop which asks the user for amount of $
        do {
        
        printf("Please enter how much change is owed to you. \n" );
        change=GetFloat();
        
       }while(change<0);
        
        c=roundf(change*100);
      
        
        //Forumla of nested whiles, that check the amount to each coin
       
        
        while(c>=25){
            c = c-25;
            coins = coins+1;
        }    
        
        while(c>=10 && c<25){
            c = c-10;
            coins=coins+1;
        }
    
        while(c>=5 && c<10){
           c = c-5;
           coins=coins+1;
        }
        
        while(c>=1 && c<5){
            c = c-1;
            coins=coins+1;
        }
    
        printf("%i\n",coins);
    }
    
        