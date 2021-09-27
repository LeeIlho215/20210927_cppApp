#include <stdio.h>

void printInt(int n) {
	for (int i = 0; i < n; i++) {
		printf("Hello : %d\n", i);
	}
	printf("\n");
}

int main() {
	printInt(250);
	printInt(250);
	printInt(250);
}

//#include <stdio.h>
//
//int main() {
//	printf("Hello World!\n");
//	printf("Hello World!\n");
//	printf("Hello World!\n");
//	printf("Hello World!\n");
//	printf("Hello World!\n");
//}