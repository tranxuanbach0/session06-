#include <stdio.h>

int main(){
	int sum=0,num;
	for (int i=1;i<=5;i++){
		printf("nhap vao so thu %d:",i);
		scanf("%d",&num);
		 
    if (num % 2 != 0 ){
    	sum += num;
	}
	} 
	printf("tong la %d",num);
} 
