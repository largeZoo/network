#include <stdio.h>

int main(void){
	int i, j, k;
	int a[2][2][3] = {{{1,2,3}, {4,5,6}}, {{7,8,9}, {10,11,12}}}; 
	
	printf("a : %lu\n", (unsigned long)sizeof(a));
}
