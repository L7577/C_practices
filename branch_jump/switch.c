//#include <stdio.h>

int main(int argc, char **argv)
{
	int i = 0;
	switch(argc){
		case 1:
			i += 1;
			break;
		case 2:
			i +=2;
			break;

		default:
			i += 3;
	}
	return 0;
}

