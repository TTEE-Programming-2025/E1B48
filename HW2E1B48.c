#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>
void menu();
void drawTriangle();
void nine();
void yesorno();

int main()
{
	//Part1:�ӤH����e�� &�K�X���� 
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
	
	menu();
    
    char choice;
    printf("�п��(a��b��c):");
    choice=getche();
    printf("\n");
    switch(choice)
    {
    	case 'A':
    	case 'a':
    	drawTriangle();
    	getch();
		system("cls");
    	break;
    	
    	case 'B':
    	case 'b':
    	getch();
		system("cls");
    	nine();
    	break;
    	
    	case 'C':
    	case 'c':
    	yesorno();
		system("cls");
    	break;
    	
    	default:
    	break;
	}
	menu();
	return 0;
}

//Part2:�D���
void menu()
{
	printf("========================================\n");
    printf("|          �D���                      |\n");
    printf("|                                      |\n");
    printf("|  a. �e�X�����T����                   |\n");
    printf("|  b. ��ܭ��k��                       |\n");
    printf("|  c. ����                             |\n");
    printf("|                                      |\n");
    printf("========================================\n"); 
}

//Part3:ø�s�T����  
void drawTriangle() 
{
   	while(1)
	{
		char c;
		printf("�п�J'a'��'n'���r��:");
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
			printf("��J�D'a'��'n'���r���I�Э��s��J�I\n");
		}	
	}
	return 1;
}

//Part4:�E�E���k
void nine()
{
	while(1)
	{
		int n;
		printf("�п�J1��9�����n:");
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
			printf("��J�D1��9�����n�I�Э��s��J�I\n");
		}	
	}
	return 1;	
} 

//Part5:�O�_�~���J
void yesorno()
{
	while(1)
	{
		char c;
		printf("Continue?(y/n):");
		scanf(" %c",&c);
		if(c=='Y'||c=='y')
		{
			break;
		}	
		else if(c=='N'||c=='n')
		{
			printf("�����{��\n");
			exit(0);
		}
		else
		{
			printf("��J���~�I�Э��s��J�I\n");
		}	
	}
	return 1;
} 
	
