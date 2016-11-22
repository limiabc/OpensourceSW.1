// 2015244003.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#define N 50; // �ִ� �� �̸� ����

// << �� ���� �Է� ���� >> (��� ����ȭ �� ����)
typedef struct station;
typedef struct train;
typedef struct bus;

typedef struct station { // ����ö �� ����
	char name[50];
	int time[2][24][20];

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

struct station a[6][25][80] = 
{
	{
		{
			{ "���Ͽ�", { NULL }, NULL, NULL, NULL, NULL, NULL, NULL },
			{ "���̿�", { NULL }, NULL, NULL, NULL, NULL, NULL, NULL }
		}
	},
	{
		{
			{ "�����Ͽ�", { NULL }, NULL, NULL, NULL, NULL, NULL, NULL }
		}
	}
};
		// a[����(0 = ����, 1 = �λ�, 2 = �뱸, 3 = ����, 4 = ����, 5 = �ش� ����)][ȣ��][��]
struct train b[6][10][20]
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

	if (s_check == e_check) { // ��쿡 ���� ������ (���� ������ ���� ���)
		switch (s_check) {
		case 1: if (s_i != e_i) {
			switch (s_i) {
			case 0: 
				switch (e_i) {
				case 0: printf("Error Number : 0000\n"); break;
				default:
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
					secondDecomposerStation(start, end);

					printf("1. %s, %s\n", start, end);
				}; break;

		case 2: if (s_i != e_i) {
			switch (s_i) {
			case 0:
				switch (e_i) {
				case 0: printf("Error Number : 0000\n"); break;
				default: secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			case 1:
				switch (e_i) {
				case 1: printf("Error Number : 0000\n"); break;
				default: secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			case 2:
				switch (e_i) {
				case 2: printf("Error Number : 0000\n"); break;
				default: secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			case 3:
				switch (e_i) {
				case 3: printf("Error Number : 0000\n"); break;
				default: secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			case 4:
				switch (e_i) {
				case 4: printf("Error Number : 0000\n"); break;
				default: secondDecomposerTrain(s_string, e_string);
					printf("2. %s, %s\n", s_string, e_string); break;
				}; break;
			}
		}
				else {
					secondDecomposerTrain(start, end);
					printf("1. %s, %s\n", start, end);
				}; break;

		case 3: if (s_i != e_i) {
			switch (s_i) {
			case 0:
				switch (e_i) {
				case 0: printf("Error Number : 0000\n"); break;
				default:
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
					secondDecomposerBus(start, end);

					printf("1. %s, %s\n", start, end);
				}; break;
		}
	}

	else {
		switch (s_check) {
		case 1:
			switch (e_check) {
			case 1: printf("Error Number : 0001\n"); break;
			case 2: 
				if (s_i != e_i) {
					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, end);
				}
				else {
					findSameCityTransferStation(e_i, e_i2, e_i3, s_check, e_check);
					secondDecomposerStation(start, FIRSTDECOMPOSER_TRANSFER_START);

					printf("1. %s, %s\n", start, FIRSTDECOMPOSER_TRANSFER_START);
				};
				break;
			case 3: 
				if (s_i != e_i) {
					secondDecomposerStation(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
				}
				else {
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
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
				}
				else {
					secondDecomposerStation(start, end);

					printf("2. %s, %s\n", start, end);
				};
				break;
			case 2: printf("Error Number : 0001\n"); break;
			case 3: 
				if (s_i != e_i) {
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerBus(e_string, end);

					printf("1. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
				}
				else {
					secondDecomposerBus(start, end);

					printf("2. %s, %s\n", start, end);
				};
				break;
			}; break;
		case 3:
			switch (e_check) {
			case 1: 
				if (s_i != e_i) {
					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);
					secondDecomposerStation(e_string, end);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
					printf("3. %s, %s\n", e_string, end);
				}
				else {
					findSameCityTransferStation(e_i, e_i2, e_i3, s_check, e_check);
					secondDecomposerBus(start, FIRSTDECOMPOSER_TRANSFER_START);
					secondDecomposerStation(FIRSTDECOMPOSER_TRANSFER_END, end);

					printf("1. %s, %s\n", start, FIRSTDECOMPOSER_TRANSFER_START);
					printf("2. %s, %s\n", FIRSTDECOMPOSER_TRANSFER_END, end);
				};
				break;
			case 2: 
				if (s_i != e_i) {
					secondDecomposerBus(start, s_string);
					secondDecomposerTrain(s_string, e_string);

					printf("1. %s, %s\n", start, s_string);
					printf("2. %s, %s\n", s_string, e_string);
				}
				else {
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

int secondDecomposerStation(char a[50], char b[50]) { // ������ (����ö)

	return 0;
}

int secondDecomposerTrain(char a[50], char b[50]) { // �輼�� (ö��)

	return 0;
}

int secondDecomposerBus(char a[50], char b[50]) { // �ڵ��� (����)

	return 0;
}


// << ���� �Լ� �Է±��� >>

int main()
{ 
	firstDecomposer("���Ͽ�", "����Ͽ�");

    return 0;
}

