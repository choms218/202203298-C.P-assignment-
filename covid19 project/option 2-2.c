#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
	void option_2_2(void) {
		int n;
		char* str[100];                       // [���׸� 4 ������ ���]
		FILE* fp;
		fp = fopen("�ؿ�����.txt", "r");                  // [���׸� 7 ���� �����]
		for (int i = 0; i <= 30; i++) {
			fgets(str, 100, fp);
			if (i <= 8) {
				printf("5�� %d��\t\t||", i + 1);
			}
			else {
				printf("5�� %d��\t||", i + 1);
			}
			n = atoi(str);
			printf("%d ", n);
			graph_size(n);

		}
		//
		printf("\t\t\t\t\t\t\t\t\t (= / �� ��)\n");

		return main();

	}