#include <stdio.h>
int main() {
    int x,steps=1;
    scanf("%d",&x);
    while (x>5) {
        steps+=1;
        x-=5;
    }
    printf("%d",steps);
    return 0;
}
