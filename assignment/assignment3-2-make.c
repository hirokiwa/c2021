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
    double sca = matrix[x][y];

    for(int i = x; i < 8; i++){
        matrix[x][i] -= matrix[y][i] * sca;
    }
}

// 掃き出し法
void row_reduction(double matrix[4][4], double inv[4][4]){
    double row[4][8] = {0};

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            row[i][j] = matrix[i][j];
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

    // for(int i = 7; i >= 0; i--){
    //      row[0][i] /= row[0][0];
    // }

    for(int j = 0; j < 4; j++){
        for(int i = 7; i >= j; i--){
            row[j][i] /= row[j][j];
        }
        for(int i = 0; i < 4; i++){
            if(i != j && row[i][j] != 0){
                operation_8(row, i, j);
            }
        }
        // for(int j = 7; j >= i; j--){
        //     row[i][j] /= row[i][i];
        // }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            inv[i][j] = row[i][j + 4];
        }
    }
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

    print_int(mata);
    print_int(matb);

    // 足し算---------------------------------------------------------------
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            add[i][j] = mata[i][j] + matb[i][j];
        }
    }

    puts("加算");
    print_int(add);

    // 引き算----------------------------------------------------------------
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            sub[i][j] = mata[i][j] - matb[i][j];
        }
    }

    puts("減算");
    print_int(sub);

    // 掛け算----------------------------------------------------------------
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                mul[i][j] += mata[i][k] * matb[k][j];
            }
        }
    }

    puts("乗算");
    print_int(mul);

    // 行列式-----------------------------------------------------------------
    double deca[4][4];
    double decb[4][4];

    trans(deca, mata);
    trans(decb, matb);

    double deta = cal_det(deca);
    double detb = cal_det(decb);

    printf("aの行列式：%.0f\n", deta);

    printf("bの行列式：%.0f\n", detb);

    // 逆行列----------------------------------------------------------------
    double inva[4][4] = {0};
    double invb[4][4] = {0};

    puts("aの逆行列");
    if(deta == 0){
        puts("定義できません。");
    }else{
        trans(deca, mata);
        row_reduction(deca, inva);
        print_double(inva);
    }

    puts("bの逆行列");
    if(detb == 0){
        puts("定義できません。");
    }else{
        trans(decb, matb);
        row_reduction(decb, invb);
        print_double(invb);
    }
    
    // trans(deca, mata);
    // trans(decb, matb);

    // double inva[4][4] = {0};
    // double invb[4][4] = {0};

    // row_reduction(deca, inva);
    // row_reduction(decb, invb);
    
    // puts("aの逆行列");
    // print_double(inva);
    // puts("bの逆行列");
    // print_double(invb);

    return(0);
}