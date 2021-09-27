#include <stdio.h>

typedef struct _point {
	int x;
	int y;
} point;

void InitPoint(point* arg, int x, int y) {
	arg->x = x;
	arg->y = y;
}

void PrintPoint(const point* arg) {
	printf("(%d, %d)\n", arg->x, arg->y);
}

void UnInitPoint(point* arg) {
	arg->x = 0;
	arg->y = 0;
}

void AddPoint(point* arg, int x, int y) {
	arg->x += x;
	arg->y += y;
}

int main() {
	point pt;
	InitPoint(&pt, 3, 5);
	PrintPoint(&pt);

	AddPoint(&pt, 4, 7);
	PrintPoint(&pt);

	UnInitPoint(&pt);
	PrintPoint(&pt);
}

//#include <stdio.h>
//
//void Increment(int* pn) {
//	++* pn;
//}
//
//void Print(const int* pn) {
//	printf("%d\n", *pn);
//}
//
//void Decrement(int* pn) {
//	--* pn;
//}
//
//void Reset(int* pn) {
//	*pn = 0;
//}
//
//int main() {
//	int n = 5;
//
//	Increment(&n);
//	Print(&n);
//	Decrement(&n);
//	Print(&n);
//	Reset(&n);
//	Print(&n);
//}

//#include <stdio.h>
//
//void PrintArray(const int* arr, int size) {
//	for (int i = 0; i < size; i++) {
//		printf("[%d] : %d\n", i, arr[i]);
//	}
//}
//
//int main() {
//	int arr[5] = { 1,2,3,4,5, };
//	int arr2[3] = { 27,25,56 };
//
//	PrintArray(arr, 3);
//	PrintArray(arr2, 3);
//}

//#include <stdio.h>
//
//typedef struct _point {
//	int x;
//	int y;
//} Point;
//
//void printPoint(const Point* arg) {
//	printf("(%d, %d)\n", arg->x, arg->y);
//}
//
//int main() {
//	Point pt1 = { 1,2 };
//
//	printPoint(&pt1);
//}


//#include <stdio.h>
//
//void printStr(const char* s) {
//	printf("%s\n", s);
//}
//
//int main() {
//	char buf1[] = "Hello!";
//	const char* buf2 = "Hello!";
//
//	printStr(buf1);
//	printStr(buf2);
//	printStr("Hello World!");
//}

//#include <stdio.h>
//
//void printInt(int n) {
//	for (int i = 0; i < n; i++) {
//		printf("Hello : %d\n", i);
//	}
//	printf("\n");
//}
//
//int main() {
//	printInt(250);
//	printInt(250);
//	printInt(250);
//}

//#include <stdio.h>
//
//int main() {
//	printf("Hello World!\n");
//	printf("Hello World!\n");
//	printf("Hello World!\n");
//	printf("Hello World!\n");
//	printf("Hello World!\n");
//}