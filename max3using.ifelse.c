#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b){
        if (a<c){
            printf("Max = %d\n",c);
        }
        else{
            printf("Max = %d\n", a);
        }
    }
    else{
        if (b<c){
            printf("Max = %d\n", c);
        }
        else{
            printf("Max = %d\n", b);
        }
    }
    return 0;
}