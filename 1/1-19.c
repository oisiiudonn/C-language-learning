/*文字列sを逆に出力するreverse関数をかけ*/
/*
文字列を一文字ずつ読み取って配列に収納していき、
逆再生して出力する
*/

#include <stdio.h>

int main(){

    char S[1000];
    int c;
    int i=0;

    while((c = getchar()) != '\n'){
        S[i] = c;
        i++;
    }
    i--;

    while(i>=0){
        putchar(S[i]);
        i--;
    }

}