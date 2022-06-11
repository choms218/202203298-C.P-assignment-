#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
	void option_2_2(void) {
		int n;
		char* str[100];                       // [평가항목 4 포인터 사용]
		FILE* fp;
		fp = fopen("해외유입.txt", "r");                  // [평가항목 7 파일 입출력]
		for (int i = 0; i <= 30; i++) {
			fgets(str, 100, fp);
			if (i <= 8) {
				printf("5월 %d일\t\t||", i + 1);
			}
			else {
				printf("5월 %d일\t||", i + 1);
			}
			n = atoi(str);
			printf("%d ", n);
			graph_size(n);

		}
		//
		printf("\t\t\t\t\t\t\t\t\t (= / 한 명)\n");

		return main();

	}