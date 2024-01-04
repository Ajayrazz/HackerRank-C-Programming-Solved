#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a,b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    if (a < 9){
        if (a==1){
            printf("one\n");
            printf("two\n");
            printf("three\n");
            printf("four\n");
            printf("five\n");
            printf("six\n");
            printf("seven\n");
            printf("eight\n");
            printf("nine\n");
        } else if (a==2){
            printf("two\n");
            printf("three\n");
            printf("four\n");
            printf("five\n");
            printf("six\n");
            printf("seven\n");
            printf("eight\n");
            printf("nine\n");
        } else if (a==3){
            printf("three\n");
            printf("four\n");
            printf("five\n");
            printf("six\n");
            printf("seven\n");
            printf("eight\n");
            printf("nine\n");
        } else if(a==4){
            printf("four\n");
            printf("five\n");
            printf("six\n");
            printf("seven\n");
            printf("eight\n");
            printf("nine\n");
        } else if (a==5){
            printf("five\n");
            printf("six\n");
            printf("seven\n");
            printf("eight\n");
            printf("nine\n");
        } else if (a==6){
            printf("six\n");
            printf("seven\n");
            printf("eight\n");
            printf("nine\n");
        } else if (a==7){
            printf("seven\n");
            printf("eight\n");
            printf("nine\n");
        } else if (a==8){
            printf("eight\n");
            printf("nine\n");
        } else {
            printf("nine\n");
        }
    } else;
    
    for (int i=10; i <= b; i++){
        if(i%2==0){
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

}
