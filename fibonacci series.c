
#include <stdio.h>
int sum(int n){
    int nx=0,t1=0,t2=1;
    while(nx<=n){
        printf("%d ",nx);
        t1= t2;
        t2=nx;
        nx=t1+t2;

    }
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
}