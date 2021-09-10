#include<studio.h>
int age();
viod display(char* res);
char* verify_age(int age);

int main() 
{
 int a;
 char* res;
 a = age();
 res = verify_age(a);
 display(res);
 
 return 0;
}

int age()
{
 int x;
 printf("enter the age: ");
 scanf("%d",&x);
 return x;
}

char* verify_age(int age)
{
  char* res;
  if(age>=18)
  {
    res="adult";
  }
  else
  {
     res="minnor";
  }
  return res;
}

viod display(char* res)
{
  printf("u are %s",res);
}
