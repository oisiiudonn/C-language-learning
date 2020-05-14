/*二つの空白を１つの空白にしながら複写するプログラムをかけ*/
/*空白内にいるかいないかという状態を示す変数を使ってやってみる*/

#include <stdio.h>

int main(){

    int c;
    int status = 1;

    while((c = getchar()) != EOF){
        if(c == ' '&&status == 1){//空白以外から空白の時
            putchar(' ');
            status = 0;
        }else if(c == ' '&&status == 0){//空白から空白の時

        }else{//空白以外の時
            putchar(c);
            status = 1;
        }
    }
}