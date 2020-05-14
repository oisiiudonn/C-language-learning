/*
文字、単語、列の数をカウントするプログラムを作成せよ
文字は毎回カウントすればおk
単語はstate変数を用いて解決する
列は'\n'の数をカウントすればおk
*/

#include <stdio.h>

#define IN 1
#define OUT 0

int main(){

    int nc,nw,nl;//文字、単語、列
    int c;
    int state;

    nc = nw = nl = 0;
    state = OUT;

    while((c = getchar()) != EOF){

        //文字
        nc++;

        //列
        if(c == '\n')
            nl++;
        
        //単語
        if(c == '\n'||c == '\t'||c == ' '){
            if(state == IN)//■→□
                state = OUT;
        }else{
            if(state == OUT){//□→■
                state = IN;
                nw++;
            }
        }
    }
    printf("%dc %dw %dl",nc,nw,nl);
}
/*
<<
hello
world
konnnitha
^Z
>>
22c 3w 3l
*/
