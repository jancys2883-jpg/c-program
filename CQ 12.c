#include<stdio.h>
int main(){
	int n, lastdigit;
	scanf("%d",&n);
	printf(" enter n");
	lastdigit=n %10;
	if(lastdigit %2==0){
	printf("lastdigit is even %d",n);
}else{
	printf(" lastdigit is odd %d",n);
}
return 0;
}
