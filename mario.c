#include <stdio.h>
#include <cs50.h>

int main (void){
    int number = get_int("Height :");

 if ((number <= 0) || !(number + 1)){printf("invalid, please enter a valid number > 0 as "); main();};


    for(int i = 1; i < number+1; i ++){

       for(int k = 0; k < number-i; k++){
        printf(" ");
     }
     for(int j =0; j < i; j++  ){
     printf("#");
     }
     printf("\n");
    }


}
