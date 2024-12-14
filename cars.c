#include<stdio.h>
#include  <string.h>

struct Cars {        // Foydalanuvchidan ma'lumot olish uchun struct yaratildi 
    char model[50];
    int price ;
    int  year;
    char color[50];
};

int main(){ 
    int user;    
    printf("Nechta masina   ma'lumotini  kiritasiz: ");   // Nechta mashina ma'lumot kiritishi so'raldi
    scanf("%d", &user);
    struct Cars cars[user];      // Struck yaratildi 

    for (int i = 0; i < user; i++){
        printf("%d-MAshin a modelini kiriting :", i + 1 );   // Mashinna ma'lumotlarni olindi
        scanf("%s", cars[i].model);

        printf("%d- Narxini kiriting :", i + 1);
        scanf("%d",&cars[i].price);

        printf("%d-Yilini ni kiriting :", i + 1);
        scanf("%d", &cars[i].year);

        printf("Rangini kiriting :", i + 1);
        scanf("%s", cars[i].color);

    }
    printf("\n");
    printf("Eng qimmat mashina  ma'lumoti\n");
    printf("Model | Narxi | Rangi || Yili \n");

       int  max =  cars[0].price;    // Eng katta sini 1 chisi deb olamiz

    for (int i = 0; i < user; i++){  
    if(cars[i].price  >= max){                // Agar maxdan katta bo'lsa natijalar chiqadi 
        printf("%.11s", cars[i].model);

        printf("%7d", cars[i].price);

        printf("%5d", cars[i].year);

        printf("%11s\n",cars[i].color);
    }

    }

}