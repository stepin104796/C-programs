#include<stdio.h>

void prime_fun(int num)
{
    int i,count=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count+=1;
        }
    }
    if(count==2)
        printf("true");
    else
        printf("false");

}

int main()
{
    int num;
    scanf("%d",&num);
    prime_fun(num);
    return 0;
}
