#include <stdio.h>

void option_3_1(void) {
	int n;
	int inputed[100];             // [평가항목 3 배열 사용]
	int i = 0;
	FILE* fp;                               // [평가항목 7 파일 입출력]
	fp = fopen("사망자.txt", "r");
	char* str[100];               // [평가항목 4 포인터 사용]
	int num[100];                 // [평가항목 3 배열 사용]
	for (int k = 0; k < 31; k++) {
		fgets(str, 100, fp);
		n = atoi(str);
		num[k] = n;
	}
	
	printf("*******************************************************\n");
	printf("비교하고자 하는 날짜를 입력하세요(1~31)\n");
	printf("ex)\t1\t2\t3\n");
	printf("ex)\t6\t19\t23\n");
	printf("\t1\t3\t5\t7\t9\n");
	printf("*******************************************************\n");

	do {
		scanf_s("%d", &inputed[i]);

		i++;
	} while (getc(stdin) == ' ');

	printf("\n");

	for (int j = 0; j < i; ++j) {
		if (inputed[j] <= 9) {
			printf("5월 %d일\t\t||%d ", inputed[j], num[inputed[j] - 1]);
		}
		else {
			printf("5월 %d일\t||%d ", inputed[j], num[inputed[j] - 1]);
		}

		graph_size(num[inputed[j] - 1]);
	}
	printf("\t\t\t\t\t\t\t\t\t (= / 한 명)\n");

	return main();


}