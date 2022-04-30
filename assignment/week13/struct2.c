#include <stdio.h>
struct student {
	int number;
	char name[10];
	int grade;
};
struct student create() { //반환값이 struct student타입이다.
	struct student s;
	s.number = 3;
	s.name[1] = 0;
	s.grade = 4.0;
	return s;
};
int func(struct student s, struct student* s1) {
	// 처음 인자는 구조체를 받을 것이고(값이기에 복사본이 넘어감)
	// 두번째 인자는 구조체의 주소를 받을 것이다.
}

int main(void)
{
	struct student a;
	a = create();
	// s의 복사본이 a에 저장된다.
}