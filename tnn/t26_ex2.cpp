#include <stdio.h>

int main() {

	int arr[] = { 1,2,3 };
	printf("arr: %Iu\n", arr);
	
	// arr�� �迭 �����ּ�. �� &arr[0] �̹Ƿ� arr ��ü�� 1�� ���ϸ�  sizeof(int) ��ŭ ������.
	printf("arr+1: %Iu\n", arr + 1);

	printf("&arr: %Iu\n", &arr);

	// arr�� �ּҿ� 1�� ���ϸ� arr�� ũ�⸸ŭ ������. �� sizeof(int) * n(�迭 ��� ����)
	printf("&arr: %Iu\n", &arr + 1);

	// ��, arr + 1 => arr + sizeof(int) => arr + 4
	//    &arr + 1 => arr + sizeof(arr �迭) => arr + 12.
}