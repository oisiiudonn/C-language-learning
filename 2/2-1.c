/*char,short,long,intのsigned,unsignedそれぞれの型の範囲を記すプログラムをかけ*/
/*ライブラリ、計算を用いてもとめよ。また、浮動小数点のほうも記せ*/

#include <stdio.h>
#include <limits.h>

int main(){
    //ライブラリによる表示
    printf("char:%d %d\n",CHAR_MAX,CHAR_MIN);
    printf("short:%d %d\n",SHRT_MAX,SHRT_MIN);
    printf("long:%d %d\n",LONG_MAX,LONG_MIN);
    printf("int:%d %d\n",INT_MAX,INT_MIN);
}