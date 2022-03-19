#include <stdio.h>

int main(void){
    
	int a[5];
	int b[5];

	for (int i = 0; i < 5; i++) {
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 5; i++)
		b[i] = a[4 - i];

	puts("  a    b");
	puts("---------");
	for (int i = 0; i < 5; i++)
		printf("%4d%4d\n", a[i], b[i]);

	return 0;
}

// a[0] : 17
// a[1] : 32
// a[2] : 55
// a[3] : 46
// a[4] : 62
//   a    b
// ---------
//   17  62
//   32  46
//   55  55
//   46  32
//   62  17