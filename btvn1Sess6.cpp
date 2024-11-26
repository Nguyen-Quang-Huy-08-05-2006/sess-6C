#include<stdio.h>
int main(){
	printf("nhap vao 5 so nguyen");
	int a,b,c,d,e;
	int sum=0;
	scanf(" %d %d %d %d %d", &a,&b,&c,&d,&e);
	
	if(a%2!=0){
		int sum=a+sum;
	}else if(b%2!=0){
		int sum=b+sum; 
	}else if(c%2!=0){
		int sum=c+sum;
	}else if(d%2!=0){
		int sum=d+sum;
	}else if(e%2!=0){
		int sum=e+sum;
	}
	printf("tong cac so le la %d", sum);
	
	return 0;
}

