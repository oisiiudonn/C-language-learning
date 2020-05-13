/*表を逆に出力せよ*/
/*本文で追加されたforを使ってみる*/

#include <stdio.h>

int main(){

    int fahr,cels;

    for(fahr = 300;fahr >= 0;fahr -= 20){
        cels = (fahr - 32) * 5 / 9;
        printf("%d\t%d\n",fahr,cels);
    }

}