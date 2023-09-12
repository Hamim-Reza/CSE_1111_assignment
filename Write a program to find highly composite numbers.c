#include<stdio.h>
int main() {
    int num,cont = 0,chk = 1;
    scanf("%d",&num);
    for (int i = 1; i<num; i++) {
        if (num % i == 0)cont++;
    }
    for (int i = 1; i<num; i++) {
        int flag = 0;
        for (int j=1; j<i; j++) {
            if (i%j==0)flag++;
        }
        if (flag>=cont) {
            chk = 0;
            break;
        }
    }
    if (chk)printf("Highly Composite Number\n");
    else printf("Not Highly Composite Number\n");
    return 0;
}
