#include <stdio.h>
void func(void* ptr) { //void 포인터 -> 포인터의 자료형을 정하기 힘들때 사용.
    char* p = (char*)ptr; //char형 포인터로 변환하여 대입해서 이런식으로 쓴다.
}
int main(void)
{
    int num = 0;
    const int* p;//*연산으로 값을 변경할 수 없다.
    int* const pp = &num;//p주소값을 한번 지정하면 바꿀 수 없다.
    //pp = &num;은 불가능하다.
    p = &num;
    //*p = 3;은 불가능하다.
    num = 3;// 가능함
    printf("%d", num);
    
    return 0;
}