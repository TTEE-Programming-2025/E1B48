#include <stdio.h> 
#include <stdlib.h>

int main()
{
	//Part1:�ӤH����e�� 
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
	printf("|            �P���Ѯv�P���Ǫ�          |\n");
	printf("|            ���U���n��� QAQ          |\n");
	printf("========================================\n");
	
	system("pause");
	system("cls");
	
	//Part2:�K�X���� 
	int password,correctpassword=2024;
	printf("�п�J4��Ʀr�K�X\n");
	scanf("%d",&password);
	
	if(password==correctpassword)
	{
		printf("�w��I\n");
		system("pause");
		system("cls");
	}
	else
	{
		printf("%c",'\a');
		printf("�K�X���~�I");
		system("pause");
		return 0;
	}
	
	//Part3:�D��� 
	printf("========================================\n");
	printf("| 'A'...'Z' : Uppercase                |\n");
	printf("| 'a'...'z' : Lowercase                |\n");
	printf("| '0'...'9' : Digit                    |\n");
	printf("| Otherwise : Your name                |\n");
	printf("========================================\n");

	
	system("pause");
	return 0;
}

