#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int password,is,attempts=0,i,j,k;
	int seats[9][9];
	int wrong=0;
	for(is=0;is<=20;is++)
	printf("*****----*****----*****----*****----*****----*****----*****----*****----*****----*****----*****----*****----*****\n");
	
	while(attempts<3)
	{
		printf("�K�X��2025\n");
		printf("�п�J�K�X:");
		scanf("%d",&password);
		if(password==2025)
		{
			printf("�K�X���T:");
			system("CLS");
			break;
		}
		else
		{
			attempts++;
			if(attempts<3)
			{
				printf("�K�X���~");
			}
			else
			{
				printf("�K�X���~�F�T���A�{���Y�N����");
			}
		}
	}
	for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++)
            seats[i][j] = 0;

    char choice;
    while (1) {
        printf("\n---------[Booking System]---------\n");
        printf("a. Available seats\n");
        printf("b. Arrange for you\n");
        printf("c. Choose by yourself\n");
        printf("d. Exit\n");
        printf("----------------------------------\n");
        printf("�п�ܡG");
        scanf(" %c", &choice);

        // ��ܮy���
        if (choice == 'a') {
            printf(" 123456789\n");
            for (i = 8; i >= 0; i--) {
                printf("%d", i + 1);
                for (j = 0; j < 9; j++) {
                    if (seats[i][j] == 0) printf("-");
                    else if (seats[i][j] == 1) printf("*");
                    else if (seats[i][j] == 2) printf("@");
                }
                printf("\n");
            }
        }

        
    }
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
