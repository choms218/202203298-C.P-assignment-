void option_3(void)
{
	int num;
	while (1)
	{
	
		printf("*******************************************************\n");
		printf("1. ��¥ �κ� ����\n");
		printf("2. ��ü �׷��� �� ���� ����\n");
		printf("3. �ڷ� ����\n");
		printf("*******************************************************");

		printf("\n�����ȣ�� �Է��ϼ��� : ");
		scanf("%d", &num);

		if (num == 1)
			option_3_1();
		else if (num == 2)
			option_3_2();
		else if (num == 3)
			return main();
		else {
			printf("��ȣ�� �ٽ� �Է����ּ��� : ");
			scanf("%d", &num);
		}
	}
}