#include<stdio.h>
int calculateprice(float val);
int main(){
	float val=100.0;
	clcuateprice(val);
	printf("value is :%f\n", val);
	return 0;
}
int calculateprice(float val){
	val=val+(0.18*val);
	printf("final price is: %f\n", val);
	return 0;
}
