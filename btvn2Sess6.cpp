#include<stdio.h>
int main(){
	printf("nhap vao 5 so nguyen");
	int a,b,c,d,e;
	int le = 0;
	int chan = 0;
	scanf(" %d %d %d %d %d", &a,&b,&c,&d,&e);
	
	if(a%2!=0){
		int le=le++;
	}else if(b%2!=0){
		int le=le++;
	}else if(c%2!=0){
		int le=le++;
	}else if(d%2!=0){
		int le=le++;
	}else if(e%2!=0){
		int le=le++;
	}else if(a%2==0){
		int chan=chan++;
	}else if(b%2==0){
		int chan=chan++;
	}else if(c%2==0){
		int chan=chan++;
	}else if(d%2==0){
		int chan=chan++;
	}else if(e%2==0){
		int chan=chan++;
	}
	printf("co tat ca %d so le va %d so chan",le,chan);
	
	return 0;
}

