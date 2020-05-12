/*温度を摂氏から華氏へ変換するプログラムをかけ*/

#include <stdio.h>

int main(){

    float fahr,cels;
    int begin,max,step;

    begin = 0;
    max = 300;
    step = 20;

    cels = begin;
    while(cels<=max){
        fahr = 5 * cels / 9 + 32;
        printf("%f\t%f\n",cels,fahr);
        cels += step;
    }

}