#include <stdio.h>

#define MAX_DATA_COUNT  10

int FindNthMaxData(int data[], int nth_max);

int main(void)

{

	int data[MAX_DATA_COUNT] = { 2, 6, 3, 1, 8, 10, 7, 5, 13, 15 }; //배열 값 배정

	int result;



	result = FindNthMaxData(data, 1);

	printf("> 배열에서 %d번째로 큰 데이터 값은 %d 입니다.\n", 1, result);

	result = FindNthMaxData(data, 5);

	printf("> 배열에서 %d번째로 큰 데이터 값은 %d 입니다.\n", 5, result);

	result = FindNthMaxData(data, 10);

	printf("> 배열에서 %d번째로 큰 데이터 값은 %d 입니다.\n", 10, result);



	return 0;

}



//  int data[] -> 10개의 정수 데이터를 담은 배열

//  int nth_max -> n번째를 나타내는 숫자. 예로 5일 경우 5번째로 큰 정수를 의미함.

// 10개의 정수를 가지는 배열 data[]의 정수들 중에서 nth_max 번째로 큰 숫자를 찾아서 반환함.

int FindNthMaxData(int data[], int nth_max)

{
	int i, j, max;
	int temp[MAX_DATA_COUNT];

	for (i = 0; i < MAX_DATA_COUNT; i++) {
		temp[i] = data[i];

	}

	for (i = 0; i < nth_max; i++) {

		max = 0;
		for (j = 1; j < MAX_DATA_COUNT; j++) {
			if (temp[j] > temp[max]) {
				max = j;
			}
		}
		if (i == nth_max - 1) {
			return temp[max];

		}
		temp[max] = -100000;
	}

	return 0;

}