#include <stdio.h>
#include <math.h>

struct Unit
{
	char grade;
	int health;
	double experimence;
};

struct Point2D
{
	int characterX;
	int characterY;
	int slimeX;
	int slimeY;
};

struct Ability
{
	short strentgh;
	double dexterity;
	int wisdom;
};

int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	// struct Unit unit = { 'B', 50, 75.625 };
	// 
	// printf("unit의 grade : %c\n", unit.grade);
	// printf("unit의 health : %d\n", unit.health);
	// printf("unit의 experimence : %lf\n\n", unit.experimence);
	// 
	// // 구조체의 각 멤버는 구조체 선언에서 나타나는 순서대로 초기화 되며
	// // 이 순서는 초기화 목록의 값들이 왼쪽에서부터 오른쪽으로 시작됩니다.
	// 
	// unit.grade = 'A';
	// unit.health = 100;
	// unit.experimence = 135.75;
	// 
	// printf("unit의 grade : %c\n", unit.grade);
	// printf("unit의 health : %d\n", unit.health);
	// printf("unit의 experimence : %lf\n", unit.experimence);

	// 구조체를 선언하기 전에 구조체는 메모리 공간이 생성되지 않으므로,
	// 구조체 내부에 있는 데이터를 초기화할 수 있습니다.

#pragma endregion

#pragma region 두 점 사이의 거리

	// struct Point2D rogue = { -2, -3 };
	// struct Point2D slime = { 4, 6 };
	// 
	// double distance = sqrt(pow(slime.slimeX - rogue.characterX, 2) + pow(slime.slimeY - rogue.characterY, 2));
	// 
	// if (distance >= 5.0) printf("It is Safe\n");
	// else printf("target is in attack range\n");

#pragma endregion

#pragma region 바이트 패딩

	// 멤버 변수를 메모리에서 CPU로 읽을 떄 한 번에
	// 읽을 수 있도록, 컴파일러가 레지스터의 블록에
	// 맞추어 바이트를 패딩해주는 최적화 작업입니다.

	// struct Unit object = { 'C', 10, 12.5 };
	// 
	// printf("object의 크기 : %u\n", sizeof(object));
	// 
	// 
	// // 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가
	// // 가장 큰 자료형의 배수가 되도록 설정합니다.
	// 
	// struct Ability ability = { 3, 3, 3 };
	// 
	// printf("Ability의 구조체의 크기 : %u\n", sizeof(ability));

	// 구조체의 크기의 경우 멤버 변수의 순서에 따라 메모리의 크기가
	// 다르게 설정될 수 있습니다.

#pragma endregion

	return 0;
}