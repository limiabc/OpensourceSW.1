// 2015244003.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"

// << �� ���� �Է� ���� >>

typedef struct station { // ����ö �� ����
	char name;
	int time[2][24];

	station *w; // ����ö ȯ��(��)
	station *a; // ����ö ȯ��(����)
	station *d; // ����ö ȯ��(������)
	station *s; // ����ö ȯ��(�Ʒ�)
	train *tr; // ������ ȯ��
	bus *bus; // ������ ȯ��
};

typedef struct train { // ���� �� ����
	char name;
	int time[2][24];

	station *st; // ����ö�� ȯ��
	bus *bu; // ������ ȯ��
};

typedef struct bus { // ���� �� ����
	char name;
	int time[2][24];

	station *st; // ����ö�� ȯ��
	train *tr; // ������ ȯ��
};

station a[4][25][30]; // a[����][ȣ��][��]
train b[10][20]; // b[ö��(��μ�, �氭�� ��)][��]
bus c[4][50]; // c[����][��]



// << �Լ� �Է±��� >>
// ��߿��� �������� �Է��ϸ� ȯ�� �������� ������, �� �� �ɸ��� �ҿ�ð��� ��ȯ �� ��.

int firstDecomposer(char start, char end) { // ���� ������ (�����(a) �� ������(b) �� �Է¹޾Ƽ� ������� ���� ���� �� �ҿ�ð� ��ȯ)
	int s_check;
	int s_i;
	int s_i2;
	int s_i3;

	int e_check;
	int e_i;
	int e_i2;
	int e_i3;

	for (int i = 0; i < 4; i++) {
		for (int i2 = 0; i2 < 25; i2++) {
			for (int i3 = 0; i3 < 30; i3++) {
				if (start == a[i][i2][i3].name) {
					s_i = i;
					s_i2 = i2;
					s_i3 = i3;
					s_check = 1;
				}

				else if (end == a[i][i2][i3].name) {
					e_i = i;
					e_i2 = i2;
					e_i3 = i3;
					e_check = 1;
				}
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		for (int i2 = 0; i < 20; i++) {
			if (start == b[i][i2].name) {
				s_i = i;
				s_i2 = i2;
				s_check = 2;
			}

			else if (end == b[i][i2].name) {
				e_i = i;
				e_i2 = i2;
				e_check = 2;
			}
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int i2 = 0; i < 50; i++) {
			if (start == b[i][i2].name) {
				s_i = i;
				s_i2 = i2;
				s_check = 3;
			}

			else if (end == b[i][i2].name) {
				e_i = i;
				e_i2 = i2;
				e_check = 3;
			}
		}
	}

	if (s_check == e_check) {
		switch (s_check) {
		case 1: break;
		case 2: break;
		case 3: break;
		}
	}
}
 

// 2�� ������(secondDecomposer~~) �� ������� �������� �Է� �޾Ƽ� ~~ �� ������ ��������� ȯ�� �� ���� ���� ��, �ҿ�ð� ��ȯ

int secondDecomposerStation(char a, char b) { // ������

}

int secondDecomposerTrain(char a, char b) { // �輼��

}

int secondDecomposerBus(char a, char b) { // �ڵ���

}


// << ���� �Լ� �Է±��� >>

int main()
{


    return 0;
}

