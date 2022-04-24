#include <stdio.h>



int func2(int a, int b){
	a = 2;
	b = 3;

	return b+a;
}
int func3(char *argv[])
{
	printf("%s\n",argv[0]);
	return 0;
}



int main(int argc, char **argv)
{
	int a = argc;
	printf("a = %d\n",a);
	int b = 7;
	int c = func2(a,b);
	printf("a = %d\n b = %d \n",a,b);
	func3("hello");


	return 0;
}
