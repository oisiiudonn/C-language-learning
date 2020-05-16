#include <stdio.h>
#define N 10

int main(){

    int c;
    int count = 0;

    while((c = getchar()) != EOF){
        if(count >= N){
            if( c == '\n'||c == '\t'||c == ' '){
                count++;
            }else{
                putchar('\n');
                putchar(c);
                count = 1;
            }
        }else{
            putchar(c);
            count++;
        }
    }
}