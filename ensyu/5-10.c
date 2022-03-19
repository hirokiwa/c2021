#include <stdio.h>

int main(void){

    int matrixa[4][3] = {0};
    int matrixb[3][4] = {0};
    int ans[4][4] = {0};
    
    puts("４行３列の行列を入力してください");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("%d行%d列：", 1 + i, 1 + j);
            scanf("%d",&matrixa[i][j]);
        }
    }

    puts("３行４列の行列を入力してください");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d行%d列：", 1 + i, 1 + j);
            scanf("%d",&matrixb[i][j]);
        }
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            ans[i][j] = matrixa[i][0]*matrixb[0][j]+matrixa[i][1]*matrixb[1][j]+matrixa[i][2]*matrixb[2][j];
        }
    }

    printf("\n");

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%4d", ans[i][j]);
        }
        printf("\n");
    }

    return(0);

}

// ４行３列の行列を入力してください
// 1行1列：1
// 1行2列：2
// 1行3列：1
// 2行1列：2
// 2行2列：2
// 2行3列：1
// 3行1列：3
// 3行2列：1
// 3行3列：2
// 4行1列：1
// 4行2列：0
// 4行3列：1
// ３行４列の行列を入力してください
// 1行1列：0
// 1行2列：1
// 1行3列：2
// 1行4列：2
// 2行1列：1
// 2行2列：2
// 2行3列：1
// 2行4列：1
// 3行1列：1
// 3行2列：1
// 3行3列：1
// 3行4列：1

//    3   6   5   5
//    3   7   7   7
//    3   7   9   9
//    1   2   3   3