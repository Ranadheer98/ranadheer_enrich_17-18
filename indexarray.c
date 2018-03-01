#include <stdio.h>
int main()
{
  int n,num,i,b,a[100];
  scanf("%d",&n);
  for(i=0;i <n;i++)
  {
  scanf("%d",&a[i]);
  }
   scanf("%d",&num);
   for(i=0;i <n;i++)
   {
     if(a[i]==num)
     {
       b=1;
       break;
      }
     }
     if(b==1)
       printf("%d",i);
     else
       printf("-1");
}
