#include<stdio.h>

int main(){
    int n,m,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&m);
        printf("%d\n",(n/3)*(m/3));
    }
    return 0;
}
