/*題名付きで摂氏と華氏の対応表を出力せよ*/

#include <stdio.h>

int main(){

    float cels,fahr;
    int begin,end,step;

    begin = 0;
    end = 300;
    step = 20;

    fahr = begin;
    printf("Celsius\tFahrenheit\n");
    while(fahr <= end){
        cels = (fahr - 32)*5/9;
        printf("%3.0f\t%6.1f\n",fahr,cels);
        fahr += step;
    }
}