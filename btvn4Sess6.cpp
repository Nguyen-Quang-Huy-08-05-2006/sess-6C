#include<stdio.h>
#include<math.h>
int main(){
	float x1,x2;
	float a,b,c;
	float delta = b*b - 4*a*c; 
		
	printf("nhap vao so a: ");
	scanf("%f", &a);
	
	printf("nhap vao so b: ");
	scanf("%f", &b);
	
	printf("nhap vao so c: ");
	scanf("%f", &c);
	
	
	printf("%.2fx^2 + %.2fx + %.2f = 0 \n gia tri cua x la : \n",a,b,c);
	if(delta<0){
		printf("phuong trinh vo nghiem");
	}else if(delta=0){
		float x1 = x2 = -b/(2*a);
		printf("phuong trinh co nghiem kep \n%f \n%f", x1, x2);
	}else{
		float x1 = (-b + sqrt(delta))/2*a;
		float x2 = (-b - sqrt(delta))/2*a;
		printf("phuong trinh co 2 nghiem phan biet \n%f \n%f", x1, x2);
	}
	
	return 0;
}
