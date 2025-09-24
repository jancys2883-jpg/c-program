#include<stdio.h>
int main(){
	int n,count=0;
	scanf("%d\n",&n);
	char str[n];
	scanf("%[^\n]",str);
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==' ')
		count++;
	}
	printf("%d",count+1);
return 0;
}