/*getchr != EOFが0か1の値であることを確認せよ*/

/*memo:WindowsではコマンドラインでCtrl+zでEOFが打てるらしい*/

#include <stdio.h>

int main(){
    
    int c;
    
    while(1){
        printf("%d\n",(c = getchar()) != EOF);
    }
}

/*確認できました*/