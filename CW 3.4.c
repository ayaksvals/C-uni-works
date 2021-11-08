#include <stdio.h>
#include <stdint.h>

uint16_t mult(uint8_t a, uint8_t b){
    printf("Bytes of a: %d\n", sizeof(a));
    printf("Bytes of b: %d\n", sizeof(b));
    return a*b;
}

int main(){
    uint8_t a,b;
    printf("Enter a and b \n");
    scanf("%hhu %hhu", &a, &b);
    uint16_t c = mult(a,b);
    printf("mult = %hu \n%hu bytes", c, sizeof(c));
}
