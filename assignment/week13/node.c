#include <stdio.h>

struct node {
	int number;
	char name[10];
	double grade;
	struct node* next;
	//다음 주소를 가리키는 구조체 변수 선언
};

int main(void)
{
	struct node s1 = { 30, "Kim", 4.3, NULL };
	//노드1
	struct node s2 = { 31, "Park", 3.7, NULL };
	//노드 2
	struct node* first = NULL;
	//처음을 가리킬 구조체 포인터
	struct node* current = NULL;
	//현재를 가리킬 구조체 포인터
	first = &s1;
	//말 그대로 first에 담긴다. first-> 하면 s1 구조체의 변수를 사용할 수 있다.
	s1.next = &s2;
	//노드1에 포함된 구조체 포인터에 노드2의 주소 넣기
	s2.next = NULL;
	//노드2 다음은 없기에 NULL입력
	current = first;
	//현재 위치를 알기 위함.
	while (current != NULL)
	{
		printf("학생의 번호=%d 이름=%s, 성적=%f\n", current->number,
			current->name, current->grade);
		current = current->next;
		//노드1로 넘어가서 정보를 읽게됨.
	}
}