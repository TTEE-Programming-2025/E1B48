#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    	printf("您需要幾個座位(1-4)?");
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
        printf("您滿意這個安排嗎?(y/n):");
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
    printf("您要預訂幾個座位?");
    scanf("%d",&num_seats);
    
    int n;
    for(n=0;n<num_seats;n++)
	{
        int row, col;
        char dash;
        printf("請輸入第%d個座位:", n+1);
        
        while (1)
		{
            if(scanf("%d%c%d",&row,&dash,&col) != 3 || dash != '-' || 
                row<1 || row>9 || col<1 || col>9)
			{
                printf("格式錯誤！請重新輸入:");
                while (getchar() != '\n');
                continue;
            }
            
            if(seats[row-1][col-1] != '-')
			{
                printf("重位！請選擇其他座位:");
                continue;
            }
            
            break;
        }
        
        seats[row-1][col-1]='@';
    }
    
    seat_map(seats);
    printf("按下任意鍵確認選擇");
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
    printf("確定要離開嗎?(y/n):");
    scanf("%c",&choice);
    
    while(choice!='y' && choice!='Y' && choice!='n' && choice!='N')
	{
        printf("輸入錯誤，請輸入 y 或 n:");
        scanf("%c",&choice);
    }
    
    return(choice=='y') ? 1:0;
}
