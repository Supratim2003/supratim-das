#include<stdio.h>
int india();
int france();
char ch;
int main()
{
	printf("enter your nationality \n f for france \n i for indian:");
	//char ch;
	scanf("%c", &ch);
	if (ch=="f"){
		int france();
	}
	else{
		india();
	}
	
	
	return 0;
}
int india(){
	printf("namaste");
	return 0;
}
int france(){
	printf("bonjour");
	return 0;
}
