#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int password,i,attempts=0;
	for(i=0;i<=20;i++)
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
	
	char choice,c,l;
	int j,k;
	while (1) 
	{
        system("CLS"); // 清除畫面
        printf("=====================\n");
        printf("| a.Available seats   |\n");
        printf("| b.Arrange for you   |\n");
        printf("| c.Choose by youself |\n");
        printf("| c.Exit              |\n");
        printf("=====================\n");
        printf("請輸入選項(a/b/c/d)：");

        choice = getch();
        printf("%c\n", choice);

        
    }
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
