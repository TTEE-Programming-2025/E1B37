#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10


typedef struct {
    char name[20];
    char id[7];  
    int math;
    int physics;
    int english;
    float avg;
} Student;

Student students[MAX];
int n = 0;


void enterGrades();
void displayGrades();
void searchStudent();
void gradeRanking();
void clearScreen();

int main() {
    
    int password, i, attempts = 0;
    for (i = 0; i <= 20; i++)
        printf("*****----*****----*****----*****----*****----*****----*****----*****----*****----*****\n");

    
    while (attempts < 3) {
        printf("密碼為2025\n");
        printf("請輸入密碼: ");
        scanf("%d", &password);
        if (password == 2025) {
            printf("密碼正確\n");
            system("clear");  
            break;
        } else {
            attempts++;
            if (attempts < 3) {
                printf("密碼錯誤\n");
            } else {
                printf("密碼錯誤達三次，程式即將結束\n");
                return 0;
            }
        }
    }

    
    char choice;
    int running = 1;

    while (running) {
        clearScreen();
        printf("-----------[Grade System]------------\n");
        printf("a. Enter student grades\n");
        printf("b. Display student grades\n");
        printf("c. Search for student grades\n");
        printf("d. Grade ranking\n");
        printf("e. Exit system\n");
        printf("-------------------------------------\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a': enterGrades(); break;
            case 'b': displayGrades(); break;
            case 'c': searchStudent(); break;
            case 'd': gradeRanking(); break;
            case 'e': {
                printf("確定離開？(y/n): ");
                char confirm;
                scanf(" %c", &confirm);
                if (confirm == 'y') {
                    printf("系統結束。\n");
                    running = 0;
                }
                break;
            }
            default:
                printf("選項錯誤，請重新輸入。\n");
                getchar(); getchar(); 
                break;
        }
    }

    return 0;
}



