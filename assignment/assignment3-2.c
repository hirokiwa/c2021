// 4 行 4 列の整数からなる行列が 2 つ与えられたとき、その加算・減算・乗算を行うプログラムを作成せよ。
// また、それぞれの行列式と逆行列が導出可能であれば求めよ。ただし、行列は二次元配列を用いよ。

#include <stdio.h>
#include <math.h>

// 行列表示
void print_mat(double matrix[4][4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%4.1f", matrix[i][j]);
        }
        printf("\n");
    }
}

// 行列複製
void copy_matrix(double copy[4][4], double matrix[4][4]){
     for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            copy[i][j] = matrix[i][j];
        }
    }
}

// 余因子
// int cul_adj(int matrix[][4], int i){
//     int adj;
//     int adjugate[3][3] = {0};
//     int line = 0;

//     for(int j = 0; j < 3; j++){

//         if(line == i) line++;

//         for(int k = 0; k < 3; k++){
//             adjugate[j][k] = matrix[line][k + 1];
//         }

//         line++;
//     }

//     adj = adjugate[0][0] * adjugate[1][1] * adjugate[2][2] + adjugate[1][0] * adjugate[2][1] * adjugate[0][2] + adjugate[2][0] * adjugate[0][1] * adjugate[1][2];
//     adj -= adjugate[2][0] * adjugate[1][1] * adjugate[0][2] + adjugate[1][0] * adjugate[0][1] * adjugate[2][2] + adjugate[0][0] * adjugate[2][1] * adjugate[1][2];

//     return(adj);
// }

// 余因子展開
// int cal_det(int matrix[][4]){
//     int det;

//     for(int i = 0; i < 4; i++){
//         det += matrix[i][0] * pow((-1), i) * cul_adj(matrix, i);
//     }

//     return(det);
// }

// 行入れ替え(4列)
void swap_line_4(double matrix[4][4], int x, int y){

    for(int i = 0; i < 4; i++){
        double temp = matrix[x][i];

        matrix[x][i] = matrix[y][i];
        matrix[y][i] = temp;
    }

}

// 基本変形(4列)
void operation_4(double matrix[4][4], int x, int y){
    // for(int i = 0; i < 4; i++){
    //     matrix[x][i] = matrix[x][i] + matrix[y][i] ;
    // }
    double sca = matrix[x][y] / matrix[y][y];

    for(int i = 0; i < 4; i++){
        matrix[x][i] -= matrix[y][i] * sca;
    }
}

// 行列式
double cal_det(double matrix[4][4]){

    double det = 1;

    //上三角行列を作る
    for(int i = 0; i < 4; i++){
        if(matrix[i][i] == 0){
            for(int j = 0; j < 4; j++){
                if(matrix[j][i] != 0 && matrix[i][j] != 0){
                    swap_line_4(matrix, i, j);

                    det *= (-1);
                    break;
                }
            }
        }
    }

    // 基本変形
    for(int i = 1; i < 4; i++){
        for(int j = 0; j < i; j++){
            if(matrix[i][j] != 0){
                operation_4(matrix, i, j);
            }
        }
    }

    for(int i = 0; i < 4; i++){
        det *= matrix[i][i];
    }

    return(det);
}

// 行入れ替え（8列）
void swap_line_8(double matrix[4][8], int x, int y){
    for(int i = 0; i < 8; i++){
        double temp = matrix[x][i];

        matrix[x][i] = matrix[y][i];
        matrix[y][i] = temp;
    }
}

// 基本変形(8列)
void operation_8(double matrix[4][8], int x, int y){
    // for(int i = 0; i < 4; i++){
    //     matrix[x][i] = matrix[x][i] + matrix[y][i] ;
    // }
    double sca = matrix[x][y] / matrix[y][y];

    for(int i = 0; i < 8; i++){
        matrix[x][i] -= matrix[y][i] * sca;
    }
}

// 掃き出し法
void row_reduction(double matrix[4][4], double inv[4][4]){
    double row[4][8] = {0};

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            row[j][i] = matrix[j][i];
        }
        row[i][i + 4] = 1;
    }

    // 対角成分からゼロを排除
    for(int i = 0; i < 4; i++){
        if(row[i][i] == 0){
            for(int j = 0; j < 4; j++){
                if(row[j][i] != 0 && row[i][j] != 0){
                    swap_line_8(row, i, j);

                    break;
                }
            }
        }
    }

    for(int i = 7; i >= 0; i--){
         row[0][i] /= row[0][0];
    }

    for(int i = 1; i < 4; i++){
        for(int j = 0; j < i; j++){
            if(row[i][j] != 0){
                operation_8(row, i, j);
            }
        }
        for(int j = 7; j >= i; j--){
            row[i][j] /= row[i][i];
        }
    }

    for(int i = 0; i < 4;  i++){
        for(int j = 0; j < 4; j++){
            inv[i][j] = row[i][j + 4];
        }
    }
}

int main(void){

    double mata[4][4] = {0};
    double matb[4][4] = {0};
    double add[4][4] = {0};
    double sub[4][4] = {0};
    double mul[4][4] = {0};
    
    puts("４行４列の行列を入力してください");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d行%d列：", 1 + i, 1 + j);
            scanf("%lf",&mata[i][j]);
        }
    }

    puts("４行４列の行列を入力してください");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%d行%d列：", 1 + i, 1 + j);
            scanf("%lf",&matb[i][j]);
        }
    }

    print_mat(mata);
    print_mat(matb);

    // 足し算---------------------------------------------------------------
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            add[i][j] = mata[i][j] + matb[i][j];
        }
    }

    puts("加算");
    print_mat(add);

    // 引き算----------------------------------------------------------------
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            sub[i][j] = mata[i][j] - matb[i][j];
        }
    }

    puts("減算");
    print_mat(sub);

    // 掛け算----------------------------------------------------------------
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                mul[i][j] += mata[i][k] * matb[k][j];
            }
        }
    }

    puts("乗算");
    print_mat(mul);

    // 行列式-----------------------------------------------------------------
    double cpya[4][4];
    double cpyb[4][4];

    copy_matrix(cpya, mata);
    copy_matrix(cpyb, matb);

    printf("aの行列式：%4.1f\n", cal_det(cpya));
    // cal_det(mata);

    printf("bの行列式：%4.1f\n", cal_det(cpyb));
    // cal_det(matb);

    // 逆行列----------------------------------------------------------------
    
    copy_matrix(cpya, mata);
    copy_matrix(cpyb, matb);

    double inva[4][4] = {0};
    double invb[4][4] = {0};

    row_reduction(cpya, inva);
    row_reduction(cpyb, invb);

    puts("aの逆行列");
    print_mat(inva);
    puts("bの逆行列");
    print_mat(invb);

    return(0);
}