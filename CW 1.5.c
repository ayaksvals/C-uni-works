#include <iostream>

int func_a(int a){
    int a2, a4;
    a2=a*a;
    a4=a2*a2;
    return a4;
}

int func_b(int a){
    int a2, a3, a6;
    a2=a*a;
    a3=a2*a;
    a6=a3*a3;
    return a6;
}

int func_c(int a){
    int a2, a3, a6, a9;
    a2=a*a;
    a3=a2*a;
    a6=a3*a3;
    a9=a6*a3;
    return a9;
}

int func_d(int a){
    int a2, a3, a6, a9, a15;
    a2=a*a;
    a3=a2*a;
    a6=a3*a3;
    a9=a6*a3;
    a15=a9*a6;
    return a15;
}

int func_e(int a){
    int a2, a4, a8, a16, a20, a28;
    a2=a*a;
    a4=a2*a2;
    a8=a4*a4;
    a16=a8*a8;
    a20=a16*a4;
    a28=a20*a8;
    return a28;
}

int func_f(int a){
    int a2, a4, a8, a16, a32, a64;
    a2=a*a;
    a4=a2*a2;
    a8=a4*a4;
    a16=a8*a8;
    a32=a16*a16;
    a64=a32*a32;
    return a64;
}

int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    printf("%d", func_a(n));
}