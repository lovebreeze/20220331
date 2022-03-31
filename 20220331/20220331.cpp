#include <stdio.h>
#include <math.h>

struct data
{
	char character; //1
	int interger; //4
	double value; //4
};

double lenth(int x1, int y1, int x2,  int y2)
{
	return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)); 
}

struct player
{	
	int x;
	int y;
};

struct monster {
	int x;
	int y;
};

//자기 참조 구조체;

struct bus {
	
	char array[10];
	int value;
	struct bus *next; //자기 자신을 가리키는 구조체
};

int main()
{
	//구조체 
	//구조체는 선언했을떄 메모리 공간을 가지게됩니다.
	{
		struct data a = { 'D',30,'a' };

		//멤버 연산자 (.)를 통해서 구조체 멤버에 있는 데이터에 접근해서 값을 초기화 할 수 있습니다.

		//a.character = 'A';
		//a.interger = 10;
		//a.value = 56.2;

		printf("%c\n", a.character);
		printf("%d\n", a.interger);
		printf("%.2f\n", a.value);

		//pow는 n에 m승의 결과를 출력하는 함수.

		int result = pow(4, 2);

		printf("%d\n", result);

		int value = sqrt(100);

		printf("%d\n", value);
	}

	// 두 점 사이의 거리

	//문제 
	//캐릭터와 몬스터 구조체를 만든 다음 좌표를 생성합니다.
	//캐릭터와 몬스터 사이의 거리를 구하기

	//플레이어 0.0
	//몬스터 -2,2 ,3.2
	
	

	{
	struct player p1;
	struct player monster1;

	printf("플레이어의 x,y좌표 값을 입력해주세요.(x,y) : ");
	scanf_s("%d,%d", &p1.x, &p1.y);
	printf("플레이어의 좌표(%d,%d)\n", p1.x, p1.y);


	printf("몬스터의 x,y좌표 값을 입력해주세요.(x,y) : ");
	scanf_s("%d,%d", &monster1.x, &monster1.y);
	printf("몬스터의 좌표(%d,%d)\n", monster1.x, monster1.y);

	double len = lenth(p1.x, p1.y, monster1.x, monster1.y);

	printf("두 오브젝트의 거리 %f\n", len);

	int y1 = 1;

	printf("%d\n", y1);

	}

	// 자기 참조 구조체
	{
	struct bus a = { "A정거장",10,NULL};
	struct bus b = { "B정거장",5,NULL };
	struct bus c = { "C정거장",7,NULL };

	a.next = &b;

	b.next = &c;

	c.next = NULL;

	printf("%d\n", a.value);
	printf("%p\n", a.next);
	printf("%p\n", &b);

	printf("%d\n", a.next->value);

	printf("%s\n", a.next->array);

	printf("%d\n", b.next->value=9999);
	}


	return 0;
}