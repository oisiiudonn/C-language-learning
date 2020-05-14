/*各数字0~9、文字、空白のそれぞれをカウントする*/

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
        printf("%d:%d ",i,n[i]);
    }
    printf("\nair:%d char:%d",na,nc);

}

/*
このコード自体をぶっこんでみると
>>
0:17 1:2 2:0 3:0 4:0 5:0 6:0 7:0 8:0 9:2
air:210 char:320
*/