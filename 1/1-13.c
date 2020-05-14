/*各数字0~9、文字、空白のそれぞれをカウントする*/
/*さらにヒストグラムで出力せよ*/

#include <stdio.h>

int main(){

    int c;
    int nc,na;
    int n[10] = {0,0,0,0,0,0,0,0,0,0};

    nc = na = 0;

    while((c = getchar()) != EOF){
        if('0' <= c&&c <= '9'){
            n[c-'0']++;;
            nc++;
        }
        else if(c == '\n'||c == '\t'||c == ' '){
            na++;
        }
        else{
            nc++;
        }
        
    }

    for(int i=0;i<10;i++){
        printf("%d:",i);
        for(int j=0;j<n[i];j++){
            printf("|");
        }
        printf("\n");
    }

    printf("\nair:");
    for(int i=0;i<na;i += 10)
        printf("|");
    printf("\n");

    printf("\nchar:");
    for(int i=0;i<nc;i += 10)
        printf("|");
    printf("\n");

}

/*
このコード自体をぶっこんでみると
>>
0:||||||||||||||||||||||||||||||||
1:|||||||
2:|||||
3:||
4:|
5:|
6:|
7:||
8:|
9:|||

air:||||||||||||||||||||||||||||||||

char:||||||||||||||||||||||||||||||||||||||||||||||||||||||||||

airとcharは1/10かけてる
*/