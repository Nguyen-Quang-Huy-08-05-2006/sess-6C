#include<stdio.h>
int main(){
	printf("nhap vao 5 so nguyen");
	int a,b,c,d,e;
	int le = 0;
	int chan = 0;
	scanf(" %d %d %d %d %d", &a,&b,&c,&d,&e);
	
	if(a%2!=0){
		le=le++;
	} if(b%2!=0){
		le=le++;
	} if(c%2!=0){
		le=le++;
	} if(d%2!=0){
		le=le++;
	} if(e%2!=0){
		le=le++;
	} if(a%2==0){
		chan=chan++;
	} if(b%2==0){
		chan=chan++;
	} if(c%2==0){
		chan=chan++;
	} if(d%2==0){
		chan=chan++;
	} if(e%2==0){
		chan=chan++;
	}
	printf("co tat ca %d so le va %d so chan",le,chan);
	
	return 0;
}

