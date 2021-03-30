#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int switchcase(void)
{
	// 응용 예제(프로젝트) : 가위(0), 바위(1), 보(2)
	/* srand(time(NULL));
	int i = rand() % 3; // 0 ~ 2 중 임의로 하나 찍어버리기!
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
		printf("몰라요.\n"); */


	// 다른 방법, switch & case 응용
	srand(time(NULL));
	int i = rand() % 3;
	switch (i) // 값에 해당하는 부분
	{
	case 0:printf("가위\n"); break; // 0이면 가위 출력
	case 1:printf("바위\n"); break; // 1이면 바위 출력
	case 2:printf("보\n");   break; // 2이면 보 출력
	default:printf("몰라요.\n"); break; // 이외의 다른수면, 몰라요 표시!
										// 그런데 만약 break로 끊어주지 않으면 모든 케이스에 대해 출력이 이루어지므로, 반드시 switch 케이스에서는
										// break를 걸어주어야 합니다.
										// 예를들어 rand에서 0을 찍었을때 가위가 설정되도록 했습니다, 여기서 브레이크를 걸어주지 않으면
										// 탈출이 이루어지지 않아서, 다음 랜덤 숫자를 불러오고 그다음 해당하는 프린트문을 출력하게 됩니다.
										// 바로, default가 걸릴때까지요! 
	}
	return 0;
}