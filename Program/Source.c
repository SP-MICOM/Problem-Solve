#include <stdio.h>

void main()
{
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을
	// 수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
	// 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는
	// 1이라는 값으로 나타내는 연산자입니다.

	//printf("10 < 20 : %d\n", 10 < 20);
	//
	//printf("10 > 20 : %d\n", 10 > 20);
	//
	//printf("15 <= 30 : %d\n", 15 <= 30);
	//
	//printf("25 >= 30 : %d\n", 25 >= 30);
	//
	//printf("10 != 10 : %d\n", 10 != 10);
	//
	//printf("10 == 10 : %d\n", 10 == 10);

#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는
	// 명령문입니다.

	//int health = 0;
	//
	//if (health <= 0)
	//{
	//	printf("Destroy");
	//}

	// if문은 조건이 1일 때 실행되며, 0일 때 실행되지 않습니다.

#pragma endregion

#pragma region else if문
	// if문의 조건이 틀릴 때 else if문의 조건이
	// 맞다면 실행되는 명령문입니다.

	//int level = 99;
	//
	//if (level < 11)
	//{
	//	printf("1 Circles");
	//}
	//else if (level >= 99)
	//{
	//	printf("5 Circles");
	//}

	// else if문은 여러번 정의할 수 있으며, if문이
	// 존재할 때 사용할 수 있습니다.
#pragma endregion

#pragma region else문
	// if문과 else if문의 조건이 다 틀리면
	// 실행되는 명령문입니다.

	//int integer = 0;
	//
	//if (integer > 0)
	//{
	//	printf("amnioctic fluid");
	//}
	//else if (integer < 0)
	//{
	//	printf("negative");
	//}
	//else
	//{
	//	printf("integer");
	//}

	// if문에 연결된 모든 조건문의 조건이 맞을 때
	// 가장 위에 있는 조건문만 실행됩니다.
#pragma endregion

#pragma region switch문
	// 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.

	char grade = 'A';

	switch (grade)
	{
	case 'A': printf("100 ~ 90점입니다.");
	case 'B': printf("89 ~ 80점입니다.");
	case 'C': printf("79 ~ 70점입니다.");
	case 'D': printf("69 ~ 60점입니다.");
	case 'F': printf("60점 미만 점수입니다.");
	}

#pragma endregion


#pragma endregion

}