#include<stdio.h>
#include<conio.h>
//Printing the Fibonacii series e.g. 1 1 2 3 5 8 13 21 34 ... 
int main()
{
 int ctr,N,n1=1,n2=1,sum=0;

 printf("How many fibonacci nos to display? ");
 scanf("%d",&N);
 printf("%3d %3d",n1,n2);
 for(ctr=3;ctr<=N;ctr++)
 {
  sum= n1+ n2;
  printf("%3d ",sum);
  n1=n2; 
  n2=sum;
 }



getch();
printf("\n\n\n");
return 0;
}
