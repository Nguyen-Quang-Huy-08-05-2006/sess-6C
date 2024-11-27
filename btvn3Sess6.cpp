#include<stdio.h>
int main(){
	int matKhau=6789;
	int doanMk;
	while(doanMk!=matKhau){
	printf("moi ban doan mat khau : ");
	scanf("%d", &doanMk);
		if(doanMk==matKhau){
			break;
		}else{
			printf("doan sai roi, doan lai di : ");
		}
	}
	return 0;
	
}
