#include<stdio.h>
int main() {
    int num,count = 0;
    scanf("%d",&num);
    for (int i = 2; i<num; i++) {
        if (num % i == 0)count++;
    }
    if (count)printf("Not Prime\n");
    else printf("Prime\n");
    return 0;
}
