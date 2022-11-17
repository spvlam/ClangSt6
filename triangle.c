#include<stdio.h>
// right triangle
void RTriangle(int n){
    for (int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}

// isoscales triangle
void isoscalesT(int Mbot){
    int middle= Mbot/2;
    int height = middle+1;
    for(int i=0;i<height+1;i++){
        for(int j=0;j<=Mbot;j++){
             if(j<middle+i && j> middle-i ) printf("*");
             else{printf(" ");}
        }
        printf("\n");
    }
}
int main(){
         RTriangle(28);
         printf("\n");
         isoscalesT(28);
}