#include <stdio.h>

int main(void){
    
	float menu[32][3] = {0};

	for (int i = 0; i < 32; i++) {
        printf("%d赤：", i+1); scanf("%f", &menu[i][0]); 
        printf("%d緑：", i+1); scanf("%f", &menu[i][1]);
        printf("%d黄：", i+1); scanf("%f", &menu[i][2]);
	}

    for (int i = 0; i < 32; i++){
        printf("{%.2f, %.2f, %.2f},\n", menu[i][0], menu[i][1], menu[i][2]);
    }

	return 0;
}