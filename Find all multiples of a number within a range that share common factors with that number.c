#include<stdio.h>
int main() {
    int num,range;
    scanf("%d%d",&num,&range);
    printf("Numbers are: ");
    for (int i = 1; ; i++) {
        if (num*i > range)break;
        else printf("%d ",num*i);
    }
    printf("\n");
    return 0;
}
