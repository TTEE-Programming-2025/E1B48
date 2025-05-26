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
     	   printf("�L�Ī��ﶵ�A�Э��s��J�I\n");
     	   printf("�����N���~��...\n");
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

	

 
