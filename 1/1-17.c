/*80行より長い行をすべて印字するプログラムをかけ*/
/*
80行は長すぎるので、10行ぐらいで考えるぞ

１行分配列に格納＆文字数カウント
このとき、文字数が10より大きいなら出力

*/

#include <stdio.h>
#define X 10//変数
#define MAXLINE 1000//上限

int get(char line[],int n);//関数定義

int main(){

    int len;//長さ
    char line[MAXLINE];//配列格納

    while((len = get(line,MAXLINE))>0){
        if(len >= X )
            printf("%s",line);
    }
}

/*１行読み取り、字数を出力*/
int get(char line[],int maxline){//配列はline[]のままでよし
    int c,i;
    for(i=0;i<maxline-1&&(c = getchar())!='\n'&&c!=EOF;i++){
        line[i] = c;//範囲内、改行orデータの終わりではない
    }
    if(c == '\n'){
        line[i] = '\n';//改行なら改行持たす
        i++;
    }
    line[i] = '\0';
    return i;
}

