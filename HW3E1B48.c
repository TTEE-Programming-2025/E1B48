#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//個人風格畫面
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
	
	//密碼 
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
	
	main_menu();

	return 0;
} 

//主選單 
void main_menu()
{
    printf("---[Booking System]---\n");
    printf("a. Available seats\n");
    printf("b. Arrange for you\n");
    printf("c. Choose by yourself\n");
    printf("d. Exit\n");
}

//a選項 
void seat(char seats[9][9])
{
    // 初始化所有座位為空
    int i,j;
    for(i=0;i<9;i++)
	{
        for(j=0;j<9;j++)
		{
            seats[i][j]='-';
        }
    }
    
    // 隨機產生10個已預訂座位
    srand(time(NULL));//用當前時間生成隨機數
    int booked=0;
    while (booked<10)
	{
        int row,col;
		row=rand()%9;
        col=rand()%9;
        if (seats[row][col]=='-')
		{
            seats[row][col]='*';
            booked++;
        }
    }
}

void seat_map(char seats[9][9])
{
    printf("\\123456789\n");
    
    int i,j;
    for(i=9-1;i>=0;i--)
	{
        printf("%d",i+1);  //列印行號
        for(j=0;j<9;j++)
		{
            printf("%c",seats[i][j]);
        }
        printf("\n");
    }
}
