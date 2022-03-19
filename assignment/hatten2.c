#include <stdio.h>

int stack[], queue[];

void push(int *poins){

    puts("押し込む数字を入力してください。");
    scanf("%d", &stack[*poins]);

    // stack[*poins] = x;
    ++*poins;
}

void enqueue(int *poinq){
    
    puts("押し込む数字を入力してください。");
    scanf("%d", &queue[*poinq]);

    ++*poinq;
}

void pop(int *poins){
    --*poins;

    printf("取り出しました：%d\n", stack[*poins]);
}

void dequeue(int *poinq){

    printf("取り出しました：%d\n", queue[0]);

    for(int i = 0; i < (*poinq - 1); i++){
        queue[i] = queue[i + 1];
    }

    --*poinq;
}

int main(void){

    int check, nos = 0, noq = 0;

    for(int i = 0; i >= 0; i++){
        puts("押し込み：0");
        puts("取り出し：1");
        puts("終了：2");
        scanf("%d", &check);

        if(check == 0){
            puts("どちらに押し込みますか。");
            puts("stack：0");
            puts("queue：1");
            scanf("%d",&check);

            if(check == 0) push(&nos);
            else if(check == 1) enqueue(&noq);

        }else if(check == 1){
            puts("どちらから取り出しますか。");
            puts("stack：0");
            puts("queue：1");
            scanf("%d",&check);

            if(check == 0) pop(&nos);
            else if(check == 1) dequeue(&noq);

        }else return(0);
    }
    
}