#include <stdio.h>
int main()
{
for (int i = 1; i <=3; i++)
{
    for (int j = 1; j <= 3; j++)
    { if (i==1&&j==1||i==1&&j==2||i==1&&j==3||i==2&&j==3||i==3&&j==3)
    {
        printf("* ");
    }
    else
        printf("  ");
    }
    printf(" \n");
}
 return 0;
}

//out put would be seven symbol
