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
	
	//Part4:輸入字元判斷 
	char input;
	printf("請輸入一個字元:\n");
	fflush(stdin);
	scanf("%c",&input);

	if(input>='A'&&input<='Z')
	{
		printf("Uppercase\n");
	}
	else if(input>='a'&&input<='z')
	{
		printf("Lowercase\n");
	}
	else if(input>='0'&&input<='9')
	{
		printf("Digit\n");
	}
	else
	{
		printf("E1B48黃郁婷\n");
	}
	
	system("pause");
	return 0;
}
//心得:這次作業的最大收穫是學會如何使用github,助教上課時ppt有個很好笑的梗圖說不會github是軟體工程師之恥，現在我算是在擺脫恥辱的路上了吧哈哈。
//    途中遇到最大困難就是英文能力太差，導致我常常看不懂終端顯示的東西到底是甚麼意思，不過助教的ppt解釋的很清晰明瞭，加上助教後面附的教學影片
//    我大致能看懂一些了(不過影片真的好糊QAQ)。助教說學github有一個好處是能和別人協作，不知道未來的課程會不會有合作呢？我還蠻期待的，但前提是
//   不要遇到豬隊友XD 
