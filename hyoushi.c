    #include <stdio.h>
    
    int main(void){
        char name[9];
        int class;
        double number;

        // char subject[9];

        // puts("科目名を入力してください");
        // printf("科目名："); scanf("%s", &subject);

        puts("名前を入力してください");
        printf("名前："); scanf("%s", &name);

        puts("学籍番号を入力してください");
        printf("学籍番号："); scanf("%lf", &number);

        puts("何回目の課題ですか？");
        printf("→"); scanf("%d", &class);

        printf("表紙が完成しました。\n----------------------------\n\n数学演習Ⅱ\n第%d回課題\n\n\n%11.0f\n%s\n\n----------------------------", class, number, name );

        return(0);
    }