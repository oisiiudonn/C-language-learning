/*入力した文字列から単語を一つずつ取り出して出力する*/

#include <stdio.h>

int main(){

    int state = 0;
    int c;

    while((c = getchar()) != EOF){
        if(c == '\n'||c == ' '||c == '\t'){//単語を区切るもの
            if(state == 1);
                state = 0;
                putchar('\n');
        }else if(state == 0){
            state = 1;
            putchar(c);
        }else{
            putchar(c);
        }
    }
}

/*
>>
a i u e o ka ki ku ke ko sa si su se so ta ti tu te to
<<
a
i
u
e
o
ka
ki
ku
ke
ko
sa
si
su
se
so
ta
ti
tu
te
to
*/
