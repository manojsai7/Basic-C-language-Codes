#include <stdio.h>
int main()
{
//lets do calculator using switch
int a,b,op;
printf("\n***welcome to Calculator***\n");
printf("Enter value of a and b\n");
scanf("%d %d",&a,&b);
printf("\nUSAGE GUIDE:\nPress:\n1 to add\n2 to subract\n3 To multiply\n4 to divide\n");
scanf("%d",&op);
//printf("Enter value of b");
//scanf("%d",b);

switch (op)
{
case 1:printf("Addition result is :%d\n",a+b);
break;
case 2:printf("Addition result :%d\n",a-b);
break;
case 3:printf("Addition result :%d\n",a*b);
break;
case 4:printf("Addition result :%d\n",a/b);

  //break;

default:printf("error dude!\n");
  break;
}


  return 0;
}
