#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0,j=0;
    char ch = 'A';
    if(iRow<0)
    {
        iRow=-iRow;
    }

    if(iCol<0)
    {
        iCol=-iCol;
    }

    for(i=1;i<=iRow;i++)
    {
         ch = 'A';
        for(j=1;j<=iCol;j++)
        {
           
            printf("%c\t",ch);
            ch++;
            
        }
        printf("\n");
    }


}
int main()
{
    int iValue1=0,iValue2=0;
    printf("enter the number of rows:\n");
    scanf("%d",&iValue1);
    printf("enter the number of columns:\n");
    scanf("%d",&iValue2);

    printf("the pattern is:\n");
    Display(iValue1,iValue2);
    return 0;
}