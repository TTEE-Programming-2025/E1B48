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
	
	//Part4:��J�r���P�_ 
	char input;
	printf("�п�J�@�Ӧr��:\n");
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
		printf("E1B48�����@\n");
	}
	
	system("pause");
	return 0;
}
//�߱o:�o���@�~���̤j��ì�O�Ƿ|�p��ϥ�github,�U�ФW�Ү�ppt���ӫܦn������ϻ����|github�O�n��u�{�v�����A�{�b�ں�O�b�\�殢�d�����W�F�a�����C
//    �~���J��̤j�x���N�O�^���O�Ӯt�A�ɭP�ڱ`�`�ݤ����׺���ܪ��F��쩳�O�ƻ�N��A���L�U�Ъ�ppt�������ܲM�����A�A�[�W�U�Ы᭱�����оǼv��
//    �ڤj�P������@�ǤF(���L�v���u���n�kQAQ)�C�U�л���github���@�Ӧn�B�O��M�O�H��@�A�����D���Ӫ��ҵ{�|���|���X�@�O�H�����Z���ݪ��A���e���O
//   ���n�J��޶���XD 
