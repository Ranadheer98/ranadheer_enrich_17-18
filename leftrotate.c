#include <stdio.h>
#include <string.h> 
int main() 
{
	int i,n;
	char a[100];
	scanf("%s", a);
	scanf("%d", &n);
	for(i=n; i<strlen(a); i++)
	{
	    printf("%c", a[i]);
	}
	for(i=0; i<n; i++)
	{
	    printf("%c", a[i]);
	}
	return 0;
}
