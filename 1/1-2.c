/*\xは何のエスケープシーケンス*/

#include <stdio.h>

int main(){
    printf("\x66\n");//16進数指定文字コード
    printf("hello\tworld\n");//タブ
    printf("hello\bworld\n");//バックスペース
}