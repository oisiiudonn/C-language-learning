/*タブ、バックスペース、\を\t、\b、\\に変換せよ*/

#include <stdio.h>

int main(){

    int c;
    while((c = getchar()) != EOF){
        if(c == '\\'){
            printf("\\\\");
        }else if(c == '\t'){
            printf("\\t");
        }else if(c == '\b'){
            printf("\\b");
        }else{
            putchar(c);
        }
    }

}

/*たぶん、できたけど、バックスペースをどうやって入力すればいいかわからなかった*/
/*出力はprintfで文字列出力するのがポイントなのかな？*/