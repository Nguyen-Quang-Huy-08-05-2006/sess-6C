include <stdio.h>

int main(){
	float money,tienGui,bank;
	int thang;
	printf("vui long nhap vao tien gui, lai hang thang,so thang:\n");
	scanf("%f %f %d",&bank,&tienGui,&thang);
	money=bank;
	while(thang>0){
		thang--;
		money=money*(1+0.01*tienGui);
	}
	printf("tienlai: %.3f\ntien nhan duoc: %.3f",money-bank,money);
	return 0;
}
