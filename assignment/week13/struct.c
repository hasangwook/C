#include <stdio.h>
struct test2 {
	int arr[10];
	//구조체에 배열 선언
};
struct test1 {
	int z;
	struct test2 va[3];
	//구조체배열 변수 선언
};
struct test {
	int x;
	int y;
	struct test1 v;
	//구조체 변수 선언
};
struct pointer {
	int zz;
	struct test* po;
	//구조체 안에 다른 구조체를 참고할 수 있도록 구조체 포인터를 넣은것.
};
int main() {
	struct test var;
	struct test* p;
	struct pointer vari;
	vari.po = &var;
	//구조체 안의 구조체 포인터 사용.
	p = &var;
	//구조체 포인터
	var.x = 10;
	printf("%d", vari.po->x);
	printf("%d", (*p).x);
	printf("%d", p->x);
	//위의 두 문장은 같은 것이다. 
	//->연산은 p가 참조하는 구조체의 내용을 쓰겠다는 뜻이다.
	var.y = 20;
	var.v.z = 30;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 10; j++) {
			var.v.va[i].arr[j] = j;
			printf("%d", var.v.va[i].arr[j]);
		}
	return 0;
}
