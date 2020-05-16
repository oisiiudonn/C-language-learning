/*
tabを空白４つに置き換えるプログラムをかけ。
*/

#include <stdio.h>
#define TAB 3

int main(){

    int c;

    while((c = getchar()) != EOF){
        if(c == '\t'){
            for(int i=0;i<TAB;i++){
                printf(" ");
            }
        }else{
            putchar(c);
        }
    }

}