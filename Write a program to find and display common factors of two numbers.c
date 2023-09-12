#include<stdio.h>
int main() {
    int num1,num2,ans = 0;
    scanf("%d%d",&num1,&num2);
    printf("Common factors are : ");
    for (int i = 1; i<num1; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            printf("%d ",i);
            ans++;
        }
    }
    printf("\nNumber of common factors are : %d\n",ans);
    return 0;
}
