#include <stdio.h> 
#include <stdlib.h>

int main()
{
	//Part1:個人風格畫面 
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
	printf("|            感恩老師感恩學長          |\n");
	printf("|            拜託不要當我 QAQ          |\n");
	printf("========================================\n");
	
	system("pause");
	system("cls");
	
	//Part2:密碼驗證 
	int password,correctpassword=2024;
	printf("請輸入4位數字密碼\n");
	scanf("%d",&password);
	
	if(password==correctpassword)
	{
		printf("歡迎！\n");
		system("pause");
		system("cls");
	}
	else
	{
		printf("%c",'\a');
		printf("密碼錯誤！");
		system("pause");
		return 0;
	}
	
	//Part3:主選單 
	printf("========================================\n");
	printf("| 'A'...'Z' : Uppercase                |\n");
	printf("| 'a'...'z' : Lowercase                |\n");
	printf("| '0'...'9' : Digit                    |\n");
	printf("| Otherwise : Your name                |\n");
	printf("========================================\n");

	
	system("pause");
	return 0;
}

