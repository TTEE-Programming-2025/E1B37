#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int main(void)
{
	int password,i,attempts=0;
	for(i=0;i<=25;i++)//個人風格畫面 
	{
		printf("---****---\n");
	}
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
	//畫出主選單
	char choice;
	while(1)
	{
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("|a.畫出直角三角形        |\n");
		printf("|b.顯示乘法表            |\n");
		printf("|c.結束                  |\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("請輸入選項:");
		fflush(stdin);
		scanf("%c",&choice);
	}
	
	
	
	system("pause");
	return 0;
}
