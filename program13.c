#include<stdio.h>
#include<stdbool.h>

bool DivisibleByThreeAndFive(int iNo)
{
    if((iNo % 3 == 0))
    {
        if((iNo % 5 == 0))
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter number :\n");
    scanf("%d", &iValue);

    bRet = DivisibleByThreeAndFive(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 3 and 5",iValue);
    }
    else
    {
        printf("%d is not divisible by 3 or 5",iValue);
    }
    return 0;
}