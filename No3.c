#include <stdio.h>

int no3(void) {
	// 예를 들어, 버스를 탄다고 가정해봅시다.
	// 이때, 여러분은 학생일수도 일반 성인일 수도 있습니다, 그럴때 아래와 같이 코딩해주면 됩니다.
	/* int age = 19;
	if (age >= 20) // 선언한 변수에 대한 조건에 해당인 부분입니다, 여기서 우리는 나이를 19로 지정했기에 "학생 입니다.' 라고 출력이 될 것입니다.
		printf("일반인 입니다.\n");
	else
		printf("학생 입니다.\n"); */


	// 만약 단편적인게 아닌, 연령대를 초등학생(8~13) / 중학생(14~16) / 고등학생(17~19)으로 나눈다면?
	// 대개, 문법은 if / else if / else 순서로 쓰입니다, 이럴경우 아래와 같이 코딩하시면 됩니다.
	/* int age = 8;
	if (age >= 8 && age <= 13) {
		printf("초등학생 입니다.");
	}
	else if (age >= 14 && age <= 16) {
		printf("중학생 입니다.");
	}
	else if (age >= 17 && age <= 19) {
		printf("고등학생 입니다.");
	}
	else
		printf("외계인 입니다."); */


	// break & continue 
	// 
	// 예시를 가정해볼게요, 만약에 1번부터 30번까지 있는 반에서
	// 1번부터 5번까지 조별 발표를 합니다
	/* for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 발표 대상이 아닙니다.\n");
			break; // for문의 조건 탈출을 위한 문법이라 보시면 됩니다, 우리는 5번까지 발표의 대상으로 예정했기 때문입니다.
		}
		printf("%d 번 학생은 조별 발표 준비를 해주세요.\n", i);
	} */


	// 조금 예시를 바꾸어서, 7번 학생은 오늘 아파서 결석하였고
	// 7번 학생을 제외하고, 6번부터 10번까지는 조별 발표를 하기로 정해봅시다.
	/* for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다.\n", i);
				continue; // 해당 문구에 적혀진 조건에 대하여 명령을 적용하지 않고, 바로 다음차례로 넘어가게 됩니다.
						  // 만약 break를 썼다면, 7번에서 뚝 하고 그냥 끊겨버리게 되겠죠?
			}
			printf("%d 번 학생은 조별 발표 준비를 해주세요.\n", i);
		}
	} */


	// %%(and) ||(or) 
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;
	if (a == b, c == d)
	{
		printf("a와 b는 같고, c와 d도 같습니다.\n"); // 만약 조건이 부합하다면, 이 부분이 출력이 될 것이고
	}
	else
		printf("값이 서로 다르네요.\n"); // 조건이 부합하지 않다면, 이 문구가 출력이 되겠죠?
										 // 하지만, a와 b의 값이 같고, c와 d의 값이 다르다면 이때 ||를 써주어야 합니다.
										 // 그리고 알아보기 쉽도록, 출력 문구도 살포시 바꾸어주면 더 좋겠죠?
	return 0;
}