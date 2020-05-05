#include <stdio.h>
int main(){
    /* "\xhh"は16進数文字コードを表す。 */
    /*  hhには0~7,0~Fが並ぶ            */

    printf("\x5C");
    printf("\x28");
    printf("\x5E");
    printf("\x6F");
    printf("\x5E");
    printf("\x29");
    printf("\x2F");

    /* \(^o^)/ を出力する              */

    return 0;

}