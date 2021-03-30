#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// Up & Down Project, 응용 예제
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1부터 100까지의 수를 범위로 정해서 해보려합니다, 만약 1을 플러스하지 않으면 0부터 99까지가 범위가 되겠죠?
	printf("숫자 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (1) // 1: 참, 0: 거짓, 따라서, 참에 속하여 작업이 이루어지는 한 while문에 해당하는 명령은 수행하게 되고 0이될 시 실행을 하지 않게 되겠지요?
	{
		printf("남은 기회 %d 번\n", chance--); // 기회가 틀린만큼 차감되어야 하니까, chance뒤에 '--'를 붙여주었습니다.
		printf("숫자를 맞추어 보세요 (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("Down ▼\n\n");
		}
		else if (answer < num)
		{
			printf("Up ▲\n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다, 고생하셨습니다! \n\n");
			break;
		}
		else
			printf("알 수 없는 오류가 발생하였습니다.\n\n"); // 사실 이 부분은 올 수가 없습니다, 하지만 임의로 지정해둔 것이에요!
															 // 하지만 혹시 모를 예제에 대한 문제를 발견하기 위해 집어넣었습니다.
		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨습니다, 아쉽게도 실패하셨네요 ㅠㅠ \n\n"); // 사실 위의 조건식을 보시면, 이 부분은 필요가 없는데
																					  // 그럼에도, 알려주기 위하여 집어넣어 보았습니다.
			break;
		}
	}
	return 0;
}