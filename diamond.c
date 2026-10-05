#include <stdio.h>

int main(){

    int row=5;
    int ctr=1;
    int spaces, stars;

         while(ctr<=row){
            spaces=row-ctr;
         while(spaces>=ctr){
            printf(" ");
            spaces--;
         }
         stara=2*ctr-1;
         while(stars>=1){
            printf("*");
            stars--;
         }
         printf("\n");
         ctr++;
         }
         ctr=row-1;
         while(ctr>=1){
         spaces=row-ctr;
         while(spaces>=1){
            printf(" ");
            spaces--;
         }
         stars=2*ctr-1;
         while(stars>=1){
            printf("*");
            stars--;
         }
         printf("\n");
         ctr--;
        }
        return 0;
    }