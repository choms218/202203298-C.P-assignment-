void option_3(void)
{
	int num;
	while (1)
	{
	
		printf("*******************************************************\n");
		printf("1. 날짜 부분 선택\n");
		printf("2. 전체 그래프 한 눈에 보기\n");
		printf("3. 뒤로 가기\n");
		printf("*******************************************************");

		printf("\n실행번호를 입력하세요 : ");
		scanf("%d", &num);

		if (num == 1)
			option_3_1();
		else if (num == 2)
			option_3_2();
		else if (num == 3)
			return main();
		else {
			printf("번호를 다시 입력해주세요 : ");
			scanf("%d", &num);
		}
	}
}