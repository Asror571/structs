#include<stdio.h>
#include  <string.h>

struct Phone {        // Foydalanuvchidan ma'lumot olish uchun struct yaratildi 
    char name[50];
    char barand[40];
    int price ;
    char ram[40];
    char color[50];
};

int main(){ 
    int user;    
    printf("Nechta telefon  ma'lumotini  kiritasiz: ");   // Nechta telefon ma'lumot kiritishi so'raldi
    scanf("%d", &user);
    struct Phone phones[user];      // Struck yaratildi 

    for (int i = 0; i < user; i++){
        printf("%d-Telefon nomini kiriting :", i + 1 );   // Telefon ma'lumotlarni olindi
        scanf("%s", phones[i].name);

        printf("%d-Barand nomini kiriting :", i + 1);
        scanf("%s", phones[i].barand);

        printf("%d- Narxini kiriting :", i + 1);
        scanf("%d",&phones[i].price);

        printf("%d-Ram ni kiriting :", i + 1);
        scanf("%s", phones[i].ram);

        printf("Rangini kiriting :", i + 1);
        scanf("%s", phones[i].color);

    }
    printf("\n");
    printf("Telefonlar Jadvali\n");
    printf("Telefon Name | Brend  Name | Narxi  | Ram  | Color\n");
    int found;


    for (int i = 0; i < user; i++){   // loop aylanadi va najijani chiqaradi 
    if(phones[i].price > 500){     // Agar narx 500 dan yo'qori bo'lsa 
          found = 1;               // found = 1 ga teng bo'ladi va atijani yani 500 dan yuqori bo'lgan natijani chiqaradi 
        printf("%.11s", phones[i].name);

        printf("%11s", phones[i].barand);

        printf("%11d", phones[i].price);

        printf("%11s", phones[i].ram);

        printf("%11s\n",phones[i].color);
    }

}
    if (!found)    // Agar fount topilmasa yani 0 ga teng bo'lib qolsa 
        printf(" Mavjud emas");     

}