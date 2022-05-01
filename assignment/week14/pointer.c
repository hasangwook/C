#include <stdio.h>
void sum(int x, int y) {
    printf("%d", x + y);
}
void div(int x, int y) {
    printf("%d", x / y);
}
void mul(int x, int y) {
    printf("%d", x * y);
}
void func(int (*fp[3])(int, int)) {//함수포인터 배열을 매개변수로 받음.
    fp[0](1, 2);
    fp[1](3, 4); //함수포인터 배열의 사용법
}
int main(void)
{
    int(*p)[5]; //배열포인터
    int num[5]; 
    p = num;
    int (*fp)(int, int) = sum; //함수포인터
    int (*fp2[2])(int, int) = { div, mul };//함수포인터 배열
    func(fp2);
    return 0;
}