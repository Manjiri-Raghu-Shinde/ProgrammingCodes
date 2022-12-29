#include<iostream>
using namespace std;

class DigitX
{
    public:
        int iNo;

        DigitX(int i)
        {
            iNo=i;
        }

        void DisplayFrequency()
        {
            int iTemp=iNo;
            int iDigit=0;
            int Frequency[10]={0};

            while(iTemp!=0)
            {
                iDigit=iTemp%10;
                Frequency[iDigit]++;
                iTemp=iTemp/10;
            }

            for(int iCnt=0;iCnt<10;iCnt++)
            {
                if(Frequency[iCnt]>0)
                {
                    cout<<iCnt<<" ocuurs "<<Frequency[iCnt]<<" times"<<endl;
                }
            }
    
        }
        
};

int main()
{
    int iValue=0,iRet=0;
    cout<<"enter a number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);
    obj.DisplayFrequency();
    
    
    return 0;
}