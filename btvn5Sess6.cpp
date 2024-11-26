#include<stdio.h>
int main(){
	int dd, mm, yyyy;
	printf("moi ban nhap vao so nam: ");
	scanf("%d", &yyyy);
	printf("moi ban nhap vao so thang: ");
	scanf("%d", &mm);
	
	if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12){
		printf("thang %d nam %d co 31 ngay", mm, yyyy);
	}else if(mm==4||mm==6||mm==9||mm==11){
		printf("thang %d nam %d co 30 ngay", mm, yyyy);
	}else if(mm==2){
		if(yyyy%4==0&&yyyy%100!=0||yyyy%400==0){
			printf("thang %d nam %d co 29 ngay ", mm, yyyy);
		}else if(yyyy%4!=0&&yyyy%100==0||yyyy%400!=0){
			printf("thang %d nam %d co 28 ngay ", mm, yyyy);
		}
	}

	return 0;
}
