#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>
void menu();
void drawTriangle();
void nine();

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
	
	menu();
    
    char choice;
    printf("請選擇(a或b或c):");
    choice=getche();
    printf("\n");
    switch(choice)
    {
    	case 'A':
    	case 'a':
    	drawTriangle();
    	break;
    	
    	case 'B':
    	case 'b':
    	nine();
    	break;
    	
    	default:
    	break;
	}
	getch();
	system("cls");
	menu();
	return 0;
}

//Part2:主選單
void menu()
{
	printf("========================================\n");
    printf("|          主選單                      |\n");
    printf("|                                      |\n");
    printf("|  a. 畫出直角三角形                   |\n");
    printf("|  b. 顯示乘法表                       |\n");
    printf("|  c. 結束                             |\n");
    printf("|                                      |\n");
    printf("========================================\n"); 
}

//Part3:繪製三角形  
void drawTriangle() 
{
   	while(1)
	{
		char c;
		printf("請輸入'a'到'n'的字元:");
		scanf(" %c",&c);
		if(c>='a'&&c<='n')
		{
			int row=c-'a'+1;
			int k,j,i;
			
			for(k=row-1;k>=0;k--)
			{
				for(i=1;i<=k;i++)
				{
					printf(" ");
				}
				for(j=1;j<=row-k;j++)
				{
					char n=c-(row-k-j);
					printf("%c",n);
				}
				printf("\n");
			}
			break;
		}	
		else
		{
			printf("輸入非'a'到'n'的字元！請重新輸入！\n");
		}	
	}
	return 1;
}

//Part4:九九乘法
void nine()
{
	while(1)
	{
		int n;
		printf("請輸入1到9的整數n:");
		scanf(" %d",&n);
		if(n>=1&&n<=9)
		{
			int i,k;
			for(i=1;i<=n;i++)
			{
				for(k=1;k<=n;k++)
				{
					printf("%d*%d=%d ",i,k,i*k);
				}
				printf("\n");
			}
			break;
		}	
		else
		{
			printf("輸入非1到9的整數n！請重新輸入！\n");
		}	
	}
	return 1;	
} 

	
