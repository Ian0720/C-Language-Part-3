#include <time.h>
#include <stdlib.h> // ����� �ռ� ���Ϻ��� ��¦ �ٸ�����, �ٷ� random�� �ٷ�� �����ε� ���� ����ϴ� �Լ��̴� ������ֽø� �����ϴ�.
#include <stdio.h>

int random(void)
{
	// int num = rand() % � ��; // �̰� �ٷ� ���� �Լ��ε�, �̷����ϸ� �����ϰ� �ٷ� �ϳ� ���� �� �ְ� �˴ϴ�.
	// ���⼭ '� ��'�� ��Ȱ�� ���� �̰����� ���� ������ �������ִ� ���Դϴ�.
	// ������� '����,����,��'��� ������ �ϰ� ������ �̶� �߻��Ǵ� ����Ǽ��� 3������ �����ϱ�
	// �� '� ��' �κп� 3�� �������ָ� �ǰ�����?
	// ���⼭, �����Ͻô� �κ��� �׻� ����ϼž� �մϴ�, 0���� �����Ѵٴ� ������.
	// ����, 0 ~ 2 ������ �����̱� ������ 0,1,2 �� ���� �ϳ��� ����ϰ� �ǰ�����?
	// ���࿡ 1���� 3������ �̰��ʹٸ� �Ʒ��� �ڵ忡�� 3 ���� ' + 1 '�� ���ָ� �ǰ���?

	// srand(time(NULL)); // ������ �̱� ������ ���� �ʱ�ȭ���־�� �մϴ�, ���� �� �ڵ带 �� �ۼ����ּž��ؿ�
					   // �ƴϸ� ��µ��� �����̴ϴ�. (���� �ʱ�ȭ)
	// int num = rand() % 3;

	printf("���� �ʱ�ȭ ����\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", rand() % 10); // �̷��� �ۼ��ϰԵǸ� 10����, �� 0 ~ 9�����ؼ� �������� ���ڸ� �������� �̰� �ǰ���?
								     // �׷��� �Ƹ� ������ ���ڰ� ��µɰſ���, �ֳĸ� �츮�� ���� �ʱ�ȭ�� ���� �ʾҽ��ϴ�!
	}

	// �׷��� ���� �ʱ�ȭ ���ĸ� �����ؼ� Ÿ�����غ��ڽ��ϴ�.
	srand(time(NULL));
	printf("\n\n���� �ʱ�ȭ ����\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d", rand() % 10); // ���� ���⼭ �Ƹ� ���ڰ� �ٸ��� ����� �ɰ̴ϴ�, ����� �õ��ص� �ٸ����� ���ðſ���!
	}
	return 0;
}