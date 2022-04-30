#includestdio.h
union va {
	int z;
	int zz;
};union 선언 방법1
struct m {
	int type;
	union {
		int x;
		int y;
	}var;
	공용체 변수라고 생각하면 되겠다.~.var.x처럼 접근한다.
};
int main(void) {
	struct m a;
	a.var.x = 10;
	printf(%d %dn, a.var.x, a.var.y);
	a.var.y = 30;
	printf(%d %d, a.var.x, a.var.y);
}
공용체는 그냥 공간을 줄이려는 용도로 쓴다 보면 된다. 
그래서 공용체안의 변수를 하나 선택해서 사용하는 경우가 많은거 같다.