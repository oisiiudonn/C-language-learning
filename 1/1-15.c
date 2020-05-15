/*温度変換プログラムを関数上を作成して作り直せ*/

#include <stdio.h>

float fc(float x);
float cf(float x);

int main(){

    for(int i=0;i<=300;i+=20){
        printf("%3d %5.1f\n",i,fc(i));
    }

}

float fc(float x){
    x = ( x - 32 ) * 5 / 9;
    return x;
}

float cf(float x){
    x = x * 9 / 5 + 32; 
    return x;
}

/*できた...?*/