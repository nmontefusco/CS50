#include <stdio.h>
#include <cs50.h>


int main(void){
    printf("How long are your showers?\n");
    int x=GetInt();
    int y= x*192/16; 
    
    printf("%i mintues. That is equal to %i bottles of water",x,y);
 
  
    
    
}

