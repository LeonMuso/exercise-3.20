#include <stdio.h>

int main(void) {
    int a;
    printf("inserisci anno: ");
    scanf("%d", &a);
    if ( a%4 == 0 && a%100 != 0 || a%400 == 0 ) {
        printf("l'anno e' bisestile");
    }else {
        printf("l'anno non e' bisestile");
    }
}
