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

	// char grade = 'K';

	// switch문은 해당 조건이 완료되었을 때, break문이 없으면
	// 나머지 밑에 있는 case 문까지 계속 실행시키다가 종료합니다.

	// switch (grade)
	// {
	// case 'A': printf("100 ~ 90점\n");
	// 	break;
	// case 'B': printf("89 ~ 80점\n");
	// 	break;
	// case 'C': printf("79 ~ 70점\n");
	// 	break;
	// case 'D': printf("69 ~ 60점\n");
	// 	break;
	// case 'F': printf("60점 미만\n");
	// 	break;
	// default: printf("예외\n");
	// 	break;
	// }

	// switch문의 경우 조건에 해당하는 값에 따라 조건의
	// 위치로 이동합니다.

#pragma endregion

#pragma region 논리 연산자

#pragma region AND 연산자
// 두 개의 조건이 다 성립될 때 실행되는 연산자입니다.

// int score = 75;
// int attendacne = 80;
// 	
// if (score >= 60 && attendacne >= 80)
// {
// 	printf("Gradurate");
// }

// 조건문에서 하나 이상의 조건이 있다면 왼쪽부터 조건을 검사합니다.
#pragma endregion

#pragma region OR 연산자
// 두 개의 조건 중에서 하나라도 조건이 성립될 때 실행되는 연산자입니다.

// int weight = 70;
// int bodyfat = 30;
// 
// if (weight >= 85 || bodyfat > 20)
// {
// 	printf("비만");
// }

// 조건문에 논리 표현식을 평가하는 도중에 결과가 이미 확정이 났다면, 그 이후의 평가는 생략합니다.
#pragma endregion

#pragma region NOT 연산자
// 하나의 조건을 반전시키는 연산자입니다.

// int power = 0;
// 
// if (!power)
// {
// 	printf("the power is ON");
// }
// else
// {
// 	printf("the power is OFF");
// }

#pragma endregion

#pragma endregion

#pragma region 사분면

int x = 23;
int y = 2;

if (x >= 1 && y >= 1) // 1 사분면
{
	printf("제 1 사분면");
}
else if (x <= -1 && y >= 1) // 2 사분면
{
	printf("제 2 사분면");
}
else if (x <= -1 && y <= -1) // 3 사분면
{
	printf("제 3 사분면");
}
else if (x >= 1 && y <= -1) // 4 사분면
{
	printf("제 4 사분면");
}
else
{
	if (x == 0 && y != 0) // y 절편
	{
		printf("y 절편");
	}
	if (x != 0 && y == 0) // x 절편
	{
		printf("x 절편");
	}
	if (x == 0 && y == 0) // 0,0 원점
	{
		printf("원점");
	}
}


#pragma endregion


#pragma endregion

}