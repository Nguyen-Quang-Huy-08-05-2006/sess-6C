include <stdio.h>

int main(){
	float money,tienGui,tienGui;
	int thang;
	printf("vui long nhap vao tien gui, lai hang thang,so thang:\n");
	scanf("%f %f %d",&tienGui,&lai,&thang);
	money=tienGui;
	while(thang>0){
		thang--;
		money=money*(1+0.01*lai);
	}
	printf("tienlai: %.3f\ntien nhan duoc: %.3f",money-tienGui,money);
	return 0;
}
