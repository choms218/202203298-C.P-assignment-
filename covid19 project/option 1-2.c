#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
void option_1_2(void) {
	int n;
	char* str[100];                                    // [평가항목 4 포인터 사용]
	FILE* fp;
	fp = fopen("국내발생.txt", "r");                   // [평가항목 7 파일 입출력]
	for (int i = 0; i < 31; i++) {
		fgets(str, 100, fp);
		if (i <= 8) {
			printf("5월 %d일\t\t||", i + 1);
		}
		else {
			printf("5월 %d일\t||", i + 1);
		}
		n = atoi(str) / 1000;
		printf("%d ", n);
		graph_size(n);

	}
	printf("\t\t\t\t\t\t\t\t\t (= / 천 명)\n");
	fclose(fp);
	return main();

}