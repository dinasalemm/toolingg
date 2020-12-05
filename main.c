#include <stdio.h>
#include <stdlib.h>

int main()
{

int matrixa[3][3];
int matrixb[3][3];
int matrixres[3][3];
int sum=0;
int i=0,j=0,k=0;

for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("please enter matrixa%d%d:",i,j);
        scanf("%d",&matrixa[i][j]);
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    { printf("%d\t",matrixa[i][j]);

    }
     printf("\n");
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("please enter matrixb%d%d:",i,j);
        scanf("%d",&matrixb[i][j]);
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    { printf("%d\t",matrixb[i][j]);

    }
     printf("\n");
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        for (k=0;k<3;k++)
        {
            sum+=matrixa[i][k]*matrixb[k][j];

        }
        matrixres[i][j]=sum;
        sum=0;
    }
}
printf("the result of multiplication equal\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d\t",matrixres[i][j]);

    }
     printf("\n");
}
    return 0;
}
