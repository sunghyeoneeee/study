#include <stdio.h>
int main() 
{
	int a;
	int b;
	scanf("%d", &a);
	for(int i=1;i<=a;i++)
	{
		scanf("%d", &b);
		printf("%d\n", b);
	}
	return 0;
}
