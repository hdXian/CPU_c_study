#include "nowarn.h"
#include <stdio.h>

int main() {

	int sel;
	// makeSel:
	printf("새 게임: 1\n불러오기: 2\n설정: 3\n크레딧: 4\n>> ");
	scanf("%d", &sel);

	switch (sel) {
	case 1:
		printf("선택 - 새 게임\n");
		break;
	case 2:
		printf("선택 - 불러오기\n");
		break;
	case 3:
		printf("선택 - 설정\n");
		break;
	case 4:
		printf("선택 - 크레딧\n");
		break;
	default:
		printf("잘못 입력하셨습니다.\n");
		// goto makeSel; makeSel이 선언된 라인으로 이동. 코드 가독성을 심하게 저하시켜 사용을 권장하지 않는다.
		break;
	}
}