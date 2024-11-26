#include<stdio.h>
int main(){
	int n;
	printf("nhap 1 so nguyen bat ky \n");
	scanf("%d",&n);
	for(int a=1;a<=n;a++){
		if(n%a==0){
		printf("%d \n",a);
	    }
	}
	return 0;
}
