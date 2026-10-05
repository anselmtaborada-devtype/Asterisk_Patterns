#include <stdio.h>

int main(){

    int row=5;
    int ctr=4;
    int stars;

    while(ctr>=1){
        stars=row-ctr;
        while(stars>0){
            printf("*");
            stars--;
        }
        printf("\n");
        ctr--;
    }
    return 0;
}