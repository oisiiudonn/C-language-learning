/*空白、タブ、改行をカウントするプログラムを作成せよ*/

#include <stdio.h>

int main(){

    int na = 0;
    int nt = 0;
    int nl = 0;

    int c;

    while((c = getchar()) != EOF){
        if(c == ' ')
            na++;
        if(c == '\t')
            nt++;
        if(c == '\n')
            nl++;
    }

    printf("air\t%5d\ntab\t%5d\nline\t%5d\n",na,nt,nl);
}

/*できた！*/
