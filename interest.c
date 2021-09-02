#include <stdio.h>

int main()
{
    int p,r,t;
    printf("Enter Principal,Rate,Time\n");
    scanf("%d",&p);
    scanf("%d",&r);
    scanf("%d",&t);
    int i=(p*r*t)/100;
    printf("Interest=%d\n",i);
    return 0;

}
