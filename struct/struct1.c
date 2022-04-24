#include <stdio.h>
#include <stdlib.h>

/*define a struct */
struct {
	char a;
	char b;
}a1,a2;

struct one{
	int a;
	int b;
	char c;
};

typedef struct two *Twoptr;
struct two{
	int q;
	int w;
	char e;
};
typedef Twoptr Two; 


typedef struct three *Threeptr;
struct three{
	int f;
	int g;
	char h;
};
typedef Threeptr* Three; 
//ypedef Three* The;





int main(int argc, char **argv)
{
/*
	a1.a = 'c';
	printf("a1.a = %c\n",a1.a);
	struct one x1;
	struct one * x1p = &x1;
	Two x2;

	x1.a = argc;
	size_t w = sizeof(Two);
	printf("sizeof(Two)=%ld\n",w);
    x2 = malloc (sizeof(Two));	
	x2->q = argc;
	
	printf("x1.a = %d\n",x1.a);
	
	printf("x1p->a = %d\n",x1p->a);
	printf("x2->q = %d\n",x2->q);
	free(x2);
*/
printf("-==========================================\n");

	Three x3;
	//printf("&x3 = %p\n",&x3);
	printf("x3 = %p\n",x3);
	printf("*x3 = %p\n",*x3);
	x3 = malloc (4*sizeof(struct three));
	printf("&x3 = %p\n",&x3);
	printf("x3 = %p\n",x3);
	printf("sizeof(struct three) = %ld\n",sizeof(struct three));
	printf("*x3 = %p\n",*x3);
	printf("x3[0] = %p\n",x3[0]);
	x3[0] = malloc(sizeof(struct three));
	x3[0]->f = argc;
	/*for (int i = 0; i < 1; i++){
		//x3[i] = malloc (sizeof(Threeptr));
		x3[i]->q = argc;

	}
	*/
	printf("x3[0][0]->q = %d\n",x3[0]->f);

	free(x3[0]);
	free(x3);
	return 0;
}

