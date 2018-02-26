#include <stdio.h>

int main() {
	int n,r,i=0;
	scanf("%d", &n);
	while(n>0)
	{
	  r=n%2;
	  if(r==1)
	  i++;
	  n=n/2;
	}
	printf("%d", i);
}


