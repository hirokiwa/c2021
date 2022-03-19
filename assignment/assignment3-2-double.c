// 4 行 4 列の整数からなる行列が 2 つ与えられたとき、その加算・減算・乗算を行うプログラムを作成せよ。
// また、それぞれの行列式と逆行列が導出可能であれば求めよ。ただし、行列は二次元配列を用いよ。

#include <stdio.h>
#include <math.h>

void print_mat(int matrix[4][4], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

// void trans(double decimal[4][4], int matrix[4][4]){
//      for(int i = 0; i < 4; i++){
//         for(int j = 0; j < 4; j++){
//             decimal[i][j] = matrix[i][j];
//         }
//     }
// }

// 余因子
int cul_adj(int matrix[4][4], int i){
    int adj;
    int adjugate[3][3] = {0};
    int line = 0;

    for(int j = 0; j < 3; j++){

        if(line == i) line++;

        for(int k = 0; k < 3; k++){
            adjugate[j][k] = matrix[line][k + 1];
        }
        line++;
    }

    for(int j = 1; j < 4; j++){
        for(int k = 0; k < j; k++){
            int temp = adjugate[j][k];

            adjugate[j][k] = adjugate[k][j];
            adjugate[k][j] = temp;
        }
    }

    adj = adjugate[0][0] * adjugate[1][1] * adjugate[2][2];
    adj += adjugate[1][0] * adjugate[2][1] * adjugate[0][2];
    adj += adjugate[2][0] * adjugate[0][1] * adjugate[1][2];
    adj -= adjugate[2][0] * adjugate[1][1] * adjugate[0][2];
    adj -= adjugate[1][0] * adjugate[0][1] * adjugate[2][2];
    adj -= adjugate[0][0] * adjugate[2][1] * adjugate[1][2];

    return(adj);
}

// 余因子展開
int cal_det(int matrix[4][4]){
    int det;

    for(int i = 0; i < 4; i++){
        det += matrix[i][0] * pow((-1), i) * cul_adj(matrix, i);
    }

    return(det);
}

// void swap_line(double matrix[4][4], int x, int y){

//     for(int i = 0; i < 4; i++){
//         double temp = matrix[x][i];

//         matrix[x][i] = matrix[y][i];
//         matrix[y][i] = temp;
//     }

// }

// void operation(double matrix[4][4], int x, int y){
    // for(int i = 0; i < 4; i++){
    //     matrix[x][i] = matrix[x][i] + matrix[y][i] ;
    // }
//     double sca = matrix[x][y] / matrix[y][y];

//     for(int i = 0; i < 4; i++){
//         matrix[x][i] -= matrix[y][i] * sca;
//     }
// }

// double cal_det(double matrix[4][4]){

//     double det = 1;

//     for(int i = 0; i < 4; i++){
//         if(matrix[i][i] == 0){
//             for(int j = 0; j < 4; j++){
//                 if(matrix[j][i] != 0 && matrix[i][j] != 0){
//                     swap_line(matrix, i, j);

//                     det *= (-1);
//                     break;
//                 }
//             }
//         }
//     }

//     for(int i = 1; i < 4; i++){
//         for(int j = 0; j < i; j++){
//             if(matrix[i][j] != 0){
//                 operation(matrix, i, j);
//             }
//         }
//     }

//     for(int i = 0; i < 4; i++){
//         det *= matrix[i][i];
//     }

//     return(det);
// }

int main(void){

    int mata[4][4] = {0};
    int matb[4][4] = {0};
    int add[4][4] = {0};
    int sub[4][4] = {0};
    int mul[4][4] = {0};
    
    puts("４行４列の行列を入力してください");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d行%d列：", 1 + i, 1 + j);
            scanf("%d",&mata[i][j]);
        }
    }

    puts("４行４列の行列を入力してください");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d行%d列：", 1 + i, 1 + j);
            scanf("%d",&matb[i][j]);
        }
    }

    print_mat(mata, 4);
    print_mat(matb, 4);

    // 足し算---------------------------------------------------------------
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            add[i][j] = mata[i][j] + matb[i][j];
        }
    }

    puts("加算");
    print_mat(add, 4);

    // 引き算----------------------------------------------------------------
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            sub[i][j] = mata[i][j] - matb[i][j];
        }
    }

    puts("減算");
    print_mat(sub, 4);

    // 掛け算----------------------------------------------------------------
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                mul[i][j] += mata[i][k] * matb[k][j];
            }
        }
    }

    puts("乗算");
    print_mat(mul, 4);

    // 行列式-----------------------------------------------------------------
    // double deca[4][4];
    // double decb[4][4];

    // trans(deca, mata);
    // trans(decb, matb);

    printf("aの行列式：%d\n", cal_det(mata));
    // cal_det(mata);

    printf("bの行列式：%d\n", cal_det(matb));
    // cal_det(matb);

    // 逆行列----------------------------------------------------------------
    // まず余因子行列を求める
    int cof[4][4];
    int inv[4][4];


    return(0);

}