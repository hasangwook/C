#include<stdio.h>
enum day{mon, tue, wed, thu, fri};
//이렇게 해놓으면 밑의 코드에서 mon을 쓰면 0이 되고, fri를 쓰면 4가된다.

enum in{one =1, two, three, four};
//첫번째를 지정하면 첫번째부터 등차 1인 등차수열처럼 증가함.
enum i{a = 7, b = 1, c, d=1, e, f, g};
//a=7 b=1 c=2 d=1 e=2 f=3 f=4이다.
//이런 식으로 지정할 수도 있다.
int main(void) {
	printf("%d", e);
}
