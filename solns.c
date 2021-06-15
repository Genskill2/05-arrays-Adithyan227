/* Enter your solutions in this file */
#include <stdio.h>
int max(int[],int);
int min(int[],int);
float average(int[],int);
int mode(int[],int);
int factors(int,int[]);
int max(int a[],int count)
{
 int largest=a[0];
 int i=0;
 while (i<count){
     if(largest <a[i]){
        largest=a[i];
        }
     i++;
     } 
 return largest;
}
int min(int a[],int count)
{
 int smallest=a[0];
 int i=0;
 while (i<count){
     if(smallest>a[i]){
        smallest=a[i];
        }
     i++;
     } 
 return smallest;
}
float average(int a[],int count)
{
 float sum=0.0;
 float avg;
 int i=0;
 while (i<count){
     sum=sum+a[i];
     i++;
     } 
 avg=sum/count;
 return avg;
}
int mode(int a[],int count)
{
 int max=0,maxcount=0,i,j;
 for(i=0;i<count;++i){
    int u=0;
    for(j=0;j<count;++j){
      if (a[j]==a[i])
       ++u;
     }    
    if (u>maxcount){
       maxcount=u;
       max=a[i];
     }
   }
 return max;
}
int factors(int n,int a[])
{
 int i;
 int j=0;
 for(i=2;n>1;i++)
  {
   while(n%i==0)
    {
    a[j]=i;
    n=n/i;
    j++;
    }
  }
 return j;
}
