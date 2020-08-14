#include <stdio.h>
void (*fun_ptr[2])(int,int);

 void add(int a,int b)
 {
    printf("sum of %d & %d is %d\n",a,b,a+b);
 }

 void sub(int a, int b)
 {
     printf("subtraction of %d & %d is %d\n",a,b,a-b);
 }
 int main()
 {
     int num1,num2;
     printf("enter two numbers: \n");
     scanf("%d %d",&num1,&num2);
     fun_ptr[0]=add;
     fun_ptr[1]=sub;
     (*fun_ptr[0])(num1,num2);
     (*fun_ptr[1])(num1,num2);
 }
