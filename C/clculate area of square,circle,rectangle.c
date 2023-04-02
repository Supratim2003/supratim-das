#include<stdio.h>
#include<math.h>
float square(float side);
float circle(float rad);
float rectangle(float a,float b);
int main(){
	float a=5.0;
	float b=10.0;
	printf("area is: %f",rectangle(a,b));
	return 0;
}
float square(float side){
	return side*side;
}
float circle(float rad){
	return 3.14*rad*rad;
}
float rectangle(float a,float b){
	return a*b;
}
