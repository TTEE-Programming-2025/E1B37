#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int main(void)
{
	int password,i,attempts=0;
	for(i=0;i<=25;i++)//�ӤH����e�� 
	{
		printf("---****---\n");
	}
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
	//�e�X�D���
	char choice;
	while(1)
	{
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("|a.�e�X�����T����        |\n");
		printf("|b.��ܭ��k��            |\n");
		printf("|c.����                  |\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("�п�J�ﶵ:");
		fflush(stdin);
		scanf("%c",&choice);
	}
	
	
	
	system("pause");
	return 0;
}
