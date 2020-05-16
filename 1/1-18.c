/*入力から改行、タブ、空白を削除して出力するプログラムを作成せよ*/
/*単純に空白、タブ、改行が来たら出力しなければよい*/
#include <stdio.h>

int main(){

    int c;

    while((c = getchar()) != EOF){
        if(c == '\n'||c == '\t'||c == ' '){

        }else{
            printf("%c",c);
        }
    }
    printf("\n");
}