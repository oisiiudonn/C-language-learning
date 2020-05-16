#include <stdio.h>
#define TAB 4

int main(){

    int c;
    int state = 0;
    int count = 0;

    while((c = getchar()) != EOF){
        if(c == ' '){
            if(state == 1){//1→0
                state = 0;
                count = 1;
            }else{//0→0
                count++;
            }
        }else{
            if(state == 0){//0→1
                state = 1;
                for(int i=0;i<count/TAB;i++){
                    printf("\t");
                }
                putchar(c);
            }else{//1→1
                putchar(c);
            }
        }
    }
}