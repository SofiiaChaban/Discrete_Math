#include <stdio.h>
#define n 10
int fact1(){
    int fact1=1;
    for(int i=1;i<=n;i++){
        fact1*=i;
    }
    return fact1;
}
int fact2(int k){
    int fact2=1;
    for(int i= 1;i<=(n-k);i++){
        fact2*=i;
    }
    return fact2;
}
int fact3(int k){
    int fact3=1;
    for(int i=1;i<=k;i++){
        fact3*=i;
    }
    return fact3;
}
int main(){
    int a,b,c;
    int result=0;
    for(int k=0;k<=n;k++){
        a=fact1();
        b=fact2(k);
        c=fact3(k);
        result=a/(b*c);
        printf("%dx^%dy^%d",result,k,(n-k));
        if(k!=n){
            printf("+");
        }

    }
    return 0;
}