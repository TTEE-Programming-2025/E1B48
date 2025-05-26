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
void display_grade(student stu[],int count);
void search_grade(student stu[],int count);

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
	int stu_count=0;
	student stu[10];
	do
	{
		main_menu();
		char choice;
		choice=getch();
		switch(choice)
		{
			case 'a': enter_grade(stu,&stu_count); break;
			case 'b':display_grade(stu,stu_count); break;
			case 'c':search_grade(stu, stu_count); break;
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
	system("cls");
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
void display_grade(student stu[],int count)
{
    int i;
    system("cls");
    
    if(count==0)
	{
        printf("目前沒有學生資料！\n");
    }
	else
	{
        printf("%-20s %-10s %-10s %-10s %-10s %-10s\n", 
               "姓名","學號","數學","物理","英文","平均");
        printf("------------------------------------------------------------\n");
        
        for(i=0;i<count;i++)
		{
            printf("%-20s %-10s %-10d %-10d %-10d %-10.1f\n", 
                   stu[i].name, stu[i].ID, 
                   stu[i].math, stu[i].phy, 
                   stu[i].eng, stu[i].ave);
        }
    }
    
    printf("\n按任意鍵返回主選單...\n");
    getch();
}
void search_grade(student stu[],int count)
{
    char name[50];
    int i,found=0;
    system("cls");
    
    if(count==0)
	{
        printf("目前沒有學生資料！\n");
    }
	else
	{
        printf("請輸入要搜尋的學生姓名:");
        fgets(name,50,stdin);
        name[strcspn(name,"\n")]='\0';
        
        for(i=0;i<count;i++)
		{
            if(strcmp(stu[i].name,name)==0)
			{
                printf("\n找到學生資料:\n");
                printf("%-20s %-10s %-10s %-10s %-10s %-10s\n", 
                       "姓名","學號","數學","物理","英文","平均");
                printf("------------------------------------------------------------\n");
                printf("%-20s %-10s %-10d %-10d %-10d %-10.1f\n", 
                       stu[i].name, stu[i].ID, 
                       stu[i].math, stu[i].phy, 
                       stu[i].eng, stu[i].ave);
                found=1;
                break;
            }
        }
        
        if(!found)
		{
            printf("\n找不到姓名為 %s 的學生資料。\n",name);
        }
    }
    
    printf("\n按任意鍵返回主選單...\n");
    getch();
}

	

 
