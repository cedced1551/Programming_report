#include <stdio.h>
#include <conio.h>

void MyGets(char* str, int size);
int main(void)
{
	char str[10]; //문자 스트링을 저장할 공간 확보
	printf("> 스트링을 입력하시오:");
	//scanf("%s", str);
	MyGets(str, sizeof(str));
	printf(">입력된 스트링: %s\n", str);

	return 0;
}
void MyGets(char *str, int size) 
{	char ch;
	int index = 0 ;
	ch = getchar(); //첫 번째 문자 입력 받기
	while (ch != '\n' && index < size - 1) { // safe조건
		str[index] = ch;
		index++;
		ch = getchar();
	}
	str[index] = '\0';
}
