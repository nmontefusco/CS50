#include <stdio.h>
#include <cs50.h>
#include <math.h>

//asks and gets input from user.
int main(void){
  int height=0;
 
 do{

 printf("What is the height of the pyramids, you desire?");


 height=GetInt();


//fail-safe should the user give a range out of bounds    
 }while(height<0 || height>23);


 
//constructs the pyramid, based upon the height given by the user.
for(int i=0; i<height; i++)
{
  

//adds space relative i's value.
for (int j=0;j<(height-(i+1));j++)
{
 
 printf(" ");
}

//adds the hash tags relative to i's value.
for(int j=0; j<=(i+1);j++){
 
 printf("#");


}
 
 printf("\n");
 
}    

}