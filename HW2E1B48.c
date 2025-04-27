#include <stdio.h> 
#include <stdlib.h>

int main()
{
	//Part1:個人風格畫面 &密碼驗證 
	printf("========================================\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("|        o(≧▽≦)o歡迎 o(≧▽≦)o     |\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("|                 E1B48                |\n");
	printf("|                黃郁婷                |\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("|             (╯°□°）╯︵              |\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("|         o(≧▽≦)o  o(≧▽≦)o       |\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("========================================\n");
	
	system("pause");
	system("cls");
	
	int password,correctpassword=2025,wrong=0;
	do
	{
		printf("請輸入4位數字密碼\n");
		scanf("%d",&password);
	
		if(password==correctpassword)
		{
			printf("歡迎！\n");
			system("pause");
			system("cls");
			break;
		}
		else
		{
			printf("%c",'\a');
			printf("密碼錯誤！");
			wrong++;
			if(wrong==3)
			{
			printf("密碼錯誤3次！結束程式！");
			return 1;
			}
		}
	}while(1);
	
	//Part2:主選單
	printf("========================================\n");
    printf("|          主選單                      |\n");
    printf("|                                      |\n");
    printf("|  a. 畫出直角三角形                   |\n");
    printf("|  b. 顯示乘法表                       |\n");
    printf("|  c. 結束                             |\n");
    printf("|                                      |\n");
    printf("========================================\n"); 
}
	
