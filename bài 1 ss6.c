#include <stdio.h>
int main (){
	int n;
	printf ("Nhap n trong khoang tu 1<= || >=9: ");
	scanf ("%d",&n);
	for (int i = 1; i <= 9; ++i){
		int answer = n * i;
		printf ("%d * %d = %d\n",n,i,answer);
	}
} 
