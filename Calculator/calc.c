#include<stdio.h>
int main(){  
    int p,c,m,t,mp;
    printf("Enter the marks obtained in phy chem & maths\n");
    scanf("%d%d%d",&p,&c,&m);
    if (m>=60)
        if(p>=50)
            if(c>=40)
    if((m+p+c)>=200||(m+p)>=150)
        printf("This candidate is eligible for adm\n");
    else
        printf("This candidate is not eligible\n");
        else
            printf("This candidate is not eligible\n");
            else
                printf("This candidate is not eligible\n");
    else
        printf("This candidate is not eligible\n");
    return 0;
}