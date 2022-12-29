#include<stdio.h> 
#include<string.h>
#include<stdlib.h>

typedef struct employee{ 
    int empid;
    char empName[20]; 
    float sal;
    struct employee *ptr;

}emp;

void givedata(emp *ptr){ 

    printf("Enter employee ID: ");

    scanf("%d", &(ptr->empid));

    printf("Enter employee name: "); 
    scanf("%[^'\n']s",&((*ptr).empName));

    printf("Enter employee salary: "); 
    scanf("%f",&(ptr->sal));

}

void Accessdata(emp *ptr){

printf("%d\n%s\n%f\n", ptr->empid, ptr->empName, ptr->sal);

} 
void main(){ 
    emp *emp1=(emp*)malloc(sizeof(emp));

    emp *emp2=(emp*)malloc(sizeof(emp));

    
    emp *emp3=(emp*)malloc(sizeof(emp));
    emp1->ptr=emp2; 
    emp2->ptr=emp3; 
    emp3->ptr=NULL;

    givedata(emp1); 
    givedata(emp2); 
    givedata(emp3);

    Accessdata(emp1); 
    Accessdata(emp2);

    Accessdata(emp3);
}