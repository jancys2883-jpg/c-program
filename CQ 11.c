#include<stdio.h>
int main(){
	int n, firstdigit;
	printf(" enter n");
	scanf("%d",&n);
	firstdigit=n % 10;
	if(firstdigit% 3==0){
		printf("firstdigit digit %d is odd.\n",firstdigit);
		}else{
			printf("firstdigit digit %d is even.\n",firstdigit);
		}
		return 0;
	}