#include <stdlib.h>
#include <stdio.h>

int main(){

    int num;

    printf("\n\tDigite um número: ");
    scanf("%i", &num);

    if(num % 2 == 0){
        printf("\n\tO número %i é PAR ", num);
    }else{
        printf("\n\tO número %i é IMPAR ", num);
    }
    
    printf("\n\n");

    return 0;
}