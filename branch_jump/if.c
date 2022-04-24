//#include <stdio>

int main(int argc,char **argv)
{
	int i = 0;
	if(argc == 1){
		i += 1;
	}
	else if(argc == 2){
		i += 2;
	}
	else{
		i += 3;
	}

	return 0;
}
