// 2015244003.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"

// << 역 정보 입력 구간 >>

typedef struct station { // 지하철 역 정보
	char name;
	int time[2][24];

	station *w; // 지하철 환승(위)
	station *a; // 지하철 환승(왼쪽)
	station *d; // 지하철 환승(오른쪽)
	station *s; // 지하철 환승(아래)
	train *tr; // 기차로 환승
	bus *bus; // 버스로 환승
};

typedef struct train { // 기차 역 정보
	char name;
	int time[2][24];

	station *st; // 지하철로 환승
	bus *bu; // 버스로 환승
};

typedef struct bus { // 버스 역 정보
	char name;
	int time[2][24];

	station *st; // 지하철로 환승
	train *tr; // 버스로 환승
};

station a[4][25][30]; // a[도시][호선][역]
train b[10][20]; // b[철도(경부선, 경강선 등)][역]
bus c[4][50]; // c[도시][역]



// << 함수 입력구간 >>
// 출발역과 도착역을 입력하면 환승 구간별로 분해해, 총 합 걸리는 소요시간을 반환 할 것.

int firstDecomposer(char start, char end) { // 최초 분해자 (출발지(a) 와 도착지(b) 를 입력받아서 교통수단 별로 분해 후 소요시간 반환)
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
 

// 2차 분해자(secondDecomposer~~) 는 출발지와 도착지를 입력 받아서 ~~ 에 서술된 교통수단의 환승 역 별로 분해 후, 소요시간 반환

int secondDecomposerStation(char a, char b) { // 안은규

}

int secondDecomposerTrain(char a, char b) { // 김세훈

}

int secondDecomposerBus(char a, char b) { // 박동규

}


// << 메인 함수 입력구간 >>

int main()
{


    return 0;
}

