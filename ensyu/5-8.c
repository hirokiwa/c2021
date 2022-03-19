#include <stdio.h>

#define NUMBER	120

int main(void){
	
	int num;
	int tensu[NUMBER];
	int bunpu[11] = {0};
	int max = 0;

	printf("人数を入力せよ");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a1～`%dで入力せよ：",NUMBER);
	} while (num < 1 || num > NUMBER);

	printf("%d人の点数を入力せよ。\n", num);

	for (int i = 0; i < num; i++) {
		printf("%2d番", i + 1);
		do {
			scanf("%d", &tensu[i]);
			if (tensu[i] < 0 || tensu[i] > 100)
				printf("\a0～100で入力せよ：");
		} while (tensu[i] < 0 || tensu[i] > 100);
		bunpu[tensu[i] / 10]++;
	}

	for (int i = 0; i < 11; i++){
		if(max < bunpu[i]) max = bunpu[i];
	}

	for (int j = 0; j < max; j++){
		for(int i = 0; i < 11; i++){ 
			putchar(' ');
			if(j < max - bunpu[i]) putchar(' ');
			else putchar('*');
			putchar(' ');
		}
		printf("\n");
	}

	puts("----------------------------------");
	puts(" 0 10 20 30 40 50 60 70 80 90 100");

	return (0);
}

// 人数を入力せよ15
// 15人の点数を入力せよ。
//  1番17
//  2番38
//  3番19
//  4番95
//  5番100
//  6番62
//  7番77
//  8番45
//  9番69
// 10番81
// 11番83
// 12番51
// 13番42
// 14番36
// 15番61
//                    *
//     *     *  *     *     *
//     *     *  *  *  *  *  *  *  *
// ----------------------------------
//  0 10 20 30 40 50 60 70 80 90 100