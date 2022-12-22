
#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#define MAX 20
typedef struct process
{
	int BT,AT,TAT,WT,PNO,PID;
	char name[10];
}process;
typedef struct RQ
{
	process pr[MAX];
	int f,r;
}RQ;
void get_PCB(process [],int *);
void FCFS(process [],int);
void sort_AT(process [],int);
void sort_BT(RQ []);
void disp_table(process [],int );
void SJF_NP(process [],int);
void SJF_P(process [],int);
void RR(process p[],int n,int);
float cal_avgwt(process [],int );
float cal_avgtat(process [],int );
void menu()
{
	printf("\n\t\t****MENU*****");
	printf("\n\t\t1. FCFS");
	printf("\n\t\t2. SJF NP");
	printf("\n\t\t3. RR");
	printf("\n\t\t4. SJF P");
	printf("\n\t\t5. EXIT");
	printf("\n\t\tEnter Choice: \t");
}
void main()
{
	int ch,TQ,n;
	process P[MAX];
	float avg_WT,avg_TAT;
	
	printf("\nEnter Time Quantum");
	scanf("%d",&TQ);
	get_PCB(P,&n);
	do
	{
		
		menu();
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			{
				sort_AT(P,n);
				FCFS(P,n);
				disp_table(P,n);
				avg_WT=cal_avgwt(P,n);
				avg_TAT=cal_avgtat(P,n);
				printf("\nAVERAGE WT  : %f",avg_WT);
				printf("\nAVERAGE TAT : %f",avg_TAT);
				break;
			}
			case 2:
			{
				SJF_NP(P,n);
				disp_table(P,n);
				avg_WT=cal_avgwt(P,n);
				avg_TAT=cal_avgtat(P,n);
				printf("\nAVERAGE WT  : %f",avg_WT);
				printf("\nAVERAGE TAT : %f",avg_TAT);
				break;
			}
			case 3:
			{
				RR(P,n,TQ);
				disp_table(P,n);
				avg_WT=cal_avgwt(P,n);
				avg_TAT=cal_avgtat(P,n);
				printf("\nAVERAGE WT  : %f",avg_WT);
				printf("\nAVERAGE TAT : %f",avg_TAT);
				break;
			}
			case 4:
			{
				SJF_P(P,n);
				disp_table(P,n);
				avg_WT=cal_avgwt(P,n);
				avg_TAT=cal_avgtat(P,n);
				printf("\nAVERAGE WT  : %f",avg_WT);
				printf("\nAVERAGE TAT : %f",avg_TAT);
				break;
			}
			case 5:
				break;
		}
		getch();
	}while(ch!=5);
}


