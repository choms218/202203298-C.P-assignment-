/* [평가항목 1] : 과제 설명

	컴퓨터프로그래밍 평가과제 (배점 25점)
	학과 : 컴퓨터공학과
	학번 : 202203298
	이름 : 조미서
	
	과제 주제 : 2022년 5월 기준 국내 코로나 발생자와 해외유입, 사망자 추이를 
	전체적인 그래프 또는 특정 날짜만 선택하여 비교할 수 있는 그래프를 출력하는 프로그램 
	*/

#define _CRT_SECURE_NO_WARNINGS
// main.c
#include <stdio.h>

struct info { //[평가항목 5] 구조체 활용
	char title[200];
	int period;
};

void option_1(void);  // [평가항목 8] 다중 소스 파일 사용
void option_2(void);  // [평가항목 8] 다중 소스 파일 사용
void option_3(void);  // [평가항목 8] 다중 소스 파일 사용
void option_1_1(void);  // [평가항목 8] 다중 소스 파일 사용
void option_1_2(void);  // [평가항목 8] 다중 소스 파일 사용
void option_2_1(void);  // [평가항목 8] 다중 소스 파일 사용
void option_2_2(void);  // [평가항목 8] 다중 소스 파일 사용
void option_3_1(void);  // [평가항목 8] 다중 소스 파일 사용
void option_3_2(void);  // [평가항목 8] 다중 소스 파일 사용

void system(void) { // [평가항목 2] 함수 사용
	struct info i1; //[평가항목 5] 구조체 활용
	strcpy(i1.title, "국내 발생자, 해외유입, 사망자 추이 그래프");
	i1.period = 202205;

	printf("%s (%d)\n", i1.title, i1.period);
	

	char *main[4] = { "1. 국내발생자 추이 그래프", "2. 해외유입 추이 그래프", "3. 사망자 추이 그래프", "4. 프로그램 종료" }; // [평가항목 6] 포인터 활용
	printf("*******************************************************\n");
	printf("%s\n%s\n%s\n%s\n", main[0], main[1], main[2], main[3]); // [평가항목 6] 포인터 활용
	printf("*******************************************************\n");
	printf("\n실행번호를 입력하세요 : ");
}
int main(void)
{
	int num;
	while (1) {
		system(); // [평가항목 2] 함수 사용
		scanf("%d", &num);

		if (num == 1)
			option_1();
		else if (num == 2)
			option_2();
		else if (num == 3)
			option_3();
		else if (num == 4)
			exit();
		else {
			printf("번호를 다시 입력해주세요 : ");
			scanf("%d", &num);
		}
	}
}