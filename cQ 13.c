#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	printf(" n is +ve,-ve,||0.\n");
	if (n > 0){
    printf("%d is +ve",&n);
}else if(n < 0){
	printf("%d is -ve",&n);
	}else{
		printf("%d is 0",&n);
	}
	return 0;
	}