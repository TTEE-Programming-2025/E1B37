#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int id;
	char ch;
	printf("--------------------");
	printf("|                  |");
	printf("|                  |");
	printf("|                  |");
	printf("|     歡迎來到     |");
	printf("|    E1B37的作業   |");
	printf("|        **        |");
	printf("|       ****       |");
	printf("|      ******      |");
	printf("|     ********     |");
	printf("|    **********    |");
	printf("|   ************   |");
	printf("|  **************  |");
	printf("| **************** |");
	printf("|******************|");
	printf("|       | |        |");
	printf("|       | |        |");
	printf("|       | |        |");
	printf("|       | |        |");
	printf("--------------------");
	system("pause");
	system("CLS");
	
	printf("請輸入密碼:");
	scanf("%d",&id);
	if(id==2024)
	{
		printf("歡迎!!!");
		system("pause");
		system("CLS");
		printf("~~~~~~~~~~~~~~~~~~~~~");
		printf("|'A'...'Z':Uppercase|");
		printf("|'a'...'z':Lowercase|");
		printf("|'0'...'9':Digit    |");
		printf("|Otherwise:Your name|");
		printf("~~~~~~~~~~~~~~~~~~~~~");
		printf("請輸入一個字元:");
		fflush(stdin);
		scanf("%c",&ch);
		if((ch>='A')&&(ch<='Z'))
			printf("Uppercase");
		else if((ch>='a')&&(ch<='z'))
			printf("Lowercase");
		else if((ch>='0')&&(ch<='9'))
			printf("Digit");
		else
			printf("E1B37陳融陞");
		system("pause");
		system("CLS");
	}
	else
	{
		printf("%c",'\a');
		printf("結束程式");
	}
	system("pause");
	return 0;
}
