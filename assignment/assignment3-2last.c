// 4 行 4 列の整数からなる行列が 2 つ与えられたとき、その加算・減算・乗算を行うプログラムを作成せよ。
// また、それぞれの行列式と逆行列が導出可能であれば求めよ。ただし、行列は二次元配列を用いよ。

#include <stdio.h>
#include <math.h>

// 行列整数表示
void print_int(int matrix[4][4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
}

// 行列小数表示
void print_double(double matrix[4][4]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%4.1f", matrix[i][j]);
        }
        printf("\n");
    }
}

// 行列小数化
void trans(double decimal[4][4], int matrix[4][4]){
     for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            decimal[i][j] = matrix[i][j];
        }
    }
}

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
    double sca = matrix[x][y] / matrix[y][y];

    for(int i = 0; i < 4; i++){
        matrix[x][i] -= matrix[y][i] * sca;
    }
}

// 行列式
double cal_det(double matrix[4][4]){

    double det = 1;

    //対角成分からゼロ除去
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

        if(matrix[i][i] == 0){
            swap_line_4(matrix, i, i+1);
            det *= (-1);
            i--;
        }
    }

    for(int i = 0; i < 4; i++){
        det *= matrix[i][i];
    }

    return(det);
}

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

    // 足し算--------------------------------------
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            add[i][j] = mata[i][j] + matb[i][j];
        }
    }

    puts("加算");
    print_int(add);

    // 引き算--------------------------------------
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            sub[i][j] = mata[i][j] - matb[i][j];
        }
    }

    puts("減算");
    print_int(sub);

    // 掛け算--------------------------------------
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                mul[i][j] += mata[i][k] * matb[k][j];
            }
        }
    }

    puts("乗算");
    print_int(mul);

    // 行列式---------------------------------------
    double deca[4][4];
    double decb[4][4];

    trans(deca, mata);
    trans(decb, matb);

    printf("aの行列式：%.0f\n", cal_det(deca));
    printf("bの行列式：%.0f\n", cal_det(decb));

    return(0);
}

// ４行４列の行列を入力してください
// 1行1列：1
// 1行2列：2
// 1行3列：1
// 1行4列：1
// 2行1列：0
// 2行2列：2
// 2行3列：2
// 2行4列：1
// 3行1列：1
// 3行2列：1
// 3行3列：1
// 3行4列：0
// 4行1列：2
// 4行2列：1
// 4行3列：2
// 4行4列：1
// ４行４列の行列を入力してください
// 1行1列：2
// 1行2列：1
// 1行3列：1
// 1行4列：1
// 2行1列：1
// 2行2列：1
// 2行3列：2
// 2行4列：1
// 3行1列：2
// 3行2列：1
// 3行3列：0
// 3行4列：0
// 4行1列：1
// 4行2列：1
// 4行3列：1
// 4行4列：1
// 加算
//    3   3   2   2
//    1   3   4   2
//    3   2   1   0
//    3   2   3   2
// 減算
//   -1   1   0   0
//   -1   1   0   0
//   -1   0   1   0
//    1   0   1   0
// 乗算
//    7   5   6   4
//    7   5   5   3
//    5   3   3   2
//   10   6   5   4
// aの行列式：4
// bの行列式：-1