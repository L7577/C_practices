#include <stdio.h>

int main()
{
	int a;
	int * p;
	char c[10]={0xcc,0xcc,0};
	char *p2;
	p = &a;
	p2 = c;
	printf("p = %p\n",p);
	printf("*p = %d\n",*p);
	printf("p2 = %s\n",p2);
	printf("c : %s\n",c);
	printf("*p2: %c\n",*p2);
	return 0;
}
