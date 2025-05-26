#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
	char name[20];
	char ID[20];
	int math;
	int phy;
	int eng;
	float ave;
}student;
void main_menu();
void enter_grade(student stu[],int *count);

int main()
{
	//welcome_screen
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
	
	//password
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
	do
	{
		main_menu();
		char choice;
		int stu_count=0;
		student stu[10];
		choice=getch();
		switch(choice)
		{
			case 'a': enter_grade(stu,&stu_count); break;
			default:
     	   printf("無效的選項，請重新輸入！\n");
     	   printf("按任意鍵繼續...\n");
     	   getch();
		}
	}while(1);
	
	return 0;
} 
void main_menu() //menu
{
	printf("============[Grade System]==========\n");
	printf("a.Enter student grades\n");
	printf("b.Display student grades\n");
	printf("c.Search for student grades\n");
	printf("d.Grade ranking\n");
	printf("e.Exit system\n");
	printf("====================================\n");
}
void enter_grade(student stu[],int *count) //enter student's grade
{
    int n, i;
    system("cls");
    do
	{
        printf("請輸入學生人數(5~10): ");
        scanf("%d",&n);
        while(getchar()!='\n');
        
        if(n<5||n>10)
		{
            printf("錯誤！人數必須在5到10之間。\n");
        }
    } while(n<5||n>10);
    
    for(i =*count;i<*count+n;i++)
	{
        printf("\n學生 %d:\n",i+1);
        printf("姓名:");
        fgets(stu[i].name,50,stdin);
        stu[i].name[strcspn(stu[i].name,"\n")]='\0';
        
        do
		{
            printf("學號 (6位數):");
            scanf("%s", &stu[i].ID);
            while(getchar()!='\n');
			 
            if(strlen(stu[i].ID)!=6)
            {
                printf("錯誤！學號必須是6位數。\n");
            }
        } while(strlen(stu[i].ID)!=6);
        
        do
		{
            printf("數學成績 (0~100):");
            scanf("%d", &stu[i].math);
            while(getchar()!='\n');
            
            if(stu[i].math<0||stu[i].math>100)
			{
                printf("錯誤！成績必須在0到100之間。\n");
            }
        } while(stu[i].math<0||stu[i].math>100);
        
        do
		{
            printf("物理成績 (0~100):");
            scanf("%d", &stu[i].phy);
            while(getchar()!='\n');
            
            if(stu[i].phy<0||stu[i].phy>100)
			{
                printf("錯誤！成績必須在0到100之間。\n");
            }
        } while(stu[i].phy<0||stu[i].phy>100);

        do
		{
            printf("英文成績 (0~100):");
            scanf("%d", &stu[i].eng);
            while(getchar() != '\n'); // 清除輸入緩衝區
            
            if(stu[i].eng<0||stu[i].eng>100)
			{
                printf("錯誤！成績必須在0到100之間。\n");
            }
        } while(stu[i].eng<0||stu[i].eng>100);
        
        stu[i].ave = (stu[i].math+stu[i].phy+stu[i].eng)/3.0f;
    }
    
    *count+=n;
    printf("\n成績輸入完成！按任意鍵返回主選單...\n");
    getch();
}

	

 
