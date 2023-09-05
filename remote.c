#include <stdio.h>
int main()
{// Tv remote function ? haha
int x;
printf("Which channel Do you want to watch now (1-4) ?\n");
scanf("%d",&x);
switch (x)
{
case 1:
    printf("Now Watching : Star Maa \n");
    break;
case 2:
    printf("Now Watching : Zee Telugu\n");
    break;
case 3:
    printf("Now Watching : E Tv\n");
    break;
case 4:
    printf("Now Watching : gemini\n");
    break;

default:printf("Channel is our of range\n");
    break;
}


    return 0;
}
