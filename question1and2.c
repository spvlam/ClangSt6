#include<stdio.h>
#include<math.h>
//question1
int Calculate(int n){
    if (n>=2) return Calculate(n-1)*n;
}
int sum(int n){
    if (n>0) return sum(n-1)+n;
}
//question2
int CheckForPrime(int n){
    if(n==2) return 1;
    int x = sqrt(n);
    for(int i=2;i<x;i++){
          if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    int m=3;
    scanf("%d",&n);
    printf("%d\n",Calculate(n));
    printf("%d\n",sum(n));
    printf("%.2f\n",pow(n,m));
    printf("%d",CheckForPrime(10));
    return 0;
   
}