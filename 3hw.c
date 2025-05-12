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
		printf("密碼為2025\n");
		printf("請輸入密碼:");
		scanf("%d",&password);
		if(password==2025)
		{
			printf("密碼正確:");
			system("CLS");
			break;
		}
		else
		{
			attempts++;
			if(attempts<3)
			{
				printf("密碼錯誤");
			}
			else
			{
				printf("密碼錯誤達三次，程式即將結束");
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
        printf("請選擇：");
        scanf(" %c", &choice);

        // 顯示座位圖
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
        else if (choice == 'b') {
            int need;
            printf("需要幾個座位？(1~4)：");
            scanf("%d", &need);
            if (need < 1 || need > 4) {
                printf("數量不合法。\n");
                continue;
            }

            int found = 0;
            for (i = 0; i < 9 && found == 0; i++) {
                for (j = 0; j <= 9 - need; j++) {
                    int ok = 1;
                    for (k = 0; k < need; k++) {
                        if (seats[i][j + k] != 0) {
                            ok = 0;
                            break;
                        }
                    }
                    if (ok) {
                        for (k = 0; k < need; k++)
                            seats[i][j + k] = 2;
                        found = 1;
                        break;
                    }
                }
            }

            if (!found) {
                printf("找不到連續座位。\n");
                continue;
            }

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

            char ok;
            printf("是否滿意這些座位？(y/n)：");
            scanf(" %c", &ok);
            for (i = 0; i < 9; i++) {
                for (j = 0; j < 9; j++) {
                    if (seats[i][j] == 2) {
                        if (ok == 'y') seats[i][j] = 1;
                        else seats[i][j] = 0;
                    }
                }
            }
        }

        
    }
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
