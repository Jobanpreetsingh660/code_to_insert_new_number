//Write a program to insert a new number in a array using function

#include<stdio.h>
#include<conio.h>
void insert(int[],int,int,int); //Function declaration
void main()
{
int a[25],n,i,p,n1; //n1 is new number to be inserted
clrscr();
printf("Enter number of elements in array= ");
scanf("%d",&n);
printf("Enter data in array= ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter position where new number should be inserted= ");
scanf("%d",&p);
printf("Enter new number= ");                                                                        a[i+1]=n1; //Insert new number in array
scanf("%d",&n1);
insert(a,n,n1,p); //Function call
getch();
}
void insert(int a[],int n,int n1,int p) //Function definition
{
int i;
for(i=n-1;i>=p-1;i--)
{
a[i+1]=a[i]; //Shifting numbers in array
}
a[i+1]=n1; //Insert new number in array
printf("After inserting a new number= ");
for(i=0;i<=n;i++)
{
printf("\t%d",a[i]);
}
}