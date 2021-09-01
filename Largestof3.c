#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter 3 no.s \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
            printf("Largest no. is= %d \n",a);
        else
            printf("Largest no. is= %d \n",c);
    }
    else
    {
        if(b>c)
          printf("Largest no. is= %d \n",b);
        else
          printf("Largest no. is= %d \n",c);
    }
}
