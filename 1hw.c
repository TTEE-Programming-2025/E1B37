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
	printf("|     �w��Ө�     |");
	printf("|    E1B37���@�~   |");
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
	
	printf("�п�J�K�X:");
	scanf("%d",&id);
	if(id==2024)
	{
		printf("�w��!!!");
		system("pause");
		system("CLS");
		printf("~~~~~~~~~~~~~~~~~~~~~");
		printf("|'A'...'Z':Uppercase|");
		printf("|'a'...'z':Lowercase|");
		printf("|'0'...'9':Digit    |");
		printf("|Otherwise:Your name|");
		printf("~~~~~~~~~~~~~~~~~~~~~");
		printf("�п�J�@�Ӧr��:");
		fflush(stdin);
		scanf("%c",&ch);
		if((ch>='A')&&(ch<='Z'))
			printf("Uppercase");
		else if((ch>='a')&&(ch<='z'))
			printf("Lowercase");
		else if((ch>='0')&&(ch<='9'))
			printf("Digit");
		else
			printf("E1B37���İ�");
		system("pause");
		system("CLS");
	}
	else
	{
		printf("%c",'\a');
		printf("�����{��");
	}
	system("pause");
	return 0;
}
