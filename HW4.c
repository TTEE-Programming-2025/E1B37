#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	void enterGrades();
	void displayGrades();
	void searchStudent();
	void gradeRanking();
	
	
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
	char choice;
	while(1)
	{
        system("cls");
        printf("-----------[Grade System]------------\n");
        printf("a. Enter student grades\n");
        printf("b. Display student grades\n");
        printf("c. Search for student grades\n");
        printf("d. Grade ranking\n");
        printf("e. Exit system\n");
        printf("-------------------------------------\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);
	}
	system("pause");
	return 0;
}



