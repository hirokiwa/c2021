#include<stdio.h>
#include<string.h>

int main(void){

    char S1[100], S2[250], X[6], Y[6];
    int cnt = 0;
    int add = 0;

    puts("文字列を入力してください。");
    scanf("%s", S1);

    puts("2文字から5文字の文字列Xを入力せよ。");
    scanf("%s", X);
    puts("2文字から5文字の文字列Yを入力せよ。");
    scanf("%s", Y);

    for(int i = 0; i <= strlen(S1); i++){
        int check = 0;
        for(int j = 0; j < strlen(X); j++){
            if(S1[i + j] != X[j]) {
                check = 1;
                break;
            }
        }

        // 一致
        if(check == 0){
            cnt++;

            for(int j = 0; j < strlen(Y); j++){
                S2[add] = Y[j];
                add++;
            }

            i += (strlen(X) - 1);
        }else{
            S2[add] = S1[i];
            add++;
        }
    }

    puts("XをYに置換しました。");
    printf("%s\n", S2);
    printf("修正箇所は%d個です。\n", cnt);

    return(0);    
}