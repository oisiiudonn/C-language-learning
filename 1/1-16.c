/*
１番長い行を印字するプログラムのmainルーチンを書き直して、任意の
長さの入力行群の長さ、およびテキストのできるだけ多くの部分を、
正しく印字できるようにせよ

問題文が理解できなっかつたので、デフォルトそのまま。
*/

#include <stdio.h>
#define MAXLINE 1000//上限

int get(char line[], int maxline);//get定義
void copy(char to[], char from[]);//copy定義

int main(){
    int len;//現在の長さ
    int max;//最長の長さ
    char line[MAXLINE];//現在の行
    char longest[MAXLINE];//最長の行

    max = 0;//mxは0からスタート
    while((len = get(line, MAXLINE)) > 0)//行が
        if(len > max){//最長の長さより長いなら
            max = len;
            copy(longest, line);
        }
    if(max > 0)//そもそも行があるなら
        printf("%s",longest);
    return 0;
}

/*get: sに行を入れ、長さを返す*/
int get(char s[], int lim){//収納用配列と、長さ用変数
    int c,i;//入力用変数と、回数用変数

    for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';i++)
        s[i] = c;//文字数をカウントしながら、限界に達してない&データの最後じゃない＆行の最後じゃない
    if(c == '\n'){//改行で終了した時の処理
        s[i] = c;
        i++;
    }
    s[i] = '\0';//最終行に目印追加
    return i;
}

/*copy: fromをtoにコピー*/
void copy(char to[],char from[]){
    int i;
    i = 0;
    while((to[i] = from[i]) != '\0')//ここで役に立つ目印
        i++;//配列格納系は目印があると便利なんだね
}