float cal_avgwt(process p[],int n)
{
	float avg=0;
	int i;
	for(i=0;i<n;i++)
	{
		avg+=p[i].WT;
	}
	avg=avg/n;
	return avg;
}
float cal_avgtat(process p[],int n)
{
	float avg=0;
	int i;
	for(i=0;i<n;i++)
	{
		avg+=p[i].TAT;
	}
	avg=avg/n;
	return avg;
}
int get_first_process(process p[],int n)
{
	int min,j,in;
	min=p[0].AT;
	for(j=0;j<n;j++)
	{
		if(p[j].AT<min)
		{
			in=j;
		}
       }
       return in;
}
void check_arrival(RQ *r,process p[],int time,int n)
{
	int i,j,flag=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=r->r;j++)
		{
			if(strcmp(p[i].name,r->pr[j].name)==0)
				flag=1;
			else
				break;
		}
		if(p[i].AT == time && flag==0)
		{
			r->r=r->r + 1;
			r->pr[r->r]=p[i];
		}
		flag=0;
	}
}
void RR(process p[],int n,int tq)
{
	int count=0,i,start,time=0;
	RQ r;
	r.f=r.r=-1;
	start=get_first_process(p,n);
	r.pr[0]=p[start];
	r.f=r.r=0;
	check_arrival(&r,p,time,n);
	while(r.f!=-1)
	{
		for(count=0;count<tq;count++)
		{
			r.pr[r.f].BT--;
			time++;
			if(r.pr[r.f].BT==0)
				break;
			check_arrival(&r,p,time,n);
		}
		if(r.pr[r.f].BT!=0)
		{
			r.pr[r.r+1]=r.pr[r.f];
			r.r++;
		}
		else
		{
			p[r.pr[r.f].PID].TAT=time - r.pr[r.f].AT;
			p[r.pr[r.f].PID].WT=p[r.pr[r.f].PID].TAT - p[r.pr[r.f].PID].BT;
		}
		if(r.f==r.r)
			r.f=r.r=-1;
		else
			r.f++;
	}
}
void sort_BT(RQ *r)
{
	int i,j;
	process temp;
	for(i=r->f;i<=r->r;i++)
	{
		for(j=i+1;j<=r->r;j++)
		{
			if(r->pr[j].BT<r->pr[i].BT)
			{
				temp=r->pr[j];
				r->pr[j]=r->pr[i];
				r->pr[i]=temp;
			}
		}
	}
}
void SJF_NP(process p[],int n)
{
	int time=0,start;
	RQ r;
	r.f=r.r=-1;
	start=get_first_process(p,n);
	r.pr[0]=p[start];
	//p[start].WT=0;
	//p[start].TAT=p[start].BT;
	r.f=r.r=0;
	check_arrival(&r,p,time,n);
	while(r.f!=-1)
	{
		p[r.pr[r.f].PID].WT=time - r.pr[r.f].AT;
		p[r.pr[r.f].PID].TAT=p[r.pr[r.f].PID].WT + r.pr[r.f].BT;
		while(r.pr[r.f].BT != 0)
		{
			time++;
			check_arrival(&r,p,time,n);
			r.pr[r.f].BT--;
		}
		if(r.f==r.r)
			r.f=r.r=-1;
		else
			r.f++;
		sort_BT(&r);
	}
}
int get_total_time(process p[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum+=p[i].BT;
	}
	return sum;
}
void SJF_P(process p[],int n)
{
	int time=0,start,sum,i;
	RQ r;
	r.f=r.r=-1;
	start=get_first_process(p,n);
	r.pr[0]=p[start];
	//p[start].WT=0;
	//p[start].TAT=p[start].BT;
	r.f=r.r=0;
	check_arrival(&r,p,time,n);
	sum=get_total_time(p,n);
	for(i=0;i<sum;i++)
	{
		r.pr[r.f].BT--;
		time++;
		if(r.pr[r.f].BT==0)
		{
			p[r.pr[r.f].PID].TAT=time - r.pr[r.f].AT;
			p[r.pr[r.f].PID].WT=p[r.pr[r.f].PID].TAT - p[r.pr[r.f].PID].BT;
			r.f++;
		}
		check_arrival(&r,p,time,n);
		sort_BT(&r);
	}
}
void sort_AT(process p[],int n)
{
	int i,j;
	process temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(p[j].AT<p[i].AT)
			{
				temp=p[j];
				p[j]=p[i];
				p[i]=temp;
			}
		}
	}
}
void disp_table(process p[],int n)
{
	int i;
	printf("\n\n P_NAME \t AT \t BT \t WT \t TAT \t PNO");
	for(i=0;i<n;i++)
	{
		printf("\n %-10s \t %d \t %d \t %d \t %d \t %d",p[i].name,p[i].AT,p[i].BT,p[i].WT,p[i].TAT,p[i].PNO);
	}
}
void get_PCB(process p[],int *n)
{
	int i;
	printf("\n Enter total no of processes\n");
	scanf("%d",n);
	for(i=0;i<*n;i++)
	{
		printf("\n Enter Following details for Process %d",i+1);
		printf("\n Name :\t");
		scanf("%s",p[i].name);
		printf("\n Arrival Time :\t");
		scanf("%d",&p[i].AT);
		printf("\n Burst Time :\t");
		scanf("%d",&p[i].BT);
		printf("\n Priority :\t");
		scanf("%d",&p[i].PNO);
		p[i].PID=i;
	}
}
void FCFS(process p[],int n)
{
	int i,j,sum=0;
	p[0].TAT=p[0].BT;
	p[0].WT=0;
	sum=p[0].BT;
	for(i=1;i<n;i++)
	{
		p[i].WT=sum - p[i].AT;
		p[i].TAT=p[i].WT + p[i].BT;
		sum+=p[i].BT;
	}
}
/*

OUTPUT:
Enter Time Quantum1
Enter total no of processes
5
Enter Following details for Process 1
Name : p1

Arrival Time : 0
Burst Time :   3
Priority :     3

Enter Following details for Process 2
Name : p2
Arrival Time : 1
Burst Time :   5
Priority :     1

Enter Following details for Process 3
Name : p3
Arrival Time : 3
Burst Time :   2
Priority :     3

Enter Following details for Process 4
Name : p4
Arrival Time : 9
Burst Time :   5
Priority :     2

Enter Following details for Process 5
Name :p5
Arrival Time : 12
Burst Time :   5
Priority :     1

****MENU*****
1. FCFS
2. SJF NP
3. RR
4. SJF P
5. EXIT
Enter Choice:   2
 P_NAME          AT      BT      WT      TAT     PNO
 p1                       0       3           0          3         3
 p2                       1       5           4          9       1
 p3                       3       2           0          2       3
 p4                       9       5           1          6       2
 p5                      12      5           3          8       1
AVERAGE WT  : 1.600000
AVERAGE TAT : 5.600000

 ****MENU*****
1. FCFS
2. SJF NP
3. RR
4. SJF P
5. EXIT
Enter Choice:   3
P_NAME          AT      BT      WT      TAT     PNO
 p1                     0         3            3       6          3
 p2                      1        5            5       10        1
 p3                      3       2             3       5          3
 p4                      9       5             4       9          2
 p5                     12      5             3       8          1
AVERAGE WT  : 3.600000
AVERAGE TAT : 7.600000

 ****MENU*****
1. FCFS
2. SJF NP
3. RR
4. SJF P
5. EXIT
Enter Choice:   4
 P_NAME          AT      BT      WT      TAT     PNO
 p1                      0       3            1           4       3
 p2                      1       5            5          10      1
 p3                      3       2            1           3       3
 p4                      9       5            2           7       2
 p5                     12      5            3           8       1
AVERAGE WT  : 2.400000
AVERAGE TAT : 6.400000
****MENU****
1. FCFS
2. SJF NP
3. RR
4. SJF P
5. EXIT
Enter Choice:   1
 P_NAME          AT      BT      WT      TAT     PNO
 p1                        0       3           0          3       3
 p2                        1       5            2         7       1
 p3                        3       2            5         7       3
 p4                        9       5            1          6       2
 p5                       12      5            3          8       1
AVERAGE WT  : 2.200000
AVERAGE TAT : 6.200000
*/