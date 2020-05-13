/*EOFの値を出力せよ*/

#include <stdio.h>

int main(){
    int c = EOF;
    printf("%d\n",c);
    printf("%x\n",c);
    printf("%o\n",c);
}

/*
-1
ffffffff
37777777777
と出力された
16進数はネットで出てきたけど8進数は謎
*/