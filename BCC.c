#include<stdio.h>

void inNgang(int a,int b, int c1){
    printf("%c",b);
    for(int i=0;i<a;i++){
        printf("%c",205);
    }
    printf("%c",c1);
    printf("\n");
}
void Content(int a){
    for(int i=1;i<11;i++){
        if(i==1){
        printf("%c %2d x %2d =%2d %c %2d x %2d =%2d %c %2d x %2d= %2d %2c \n",186,a,i,a*i,182,a+1,i,(a+1)*i,182,(a+2),i,(a+2)*i,186);
        }
        if(1<i<10){
        printf("%c %2d x %2d =%2d %c %2d x %2d =%2d %c %2d x %2d= %2d %2c \n",186,a,i,a*i,186,a+1,i,(a+1)*i,186,(a+2),i,(a+2)*i,186);
        }
        if(i==10){
        printf("%c %2d x %2d =%2d %c %2d x %2d =%2d %c %2d x %2d= %2d %2c \n",186,a,i,a*i,182,a+1,i,(a+1)*i,182,(a+2),i,(a+2)*i,186);
        }
    }

}

void main(){
    inNgang(42,201,203);
    Content(1);
    inNgang(42,199,182);
    Content(4);
    inNgang(42,199,182);
    Content(7);
    inNgang(42,182,210);
}