#include<stdio.h>
#include<stdlib.h>

void sort_fun(int *arr[20],int num)
{
    int i,j,temp;
    for(i=0;i<num;i++)
    {
        for(j=i;j<num;j++)
        {
            if(*(arr+j)<*(arr+i))
            {
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
    printf("\nafter sorting\n");
    for(i=0;i<num;i++)
    {
        printf("%d ",*(arr+i));
    }
}

int main()
{
    int num,i;
    scanf("%d\n",&num);
    int *array=(int *)malloc(num*sizeof(int));
    for(i=0;i<num;i++)
    {
        scanf("%d",(array+i));
    }
    sort_fun(array,num);
    //free(*array);
    return 0;


}
