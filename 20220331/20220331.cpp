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

//�ڱ� ���� ����ü;

struct bus {
	
	char array[10];
	int value;
	struct bus *next; //�ڱ� �ڽ��� ����Ű�� ����ü
};

int main()
{
	//����ü 
	//����ü�� ���������� �޸� ������ �����Ե˴ϴ�.
	{
		struct data a = { 'D',30,'a' };

		//��� ������ (.)�� ���ؼ� ����ü ����� �ִ� �����Ϳ� �����ؼ� ���� �ʱ�ȭ �� �� �ֽ��ϴ�.

		//a.character = 'A';
		//a.interger = 10;
		//a.value = 56.2;

		printf("%c\n", a.character);
		printf("%d\n", a.interger);
		printf("%.2f\n", a.value);

		//pow�� n�� m���� ����� ����ϴ� �Լ�.

		int result = pow(4, 2);

		printf("%d\n", result);

		int value = sqrt(100);

		printf("%d\n", value);
	}

	// �� �� ������ �Ÿ�

	//���� 
	//ĳ���Ϳ� ���� ����ü�� ���� ���� ��ǥ�� �����մϴ�.
	//ĳ���Ϳ� ���� ������ �Ÿ��� ���ϱ�

	//�÷��̾� 0.0
	//���� -2,2 ,3.2
	
	

	{
	struct player p1;
	struct player monster1;

	printf("�÷��̾��� x,y��ǥ ���� �Է����ּ���.(x,y) : ");
	scanf_s("%d,%d", &p1.x, &p1.y);
	printf("�÷��̾��� ��ǥ(%d,%d)\n", p1.x, p1.y);


	printf("������ x,y��ǥ ���� �Է����ּ���.(x,y) : ");
	scanf_s("%d,%d", &monster1.x, &monster1.y);
	printf("������ ��ǥ(%d,%d)\n", monster1.x, monster1.y);

	double len = lenth(p1.x, p1.y, monster1.x, monster1.y);

	printf("�� ������Ʈ�� �Ÿ� %f\n", len);

	int y1 = 1;

	printf("%d\n", y1);

	}

	// �ڱ� ���� ����ü
	{
	struct bus a = { "A������",10,NULL};
	struct bus b = { "B������",5,NULL };
	struct bus c = { "C������",7,NULL };

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