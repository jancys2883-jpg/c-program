#include"stdio.h"
int main(){
    int n;
    scanf("%d",&n);//5
    for(int i=1;i<=n;i++){
    if(i==4){
	     continue;
    }
    printf("%d,",i);//1,2,3
