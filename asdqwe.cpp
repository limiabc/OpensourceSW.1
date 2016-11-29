
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50; // �ִ� �� �̸� ����

// << �� ���� �Է� ���� >> (��� ����ȭ �� ����)
typedef struct station;
typedef struct train;
typedef struct bus;

typedef struct station { // ����ö �� ����
	char name[50];
	int time[2];

	struct station *w; // ����ö ȯ�� 1
	struct station *a; // ����ö ȯ�� 2
	struct station *s; // ����ö ȯ�� 3
	struct station *d; // ����ö ȯ�� 4
	struct train *tr; // ������ ȯ��
	struct bus *bu; // ������ ȯ��
}station;

typedef struct train { // ���� �� ����
	char name[50];
	int time[2][24];

	struct station *st; // ����ö�� ȯ��
	struct bus *bu; // ������ ȯ��
}train;

typedef struct bus { // ���� �� ����
	char name[50];
	int time[2][24];

	struct station *st; // ����ö�� ȯ��
	struct train *tr; // ������ ȯ��
}bus;

station a[6][25][80] = 
{
	{ // ����
		{ // 1ȣ�� (��õ ~ �ҿ��)
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ȭ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�־�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ΰ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�۳�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ߵ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�һ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�¼�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ŵ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ű�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�뷮��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���￪", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����3��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����5��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���빮", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ż���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���⵿", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "û����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȸ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ܴ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���̹�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "â��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȸ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����õ�߾�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ҿ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 1ȣ�� (���� ~ ��â)
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��������д���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ��û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ⱦ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ǿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���հ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȭ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ź", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ȯ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "õ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ֿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ƻ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�¾��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��â", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����ź", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 2ȣ��
			{ "�ŵ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��������û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȫ���Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�̴�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�������Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������3��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������4��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���빮���繮ȭ����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ŵ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��սʸ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�սʸ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ѿ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ҽ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ǵ��Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ǳ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���տ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ｚ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ÿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ŵ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ε����д���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�븲", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ŵ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 2ȣ�� (��ġ�� ~ �ŵ���)
			{ "��ġ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����װŸ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ��û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ŵ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
                },
		{ // 2ȣ�� (�ŵ��� ~ ����)
			{ "�ż���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ŵ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 3ȣ��
			{ "��ȭ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ֿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���߻�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�鼮", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȭ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���Ĺ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ų�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ұ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȫ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�溹��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ȱ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����3��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������3��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�湫��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ȣ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�б���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ż�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����͹̳�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����͹̳�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ź�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ġ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�п���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ͽ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 4ȣ��
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "â��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ֹ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����(���ϱ�û)", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�̾�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�̾ƻ�Ÿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ſ����Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ѽ����Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ȭ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���빮", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���빮���繮ȭ����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�湫��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȸ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���￪", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ﰢ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ſ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ѽŴ��Ա�(�̼�)", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���·�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�渶����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ΰ�õû��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�δ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�꺻", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��߹�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ݿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ϼ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ѵ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�߾�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ȼ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ű��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���̵�", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 5ȣ��
			{ "��ȭ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ȭ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�߻�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȭ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ġ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��������û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ű�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ǵ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ǳ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ֿ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���빮", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ȭ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����3��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������4��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���빮���繮ȭ����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "û��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ű�ȣ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�սʸ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ʸ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "õȣ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�浿", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����ٸ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ϵ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 6ȣ��
			{ "��ȭ��(�����Ƿ��)", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȭ����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�¸��Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ⱦ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "â��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ŵ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "û��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��Ƽ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ѱ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���¿�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����(��걸û)", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ﰢ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȿâ������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����â", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����Ű����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����й̵���Ƽ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ұ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ų�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 7ȣ��
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�߰�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ϰ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�¸��Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�԰�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ȭ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�簡��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�븶��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�߰�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��̴����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ǵ��Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ҽ�������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "û��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�е�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����͹̳�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ѽŴ��Ա�(�̼�)", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���Ǵ��Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��¹��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ŵ���Ÿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ǳ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�븲", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��������д���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ö��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����Ÿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "õ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�¼�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ġ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ���տ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ߵ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ��û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ü����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����û", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 8ȣ�� (�ϻ�~���
			{ "�ϻ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "õȣ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����伺", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�꼺", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ѻ꼺�Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ܴ���Ÿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 9ȣ�� (��ȭ~���տ��)
			{ "��ȭ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���׽���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ź�ȭ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ�ⱳ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��â", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ÿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ȸ�ǻ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ǵ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�뷮��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�漮", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ź���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����͹̳�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ų���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ｚ�߾�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���տ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // ��õ1 (���~������������)
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���α����Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����Ÿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�������Ÿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ��û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����ȸ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ�͹̳�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���а����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ſ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ķ�۽�Ÿ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ũ����ũ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ���Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��Ʈ����ũ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // ��õ2 (�˴ܿ���~�)
			{ "�˴ܿ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ձ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�˴ܻ�Ÿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�˾�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�˹���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ƽþƵ�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����߾ӽ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ο���ȸ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�־ȱ������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ָ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ùΰ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ��â", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ��Ÿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�𷡳�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // �д� (�սʸ�~����)
			{ "�սʸ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���｣", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�б����ε���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��Ƽ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ž", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�̸�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�̱�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ű�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "û��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ź�Ǽ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ű�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // �źд� (����~����)
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����ù��ǽ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "û����Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ǳ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����߾�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // �����߾� (����~���￪)
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ݸ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ߴ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ź��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ϻ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ǳ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�鸶", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�뱹", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ɰ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȭ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����й̵���Ƽ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���￪", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // �����߾� (����~�빮)
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ݸ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ߴ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ź��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ϻ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ǳ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�鸶", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�뱹", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ɰ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȭ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����й̵���Ƽ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȫ���Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȿâ������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ѳ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�սʸ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "û����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȸ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�߶�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ȴ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ſ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ƽ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�빮", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // ����
			{ "û����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȸ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�߶�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ų�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�縪", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ȣ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "õ����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�뼺��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "÷��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��縮", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // ����
			{ "���￪", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȫ���Ա�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����й̵���Ƽ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�˾�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "û��������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����ȭ��û��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ��������", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // ������
			{ "ž��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ۻ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȿ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��⵵û�Ϻ�÷��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�������߾�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ｑ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����ν�û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����ö������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȸ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�߰�", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // ����
			{ "���̵�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�޿�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ҷ�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȣ����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����δ�����ũ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�۵�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ϴ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // ��������
			{ "���뿡������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���۴��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�跮��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��û���δ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ﰡ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ʴ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // �ڱ�λ�
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������ũ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�յ�û��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ��������", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // �氭
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������ո�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ι�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ŵе�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ʿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��Ɽ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ﵿ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�̸�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ǳ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		}
	},
	{ // �λ�
		{ // 1ȣ��
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ν�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�λ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�λ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ʷ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�λ꿪", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�߾�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ڰ�ġ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�伺", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��Ƽ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�㸮", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ϴ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 2ȣ��
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�λ����ķ�۽�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȣ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ݰ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȭ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ַ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���Ǵ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ξ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�λ�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���԰�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�뿬", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�漺��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ݷû�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ζ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ҽ�Ƽ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ø��̼���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ؿ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ߵ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 3ȣ��
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ü������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�̳�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���տ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 4ȣ��
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���λ����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ݿ���깰����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ݻ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��Ļ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�̳�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // �λ� - ���ذ�
			{ "���ߴ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��Ŵ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ڹ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���οո�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��Ȳ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ο�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ؽ�û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ش���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ҿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���λ���������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�������׽ö�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		}
	},
	{ // �뱸
		{ // 1ȣ��
			{ "��ȭ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȭ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���뺴��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ݿ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�߾ӷ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�뱸��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ĥ������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���뱸��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ū��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ƾ米", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ؾ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ű�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ݾ߿�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ƚ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 2ȣ��
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ٻ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��â", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�̰�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�η�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ݰ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ų�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ݿ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��뺴��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�뱸����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��Ƽ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ȣ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ÿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ӵ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		},
		{ // 3ȣ��
			{ "ĥ���뺴��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ȱ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ĥ����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ȴ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ȴ޽���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ϱ�û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�޼�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ų�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ǵ����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�������ο��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ȸ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "Ȳ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		}
	},
	{ // ����
		{ // 1ȣ��
			{ "��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���ּ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����������Ǽ���", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ȭ��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�絿����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ݳ���5��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�ݳ���4��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��ȭ����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�е�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�쵿", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		}
	},
	{ // ����
		{ // 1ȣ��
			{ "�ݼ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����Ű����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��õ", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����û��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "��û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "ź��", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�빮", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�������װŸ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�߱�û", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�߾ӷ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "������", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�뵿", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "����", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "�Ǿ�", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "", NULL, NULL, NULL, NULL, NULL, NULL, NULL }
		}
	}
};
		// a[����(0 = ����, 1 = �λ�, 2 = �뱸, 3 = ����, 4 = ����, 5 = �ش� ����)][ȣ��][��]
struct train b[6][10][20] =
{
	{
		{
			{ "���Ͽ�", { NULL }, NULL, NULL }
		}
	},
	{
		{
			{ "����Ͽ�", { NULL }, NULL, NULL }
		}
	}
};

// b[����(0 = ����, 1 = �λ�, 2 = �뱸, 3 = ����, 4 = ����, 5 = �ش� ����)][ö��(��μ�, ��ΰ�Ӽ�, ���ּ� ��)][��]
struct bus c[6][200][50] =
{
	{
		{
			{ "���Ͽ�", NULL, NULL, NULL },
			{ "���̿�", NULL, NULL, NULL }
		}	
	}
}; // c[����(0 = ����, 1 = �λ�, 2 = �뱸, 3 = ����, 4 = ����, 5 = �ش� ����)][������ȣ][��]

char s_via[50][50]; // ����ö ������[
char t_via[50][50];
char b_via[50][50];

int secondDecomposerStation(char a[50], char b[50]);
int secondDecomposerTrain(char a[50], char b[50]);
int secondDecomposerBus(char a[50], char b[50]);
void findSameCityTransferStation(int e_i, int e_i2, int e_i3, int s_check, int e_check);

char FIRSTDECOMPOSER_TRANSFER_START[50];
char FIRSTDECOMPOSER_TRANSFER_END[50];



// << 1�� ������ �Է±��� >>

// ��߿��� �������� �Է��ϸ� ȯ�� �������� ������, �� �� �ɸ��� �ҿ�ð��� ��ȯ �� ��.

int firstDecomposer(char start[50], char end[50]) { // ���� ������ (�����(a) �� ������(b) �� �Է¹޾Ƽ� ������� ���� ���� �� �ҿ�ð� ��ȯ)
	int s_check; // �����
	char s_string[25];
	int s_i;
	int s_i2;
	int s_i3;

	int e_check; // ������
	char e_string[25];
	int e_i;
	int e_i2;
	int e_i3;

	printf("First Decomposer �۵��� �����մϴ�. \n");

	printf("�� ������ �о���� �ֽ��ϴ�. \n");

	for (int i = 0; i < 6; i++) { // ����ö
		for (int i2 = 0; i2 < 25; i2++) {
			for (int i3 = 0; i3 < 80; i3++) {
				if (strcmp(start, a[i][i2][i3].name) == 0) {
					s_i = i;
					s_i2 = i2;
					s_i3 = i3;
					s_check = 1;
				}

				else if (strcmp(end, a[i][i2][i3].name) == 0) {
					e_i = i;
					e_i2 = i2;
					e_i3 = i3;
					e_check = 1;
				}
			}
		}
	}

	for (int i = 0; i < 6; i++) { // ö��
		for (int i2 = 0; i2 < 10; i2++) {
			for (int i3 = 0; i3 < 20; i3++) {
				if (strcmp(start, b[i][i2][i3].name) == 0) {
					s_i = i;
					s_i2 = i2;
					s_i3 = i3;
					s_check = 2;
				}

				else if (strcmp(end, b[i][i2][i3].name) == 0) {
					e_i = i;
					e_i2 = i2;
					e_i3 = i3;
					e_check = 2;
				}
			}
		}
	}

	for (int i = 0; i < 4; i++) { // ����
		for (int i2 = 0; i2 < 200; i2++) {
			for (int i3 = 0; i3 < 50; i3++) {
				if (strcmp(start, c[i][i2][i3].name)) {
					s_i = i;
					s_i2 = i2;
					s_i3 = i3;
					s_check = 3;
				}

				else if (strcmp(end, c[i][i2][i3].name)) {
					e_i = i;
					e_i2 = i2;
					e_i3 = i3;
					e_check = 3;
				}
			}
		}
	} // ��� ���� �̸��� ���� �� ��, �̸��� ���� ���� �迭 ��ȣ�� ��������� ����. (1 = ����ö, 2 = ö��, 3 = ����)

	printf("�� ���� �о���� �Ϸ�.\n\n");
	printf("����� : %s\n", start);
	printf("s_i = %d\n", s_i);
	printf("s_i2 = %d\n", s_i2);
	printf("s_i3 = %d\n", s_i3);
	printf("s_check = %d\n\n", s_check);

	printf("������ : %s\n", end);
	printf("e_i = %d\n", e_i);
	printf("e_i2 = %d\n", e_i2);
	printf("e_i3 = %d\n", e_i3);
	printf("e_check = %d\n", e_check);

	switch (s_i) {
	case 0: strcpy(s_string, "���￪"); break;
	case 1: strcpy(s_string, "�λ꿪"); break;
	case 2: strcpy(s_string, "�뱸��"); break;
	case 3: strcpy(s_string, "���ֿ�"); break;
	case 4: strcpy(s_string, "������"); break;
	}

	switch (e_i) {
	case 0: strcpy(e_string, "���￪"); break;
	case 1: strcpy(e_string, "�λ꿪"); break;
	case 2: strcpy(e_string, "�뱸��"); break;
	case 3: strcpy(e_string, "���ֿ�"); break;
	case 4: strcpy(e_string, "������"); break;
	}

	printf("1�� ���ظ� �����մϴ�.\n");

	if (s_check == e_check) { // ��쿡 ���� ������ (���� ������ ���� ���)

		printf("s_check == e_check\n");

		switch (s_check) {
		case 1: if (s_i != e_i) {
			switch (s_i) {
			case 0: 
				switch (e_i) {
				case 0: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 1-0-D �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 1: 
				switch (e_i) {
				case 1: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 1-1-D �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 2: 
				switch (e_i) {
				case 2: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 1-2-D �۾��� Ȯ�εǾ����ϴ�.\n");
					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 3: 
				switch (e_i) {
				case 3: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 1-3-D �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 4: 
				switch (e_i) {
				case 4: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 1-4-D �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			}
		}
				else {
					printf("case : 1-E-: �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerStation(start, end);

					printf("1. %s, %s\n", start, end);
				}; break;

		case 2: if (s_i != e_i) {
			switch (s_i) {
			case 0:
				switch (e_i) {
				case 0: printf("Error Number : 0000\n"); break;
				default: printf("case : 2-0-D �۾��� Ȯ�εǾ����ϴ�.\n"); secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			case 1:
				switch (e_i) {
				case 1: printf("Error Number : 0000\n"); break;
				default: printf("case : 2-1-D �۾��� Ȯ�εǾ����ϴ�.\n"); secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			case 2:
				switch (e_i) {
				case 2: printf("Error Number : 0000\n"); break;
				default: printf("case : 2-2-D �۾��� Ȯ�εǾ����ϴ�.\n"); secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			case 3:
				switch (e_i) {
				case 3: printf("Error Number : 0000\n"); break;
				default: printf("case : 2-3-D �۾��� Ȯ�εǾ����ϴ�.\n"); secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			case 4:
				switch (e_i) {
				case 4: printf("Error Number : 0000\n"); break;
				default: printf("case : 2-4-D �۾��� Ȯ�εǾ����ϴ�.\n"); secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			}
		}
				else {
					printf("case : 2-E-: �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerTrain(start, end);

					printf("1. %s, %s\n", start, end);
				}; break;

		case 3: if (s_i != e_i) {
			switch (s_i) {
			case 0:
				switch (e_i) {
				case 0: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 3-0-D �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 1:
				switch (e_i) {
				case 1: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 3-1-D �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 2:
				switch (e_i) {
				case 2: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 3-2-D �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 3:
				switch (e_i) {
				case 3: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 3-3-D �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			case 4:
				switch (e_i) {
				case 4: printf("Error Number : 0000\n"); break;
				default:
					printf("case : 3-4-D �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
					break;
				}; break;
			}
		}
				else {
					printf("case : 3-E-: �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerBus(start, end);

					printf("1. %s, %s\n", start, end);
				}; break;
		}
	}

	else {

		printf("s_check != e_check");

		switch (s_check) {
		case 1:
			switch (e_check) {
			case 1: printf("Error Number : 0001\n"); break;
			case 2: 
				if (s_i != e_i) {
					printf("case : 1-2-I �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, end);
				}
				else {
					printf("case : 1-2-E �۾��� Ȯ�εǾ����ϴ�.\n");

					findSameCityTransferStation(e_i, e_i2, e_i3, s_check, e_check);
					secondDecomposerStation(start, FIRSTDECOMPOSER_TRANSFER_START);

					printf("1. %s, %s\n", start, FIRSTDECOMPOSER_TRANSFER_START);
				};
				break;
			case 3: 
				if (s_i != e_i) {
					printf("case : 1-3-I �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
				}
				else {
					printf("case : 1-3-D �۾��� Ȯ�εǾ����ϴ�.\n");

					findSameCityTransferStation(e_i, e_i2, e_i3, s_check, e_check);
					secondDecomposerStation(start, FIRSTDECOMPOSER_TRANSFER_START);
					secondDecomposerBus(FIRSTDECOMPOSER_TRANSFER_END, end);

					printf("1. %s, %s\n", start, FIRSTDECOMPOSER_TRANSFER_START);
					printf("2. %s, %s\n", FIRSTDECOMPOSER_TRANSFER_END, end);
				};
				break;
			}; break;
		case 2:
			switch (e_check) {
			case 1: 
				if (s_i != e_i) {
					printf("case : 2-1-I �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
				}
				else {
					printf("case : 2-1-E �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerStation(start, end);

					printf("2. %s, %s\n", start, end);
				};
				break;
			case 2: printf("Error Number : 0001\n"); break;
			case 3: 
				if (s_i != e_i) {
					printf("case : 2-3-I �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
				}
				else {
					printf("case : 2-3-E �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerBus(start, end);

					printf("2. %s, %s\n", start, end);
				};
				break;
			}; break;
		case 3:
			switch (e_check) {
			case 1: 
				if (s_i != e_i) {
					printf("case : 3-1-I �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
				}
				else {
					printf("case : 3-1-E �۾��� Ȯ�εǾ����ϴ�.\n");

					findSameCityTransferStation(e_i, e_i2, e_i3, s_check, e_check);
					secondDecomposerBus(start, FIRSTDECOMPOSER_TRANSFER_START);
					secondDecomposerStation(FIRSTDECOMPOSER_TRANSFER_END, end);

					printf("1. %s, %s\n", start, FIRSTDECOMPOSER_TRANSFER_START);
					printf("2. %s, %s\n", FIRSTDECOMPOSER_TRANSFER_END, end);
				};
				break;
			case 2: 
				if (s_i != e_i) {
					printf("case : 3-2-I �۾��� Ȯ�εǾ����ϴ�.\n");

					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
				}
				else {
					printf("case : 3-2-E �۾��� Ȯ�εǾ����ϴ�.\n");

					findSameCityTransferStation(e_i, e_i2, e_i3, s_check, e_check);
					secondDecomposerBus(start, FIRSTDECOMPOSER_TRANSFER_START);
					secondDecomposerTrain(FIRSTDECOMPOSER_TRANSFER_END, end);

					printf("1. %s, %s\n", start, FIRSTDECOMPOSER_TRANSFER_START);
					printf("2. %s, %s\n", FIRSTDECOMPOSER_TRANSFER_END, end);
				}
				break;
			case 3: printf("Error Number : 0001\n"); break;
			}; break;
		}
	}

	printf("1�� ���� ����.\n");
	printf("First Decomposer ����.\n");

	return 0;
}

void findSameCityTransferStation(int e_i, int e_i2, int e_i3, int s_check, int e_check) {
	switch (s_check) {
	case 1: // ����ö
		switch (e_check) {
		case 1: printf("Error Number : 0002\n"); break;
		case 2:
			for (int i2 = e_i2; i2 < 10; i2++) {
				for (int i3 = e_i3; i3 < 20; i3++) {
					if (b[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, b[e_i][i2][i3].st->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
				for (int i3 = e_i3; i3 >= 0; i3--) {
					if (b[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, b[e_i][i2][i3].st->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
			}; break;
		case 3:
			for (int i2 = e_i2; i2 < 200; i2++) {
				for (int i3 = e_i3; i3 < 50; i3++) {
					if (c[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, c[e_i][i2][i3].st->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
				for (int i3 = e_i3; i3 >= 0; i3--) {
					if (c[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, c[e_i][i2][i3].st->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
			}; break;
		}; break;
	case 2: // ö��
		switch (e_check) {
		case 1:
			for (int i2 = e_i2; i2 < 25; i2++) {
				for (int i3 = e_i3; i3 < 80; i3++) {
					if (a[e_i][i2][i3].tr != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, a[e_i][i2][i3].tr->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
				for (int i3 = e_i3; i3 >= 0; i3--) {
					if (a[e_i][i2][i3].tr != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, a[e_i][i2][i3].tr->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
			}; break;
		case 2: printf("Error Number : 0002\n"); break;
		case 3:
			for (int i2 = e_i2; i2 < 200; i2++) {
				for (int i3 = e_i3; i3 < 50; i3++) {
					if (c[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, c[e_i][i2][i3].tr->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
				for (int i3 = e_i3; i3 >= 0; i3--) {
					if (c[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, c[e_i][i2][i3].tr->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
			}; break;
		}; break;
	case 3: // ����
		switch (e_check) {
		case 1:
			for (int i2 = e_i2; i2 < 25; i2++) {
				for (int i3 = e_i3; i3 < 80; i3++) {
					if (a[e_i][i2][i3].tr != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, a[e_i][i2][i3].bu->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
				for (int i3 = e_i3; i3 >= 0; i3--) {
					if (a[e_i][i2][i3].tr != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, a[e_i][i2][i3].bu->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
			}; break;
		case 2:
			for (int i2 = e_i2; i2 < 10; i2++) {
				for (int i3 = e_i3; i3 < 20; i3++) {
					if (b[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, b[e_i][i2][i3].bu->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
				for (int i3 = e_i3; i3 >= 0; i3--) {
					if (b[e_i][i2][i3].st != NULL) {
						strcpy(FIRSTDECOMPOSER_TRANSFER_START, b[e_i][i2][i3].bu->name);
						strcpy(FIRSTDECOMPOSER_TRANSFER_END, b[e_i][i2][i3].name);
					}
					return;
				}
			}; break;
		case 3: printf("Error Number : 0002\n"); break;
		}; break;
	}

}
 


// << 2�� ������ �Է±��� >>

// 2�� ������(secondDecomposer~~) �� ������� �������� �Է� �޾Ƽ� ~~ �� ������ ��������� ȯ�� �� ���� ���� ��, �ҿ�ð� ��ȯ.

// �ߺ� ����� �����ϱ� ���Ͽ� ���� ���� ����, ������ �տ� �ڽ��� �̸� �̴ϼ��� ���� ��.
// ��������� �������� ���ϴ� ������ �����ϰ� �Ǵ� ���� �̸��� s_via (����ö), t_via (����), b_via (����) �� ������� ���� �� ��.

int secondDecomposerStation(char start[50], char end[50]) { // ������ (����ö)
	int s_i;
	int s_i2;
	int s_i3;

	int e_i;
	int e_i2;
	int e_i3;

	for (int i = 0; i < 6; i++) {
		for (int i2 = 0; i < 25; i2++) {
			for (int i3 = 0; i < 80; i3++) {
				if (strcmp(start, a[i][i2][i3].name) == 0) {
					s_i = i;
					s_i2 = i2;
					s_i3 = i3;
				}

				else if (strcmp(end, a[i][i2][i3].name) == 0) {
					e_i = i;
					e_i2 = i2;
					e_i3 = i3;
				}
			}
		}
	}
	
	if (s_i2 == e_i2) {
//		�����Լ�(start, end); // ������
	}

	else {
	
	
	}



	return 0;
}

int secondDecomposerTrain(char start[50], char end[50]) { // �輼�� (ö��)

	return 0;
}

int secondDecomposerBus(char start[50], char end[50]) { // �ڵ��� (����)

	return 0;
}


// << ���� �Լ� �Է±��� >>

int main()
{ 
	firstDecomposer("���Ͽ�", "����Ͽ�");

    return 0;
}