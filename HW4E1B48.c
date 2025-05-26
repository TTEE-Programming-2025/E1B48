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
	printf("|        o(�١���)o�w�� o(�١���)o     |\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("|                 E1B48                |\n");
	printf("|                �����@                |\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("|             (���X���X�^���_              |\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("|                                      |\n");
	printf("|         o(�١���)o  o(�١���)o       |\n");
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
		printf("�п�J4��Ʀr�K�X\n");
		scanf("%d",&password);
	
		if(password==correctpassword)
		{
			printf("�w��I\n");
			system("pause");
			system("cls");
			break;
		}
		else
		{
			printf("%c",'\a');
			printf("�K�X���~�I");
			wrong++;
			if(wrong==3)
			{
			printf("�K�X���~3���I�����{���I");
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
     	   	printf("�L�Ī��ﶵ�A�Э��s��J�I\n");
     	    printf("�����N���~��...\n");
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
        printf("�п�J�ǥͤH��(5~10): ");
        scanf("%d",&n);
        while(getchar()!='\n');
        
        if(n<5||n>10)
		{
            printf("���~�I�H�ƥ����b5��10�����C\n");
        }
    } while(n<5||n>10);
    
    for(i =*count;i<*count+n;i++)
	{
        printf("\n�ǥ� %d:\n",i+1);
        printf("�m�W:");
        fgets(stu[i].name,50,stdin);
        stu[i].name[strcspn(stu[i].name,"\n")]='\0';
        
        do
		{
            printf("�Ǹ� (6���):");
            scanf("%s", &stu[i].ID);
            while(getchar()!='\n');
			 
            if(strlen(stu[i].ID)!=6)
            {
                printf("���~�I�Ǹ������O6��ơC\n");
            }
        } while(strlen(stu[i].ID)!=6);
        
        do
		{
            printf("�ƾǦ��Z (0~100):");
            scanf("%d", &stu[i].math);
            while(getchar()!='\n');
            
            if(stu[i].math<0||stu[i].math>100)
			{
                printf("���~�I���Z�����b0��100�����C\n");
            }
        } while(stu[i].math<0||stu[i].math>100);
        
        do
		{
            printf("���z���Z (0~100):");
            scanf("%d", &stu[i].phy);
            while(getchar()!='\n');
            
            if(stu[i].phy<0||stu[i].phy>100)
			{
                printf("���~�I���Z�����b0��100�����C\n");
            }
        } while(stu[i].phy<0||stu[i].phy>100);

        do
		{
            printf("�^�妨�Z (0~100):");
            scanf("%d", &stu[i].eng);
            while(getchar() != '\n'); // �M����J�w�İ�
            
            if(stu[i].eng<0||stu[i].eng>100)
			{
                printf("���~�I���Z�����b0��100�����C\n");
            }
        } while(stu[i].eng<0||stu[i].eng>100);
        
        stu[i].ave = (stu[i].math+stu[i].phy+stu[i].eng)/3.0f;
    }
    
    *count+=n;
    printf("\n���Z��J�����I�����N���^�D���...\n");
    getch();
}
void display_grade(student stu[],int count)
{
    int i;
    system("cls");
    
    if(count==0)
	{
        printf("�ثe�S���ǥ͸�ơI\n");
    }
	else
	{
        printf("%-20s %-10s %-10s %-10s %-10s %-10s\n", 
               "�m�W","�Ǹ�","�ƾ�","���z","�^��","����");
        printf("------------------------------------------------------------\n");
        
        for(i=0;i<count;i++)
		{
            printf("%-20s %-10s %-10d %-10d %-10d %-10.1f\n", 
                   stu[i].name, stu[i].ID, 
                   stu[i].math, stu[i].phy, 
                   stu[i].eng, stu[i].ave);
        }
    }
    
    printf("\n�����N���^�D���...\n");
    getch();
}
void search_grade(student stu[],int count)
{
    char name[50];
    int i,found=0;
    system("cls");
    
    if(count==0)
	{
        printf("�ثe�S���ǥ͸�ơI\n");
    }
	else
	{
        printf("�п�J�n�j�M���ǥͩm�W:");
        fgets(name,50,stdin);
        name[strcspn(name,"\n")]='\0';
        
        for(i=0;i<count;i++)
		{
            if(strcmp(stu[i].name,name)==0)
			{
                printf("\n���ǥ͸��:\n");
                printf("%-20s %-10s %-10s %-10s %-10s %-10s\n", 
                       "�m�W","�Ǹ�","�ƾ�","���z","�^��","����");
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
            printf("\n�䤣��m�W�� %s ���ǥ͸�ơC\n",name);
        }
    }
    
    printf("\n�����N���^�D���...\n");
    getch();
}

	

 
