#include<stdio.h>
#include<stdlib.h>


int main(void)
{
	int password,i,attempts=0;
	for(i=0;i<=20;i++)
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
	
	char choice,c,l;
	int j,k;
	while (1) 
	{
        system("CLS"); // �M���e��
        printf("=====================\n");
        printf("| a.Available seats   |\n");
        printf("| b.Arrange for you   |\n");
        printf("| c.Choose by youself |\n");
        printf("| c.Exit              |\n");
        printf("=====================\n");
        printf("�п�J�ﶵ(a/b/c/d)�G");

        choice = getch();
        printf("%c\n", choice);

        
    }
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	return 0;
}
