#include<stdio.h>
#include<math.h>

int main(){
    int i,n;
    double u,v,t,s,a;
    for(i=1;i>=1;i++){
        scanf("%d",&n);
        if(n==0)break;
        else if(n==1){
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=((u+v)/2)*t;
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
        }
        else if(n==2){
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=((u+v)/2)*t;
            printf("Case %d: %.3lf %.3lf\n",i,s,t);
        }
        else if(n==3){
            scanf("%lf %lf %lf",&u,&a,&s);
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
        }
        else if(n==4){
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
        }
    }
    return 0;
}
