// Online C compiler to run C program online
#include<stdio.h>
#include<conio.h>

 
int read1();
int read2();
int sum(int x, int y);
void out(int c);

int main() 
{
 int a,b,c;
 char a1;
 a = read1();
 b = read2();
 c = sum(a,b);
 out(c);
//a1 = getch();
 return ;
}

int read1()
{
 int x;
 printf("enter the value of a");
 scanf("%d",&x);
 return x;
}
int read2()
{
 int x;
 printf("enter the value of a");
 scanf("%d",&x);
 return x;
}
int sum(int x, int y)
{
 int c;
 c=x+y;
 return c;
}
void out(int c)
{
    printf("The Sum is %d", c);
}
