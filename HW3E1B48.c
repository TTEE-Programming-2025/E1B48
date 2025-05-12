#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	
	main_menu();

	return 0;
} 

//main_menu
void main_menu()
{
    printf("---[Booking System]---\n");
    printf("a. Available seats\n");
    printf("b. Arrange for you\n");
    printf("c. Choose by yourself\n");
    printf("d. Exit\n");
}

//a. Available seats
void seat(char seats[9][9])
{
    int i,j;
    for(i=0;i<9;i++)
	{
        for(j=0;j<9;j++)
		{
            seats[i][j]='-';
        }
    }
    
    //10 random reserved seats
    srand(time(NULL));
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

//print seat map
void seat_map(char seats[9][9])
{
    printf("\\123456789\n");
    
    int i,j;
    for(i=9-1;i>=0;i--)
	{
        printf("%d",i+1);
        for(j=0;j<9;j++)
		{
            printf("%c",seats[i][j]);
        }
        printf("\n");
    }
}

//b. Arrange for you
void arrange_seats(char seats[9][9])
{
    int num_seats;
    do
    {
    	printf("�z�ݭn�X�Ӯy��(1-4)?");
    	scanf("%d",&num_seats);
	}while(num_seats<1||num_seats>4);

    
    //Find available seats
    int found=0,i,j,k;
    for(i=0;i<9 && !found;i++)
	{
        for(j=0;j<=9-num_seats && !found;j++)
		{
            int available=1;
            for(k=0;k<num_seats;k++)
			{
                if(seats[i][j+k]!='-')
				{
                    available=0;
                    break;
                }
            }
            
            if(available)
			{
                //mark the seat
                for(k=0;k<num_seats;k++)
				{
                    seats[i][j+k]='@';
                }
                found=1;
            }
        }
    }
    
    if(found)
	{
		seat_map(seats);
        
        char choice;
        printf("�z���N�o�Ӧw�ƶ�?(y/n):");
        scanf("%c",&choice);
        
        if (choice=='y')
		{
            //Convert the seats to reserved
            int i,j;
            for(i=0;i<9;i++)
			{
                for(j=0;j<9;j++)
				{
                    if(seats[i][j]=='@')
					{
                        seats[i][j]='*';
                    }
                }
            }
        }
		else
		{
            //Cancel the seats
            for(i=0;i<9;i++)
			{
                for(j=0;j<9;j++)
				{
                    if(seats[i][j]=='@')
					{
                        seats[i][j]='-';
                    }
                }
            }
        }
    }
}

//c. Choose by yourself
void choose_seats(char seats[9][9])
{
    int num_seats;
    printf("�z�n�w�q�X�Ӯy��?");
    scanf("%d",&num_seats);
    
    int n;
    for(n=0;n<num_seats;n++)
	{
        int row, col;
        char dash;
        printf("�п�J��%d�Ӯy��:", n+1);
        
        while (1)
		{
            if(scanf("%d%c%d",&row,&dash,&col) != 3 || dash != '-' || 
                row<1 || row>9 || col<1 || col>9)
			{
                printf("�榡���~�I�Э��s��J:");
                while (getchar() != '\n');
                continue;
            }
            
            if(seats[row-1][col-1] != '-')
			{
                printf("����I�п�ܨ�L�y��:");
                continue;
            }
            
            break;
        }
        
        seats[row-1][col-1]='@';
    }
    
    seat_map(seats);
    printf("���U���N��T�{���");
    getchar(); getchar();
    
    // Convert the user's selection to reserved seats
    int i,j;
    for(i=0;i<9;i++)
	{
        for(j=0;j<9;j++)
		{
            if(seats[i][j]=='@')
			{
                seats[i][j]='*';
            }
        }
    }
}

//d.Exit
int system_exit()
{
    char choice;
    printf("�T�w�n���}��?(y/n):");
    scanf("%c",&choice);
    
    while(choice!='y' && choice!='Y' && choice!='n' && choice!='N')
	{
        printf("��J���~�A�п�J y �� n:");
        scanf("%c",&choice);
    }
    
    return(choice=='y') ? 1:0;
}
