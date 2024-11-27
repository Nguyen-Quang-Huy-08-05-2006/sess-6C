#include<stdio.h>
int main(){
	printf("nhap vao 5 so nguyen");
	int a,b,c,d,e;
	int sum=0;
	scanf(" %d %d %d %d %d", &a,&b,&c,&d,&e);
	
	if(a%2!=0){
		 sum=a+sum;
	} if(b%2!=0){
		 sum=b+sum; 
	} if(c%2!=0){
		sum=c+sum;
	} if(d%2!=0){
		 sum=d+sum;
	} if(e%2!=0){
		 sum=e+sum;
	}
	printf("tong cac so le la %d", sum);
	
	return 0;
}

