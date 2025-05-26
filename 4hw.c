#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

// 學生結構
typedef struct {
    char name[20];
    char id[7];  // 學號6碼
    int math;
    int physics;
    int english;
    float avg;
} Student;

Student students[MAX];
int n = 0;

// 函數原型
void enterGrades();
void displayGrades();
void searchStudent();
void gradeRanking();
void clearScreen();

int main() {
    // 歡迎畫面（畫 20 行圖）
    int password, i, attempts = 0;
    for (i = 0; i <= 20; i++)
        printf("*****----*****----*****----*****----*****----*****----*****----*****----*****----*****\n");

    // 密碼輸入機制，最多3次
    while (attempts < 3) {
        printf("密碼為2025\n");
        printf("請輸入密碼: ");
        scanf("%d", &password);
        if (password == 2025) {
            printf("密碼正確\n");
            system("clear");  // Windows 請改成 system("CLS");
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

    

    return 0;
}


