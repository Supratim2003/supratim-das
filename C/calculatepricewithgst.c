#include<stdio.h>
void calculatepricewithgst(float p);
int main(){
	float p= 100.00;
	calculatepricewithgst(p);
	printf("price is :%f \n",p);
	return 0;
}
void calculatepricewithgst(float p){
	p=p+(0.18*p);
	printf("final price is :%f",p);
	
}
