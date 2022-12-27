#include <stdio.h>
//猜數字https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30784
int main(){
    int num[4];
    int ans[4];
    scanf("%1d%1d%1d%1d", &ans[0], &ans[1], &ans[2], &ans[3]);
    int correct = 0;//numbers of correct number and place
    int wrong = 0;//numbers of correct number but wrong place
    scanf("%1d%1d%1d%1d", &num[0], &num[1], &num[2], &num[3]);
    while (num[0] != 0 && num[1] != 0 && num[2] != 0 && num[3] != 0) {
        for (int i=0; i<4; i++) {
            for (int j=0; j<4; j++) {
                if (num[i] == ans[j]) {
                    wrong += 1;
                }
            }
        }
        for (int i=0; i<4; i++) {
            if (num[i] == ans[i]) {
                correct += 1;
                wrong -= 1;
            }
        }
        printf("%dA%dB\n", correct, wrong);
        correct = 0;
        wrong = 0;
        scanf("%1d%1d%1d%1d", &num[0], &num[1], &num[2], &num[3]);
    }
    return 0;
}
