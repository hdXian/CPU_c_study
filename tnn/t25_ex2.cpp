#include <stdio.h>

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("arr ��: %Iu\n", arr); // �迭�� �̸��� �迭�� ���� �ּҸ� �����Ѵ�. �� �����ʹ�.
	for (int i = 0; i < 10; i++) {
		printf("&arr[%d]: %Iu\n", i, &arr[i]);
		printf("arr + %d: %Iu\n", i, arr + i);
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", *(arr + i));
	}
	printf("\n");

	for (int* p = arr; p < arr + 10; p++)
		printf("%d\n", *p);

	printf("\n");
		

}