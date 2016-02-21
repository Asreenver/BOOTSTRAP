#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num,r,c,sp,p;
    scanf("%d",&num);
    for(r=1;r<=num;r++)
    {
        p=r;
        for(sp=num-r;sp>=1;sp--)
        {
            printf(" ");
        }
        for(c=1;c<=r;c++)
        {
            printf("%d",p);
            p++;
        }
        p--;
        for(c=r-1;c>0;c--)
        {
            p--;
            printf("%d",p);
        }
        printf("\n");
    }
    return 0;
}
