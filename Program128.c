/*
 Linear Search: Given a list of n elements and a key. Find whether the given key exists in the 
list or not. If it exists, print its position in the list
*/

/*
Algorithm:
Step 1: Start
Step 2: Read the elements present in the list and store them in an array
Step 3: Read the key to be searched in the list
Step 4: Loop to compare every element in the array with the key. When an equal value is found, print the location 
where the match has been found. If the loop finishes without finding a match, the search fails and print the 
message that key is not present in the list
Step 5: Stop
*/

#include<stdio.h>
#include<stdlib.h>

int LinearSearch(int Arr[],int iSize,int iValue){
    int iPos=0;
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++){
        if(Arr[iCnt]==iValue){
            iPos=iCnt;
            break;
        }
    }

    return iPos;
}

int main(){

    int *Arr=NULL;
    int iSize=0,iCnt=0,iKey=0,iRet=0;

    printf("enter the number of elements:\n");
    scanf("%d",&iSize);

    Arr=(int *)malloc(iSize*sizeof(int));

    printf("enter array elements:\n");
    for(iCnt=0;iCnt<iSize;iCnt++){
        scanf("%d",&Arr[iCnt]);
    }

    printf("enter the key element:\n");
    scanf("%d",&iKey);

    iRet=LinearSearch(Arr,iSize,iKey);

    if(iRet==0){
        printf("the element is not present\n");
    }else{
        printf("the element is present at position %d\n",iRet);
    }


    return 0;

}