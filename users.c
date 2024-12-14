#include<stdio.h>

struct Person {             // Person nomili struckt yaratildi 
    char familia[50];
    char name[50];
    char addres[100]; 
    int age;
    char phonnumber[20];
};

int main(){
    int user;                             // Nechta foydalanuvchi ma'lumotini kiritishi so'raldi va olindi
    printf("Userlar sonini kiriting: ");
    scanf("%d", &user);       
    struct Person users[user];            // Ma'lumotlarni olish uchun users nomli struct yaratildi

    for (int i = 0; i < user; i++){          // Foydalanuvchidan ma'lumotlarni LOop orqali olindi 
        printf("%d-User ismini kiriting:", i + 1 );
        scanf("%s", users[i].name);

        printf("%d-User familiyasini kiriting:", i + 1);
        scanf("%s", users[i].familia);

        printf("%d-User manzilini kiriting:", i + 1);
        scanf("%s", users[i].addres);

        printf("%d-User tugilgan yilini kiriting:", i + 1);
        scanf("%d", &users[i].age);

        printf("%d-User tel nomirini kiriting:", i + 1);
        scanf("%s", users[i].phonnumber);
    }
 
    printf("Foydalanuvchilar Jadvali\n");                                  // Natijalar chiqarildi
    printf("First Name | Last Name | Birth Year | Location | Phone\n"); 

    for (int i = 0; i < user; i++){
        printf("%.11s", users[i].name);

        printf("%11s", users[i].familia);

        printf("%11s", users[i].addres);

        printf("%11d", users[i].age);

        printf("%11s\n", users[i].phonnumber);
    }
}