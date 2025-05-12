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
	system("pause");
	return 0;
}
