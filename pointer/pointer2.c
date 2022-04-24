#include<stdio.h>


int main()
{
	int a[10];
	for(int i = 0;i<10;i++){
		a[i]=i;
	}
	printf("a = %p\n",a);
	printf("&a = %p\n",&a);
	int *p;
	p = a;
   for(int i = 0;i<10;i++){
	   printf("%d ",*(p+i));
   }
	return 0;
}

