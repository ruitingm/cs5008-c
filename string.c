#include <stdio.h>




int main(){
// Declare string
// Method 1
	char s1[] = "Hello";
// Method 2, take account of \0 when declaring size
	char s2[6] = "Hello";
// Method 3
	char s3[] = {'H', 'e', 'l', 'l', 'o', '\0'};
// Method 4, take account of \0 when declaring size
	char s4[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
// Method 5, String ptr
	char* s5 = "Hello";
	

/*
// Read string from stdin
// Method 1
	char s6[20];
	int i1;
	double f1;
	// scanf takes ptr and follows the pattern of first arg
	// %* skips input
	scanf("%19s %d %lf", s6, &i1, &f1); 
	printf("Input string: %s, input integer: %d, input float: %lf\n", s6, i1, f1);
// Method 2
	char s7[20];
	int s7_length = 20;
	fgets(s7, s7_length, stdin);
	printf("Input string: %s\n", s7);
*/
	

// Update string
// Method 1
	printf("Original s4: %s\n", s4);
	s4[0] = 'b';		
	printf("Update s4 to %s\n", s4);
// Method 2
	*(s4+1) = 'o';		
	printf("Update s4 to %s\n", s4);
}
