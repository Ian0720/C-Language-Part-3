#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int switchcase(void)
{
	// ���� ����(������Ʈ) : ����(0), ����(1), ��(2)
	/* srand(time(NULL));
	int i = rand() % 3; // 0 ~ 2 �� ���Ƿ� �ϳ� ��������!
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
		printf("�����.\n"); */


	// �ٸ� ���, switch & case ����
	srand(time(NULL));
	int i = rand() % 3;
	switch (i) // ���� �ش��ϴ� �κ�
	{
	case 0:printf("����\n"); break; // 0�̸� ���� ���
	case 1:printf("����\n"); break; // 1�̸� ���� ���
	case 2:printf("��\n");   break; // 2�̸� �� ���
	default:printf("�����.\n"); break; // �̿��� �ٸ�����, ����� ǥ��!
										// �׷��� ���� break�� �������� ������ ��� ���̽��� ���� ����� �̷�����Ƿ�, �ݵ�� switch ���̽�������
										// break�� �ɾ��־�� �մϴ�.
										// ������� rand���� 0�� ������� ������ �����ǵ��� �߽��ϴ�, ���⼭ �극��ũ�� �ɾ����� ������
										// Ż���� �̷������ �ʾƼ�, ���� ���� ���ڸ� �ҷ����� �״��� �ش��ϴ� ����Ʈ���� ����ϰ� �˴ϴ�.
										// �ٷ�, default�� �ɸ���������! 
	}
	return 0;
}