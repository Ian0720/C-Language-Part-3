#include <time.h>
#include <stdlib.h> // 여기는 앞선 파일보다 살짝 다르지요, 바로 random을 다루기 위함인데 자주 사용하는 함수이니 기억해주시면 좋습니다.
#include <stdio.h>

int random(void)
{
	// int num = rand() % 어떤 수; // 이게 바로 랜덤 함수인데, 이렇게하면 랜덤하게 바로 하나 뽑을 수 있게 됩니다.
	// 여기서 '어떤 수'의 역활은 내가 뽑고싶은 수의 범위를 지정해주는 것입니다.
	// 예를들어 '가위,바위,보'라는 게임을 하고 싶은데 이때 발생되는 경우의수는 3가지가 있으니까
	// 저 '어떤 수' 부분에 3을 지정해주면 되겠지요?
	// 여기서, 간과하시는 부분이 항상 기억하셔야 합니다, 0부터 시작한다는 것을요.
	// 따라서, 0 ~ 2 까지의 범위이기 때문에 0,1,2 이 셋중 하나를 출력하게 되겠지요?
	// 만약에 1부터 3까지를 뽑고싶다면 아래의 코드에서 3 옆에 ' + 1 '을 해주면 되겠죠?

	// srand(time(NULL)); // 랜덤을 뽑기 이전에 수를 초기화해주어야 합니다, 따라서 이 코드를 꼭 작성해주셔야해요
					   // 아니면 출력되지 않을겁니다. (난수 초기화)
	// int num = rand() % 3;

	printf("난수 초기화 이전\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", rand() % 10); // 이렇게 작성하게되면 10이전, 즉 0 ~ 9까지해서 랜덤으로 숫자를 무작위로 뽑게 되겠죠?
								     // 그런데 아마 동일한 숫자가 출력될거에요, 왜냐면 우리는 난수 초기화를 하지 않았습니다!
	}

	// 그러면 난수 초기화 이후를 구분해서 타이핑해보겠습니다.
	srand(time(NULL));
	printf("\n\n난수 초기화 이후\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", rand() % 10); // 이젠 여기서 아마 숫자가 다르게 출력이 될겁니다, 몇번을 시도해도 다른수가 나올거에요!
	}
	return 0;
}