#include <stdio.h>

void option_3_1(void) {
	int n;
	int inputed[100];             // [���׸� 3 �迭 ���]
	int i = 0;
	FILE* fp;                               // [���׸� 7 ���� �����]
	fp = fopen("�����.txt", "r");
	char* str[100];               // [���׸� 4 ������ ���]
	int num[100];                 // [���׸� 3 �迭 ���]
	for (int k = 0; k < 31; k++) {
		fgets(str, 100, fp);
		n = atoi(str);
		num[k] = n;
	}
	
	printf("*******************************************************\n");
	printf("���ϰ��� �ϴ� ��¥�� �Է��ϼ���(1~31)\n");
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
			printf("5�� %d��\t\t||%d ", inputed[j], num[inputed[j] - 1]);
		}
		else {
			printf("5�� %d��\t||%d ", inputed[j], num[inputed[j] - 1]);
		}

		graph_size(num[inputed[j] - 1]);
	}
	printf("\t\t\t\t\t\t\t\t\t (= / �� ��)\n");

	return main();


}