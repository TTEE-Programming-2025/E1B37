#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int id;
	char ch;
	printf("--------------------\n");
	printf("|                  |\n");
	printf("|                  |\n");
	printf("|                  |\n");
	printf("|     歡迎來到     |\n");
	printf("|    E1B37的作業   |\n");
	printf("|        **        |\n");
	printf("|       ****       |\n");
	printf("|      ******      |\n");
	printf("|     ********     |\n");
	printf("|    **********    |\n");
	printf("|   ************   |\n");
	printf("|  **************  |\n");
	printf("| **************** |\n");
	printf("|******************|\n");
	printf("|       | |        |\n");
	printf("|       | |        |\n");
	printf("|       | |        |\n");
	printf("|       | |        |\n");
	printf("--------------------\n");
	system("pause");
	system("CLS");
	
	printf("請輸入密碼:");
	scanf("%d",&id);
	if(id==2024)
	{
		printf("歡迎!!!");
		system("pause");
		system("CLS");
		printf("~~~~~~~~~~~~~~~~~~~~~\n");
		printf("|'A'...'Z':Uppercase|\n");
		printf("|'a'...'z':Lowercase|\n");
		printf("|'0'...'9':Digit    |\n");
		printf("|Otherwise:Your name|\n");
		printf("~~~~~~~~~~~~~~~~~~~~~\n");
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
