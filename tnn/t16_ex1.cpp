#include <stdio.h>

int main() {
	
	int i = 1;
	while (i <= 10) {
		printf("%d\n", i);
		i++;
	}

	// 위의 while문을 for문으로 바꾸면 다음과 같은 형태다.
	for (i = 1; i <= 10; i++) {
		printf("%d\n", i);
	}

	/* for문이 자주 쓰이는 경우
	*  일정하게 증가/감소하는 변수가 필요할 때
	* 배열의 모든 요소에 순차적으로 접근할 때
	* 특정 횟수만큼 작업을 반복할 때
	*/
}