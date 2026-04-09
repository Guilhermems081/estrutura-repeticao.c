#include<stdio.h>

void contagemRegressiva(int n) {

    if(n > 0) {
        contagemRegressiva(n-1);
        printf("%d\n", n);
    }
}

int main() {
    
    int i = 10;

    contagemRegressiva(i);

    return 0;
}