#include<stdio.h>

struct Student{    // struct yaratildi 
    char name[50];
    char  familia[50];
}; 

struct Subject{        // Fanlar uchun struct yaratil;di 
    char name[50];
};

struct Score{      // Ballari uchun
    float score;
    struct Subject subject;
    struct Student student; 
};
int main(){                                   // Fanlar e'lon qilib olindi 
    struct Subject fan1 = {"math"};
    struct Subject fan2 = {"Physics"};
    struct Subject fan3 = {"biology"};


    struct Student pupil1 = {"Abdurasul", "Salimov"};
    struct Student pupil2 = {"Asror", "Qurbonnazarov"};
    struct Student pupil3 = {"Aziz", "Akbarov"};
    struct Student pupil4 = {"Sallohidin", "Abdulazizov"};

    struct Score balls[5] = {           // Struct yaratildi va o'quvchilar bali elon qilindi 
        {95.1, fan1, pupil1},
        {70.0, fan2, pupil2},
        {80.1, fan3, pupil3},
        {60.1, fan1, pupil4},
        {79.1, fan3, pupil4},
    };
    float S = 0;                  //O`rtacha ball qiymatini hisoblab olish uchun verible yaratildi
    for (int i = 0; i < 5; i++){
        S += balls[i].score;
    }
    S = S / 5;          // O'ratacha qiymat topildi
    
    printf("O'rtacha bahodan yuqori ball to'plagan talabalar:\nFirst Name |  Last Name| Subject Name| Score\n");
    printf("-----------------------------------------------\n");
    //o`rtacha baldan yuqorisini tekshirib chiqarish un for loop
    for (int i = 0; i < 5; i++){
        if (S < balls[i].score) {                     // Shart bajarilsa natijalar chiqadi
            printf("%11s", balls[i].student.name);
            printf("| %10s", balls[i].student.familia);
            printf("| %12s", balls[i].subject.name);
            printf("| %.1f\n", balls[i].score);
        }
        
    }
}