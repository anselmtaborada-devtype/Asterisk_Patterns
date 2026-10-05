#include <stdio.h>

int main(){

int ctr=1;
int c;

while(ctr<=3){
    c=1;
    while(c<=6){
        printf("*");
        c++;
    }
    printf("\n");
    ctr++;
}
return 0;
}