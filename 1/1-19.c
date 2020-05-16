/*文字列sを逆に出力するreverse関数をかけ*/
/*
一行を配列に格納して、ついでに桁数を返す関数を使う
*/

#include <stdio.h>

int get(char S[]);//[]は必要らしい
void reverse(char S[],int len);

int main(){

    char S[1000];//長さ1000の文字配列を用意
    int len;
    int i=0;

    while((len = get(S))>0){
    reverse(S,len);
    printf("%s\n",S);
    }
}

/*配列に１行入れて、行数を返す*/
int get(char S[]){
    int c,i=0;
    while((c = getchar())!='\n'&&c!=EOF){
        S[i] = c;
        i++;
    }
    S[i] = '\0';
    return i; 
}

void reverse(char S[],int len){
    int count = len/2;//回数を格納
    len--;//文字数と配列での差異を解決
    int i=0;
    char tmp;//一時添付用変数

    while(i<count){
        tmp = S[i];
        S[i] = S[len];
        S[len] = tmp;
        len--;
        i++;
    }
}