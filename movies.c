#include <stdio.h>
#include <string.h>

// Janr uchun struktura
struct Genre {         
    char name[30];         // Janr nomi
    char description[100]; // Janr tavsifi
};


struct Movie {             // Kino uchun struktura yaratildi
    char name[50];   // Kino nomi
    float reyting;           // Kino reytingi
    int chiqarilgan_yili;     // Chiqarilgan yili
    struct Genre genre;      // Kino janri
};


void Action_movie(struct Movie movies[], int size) {    //Action" janridagi kinolarni ekranga chiqaruvchi funksiya
    printf("Action janridagi kinolar:\n");
    printf("Nomi          | Reytingi | Chiqarilgan yili | Genre Nomi  | Genre Description\n");
    
    for (int i = 0; i < size; i++) {
        if (!strcmp(movies[i].genre.name, "Action")) {                     // Agar Actionga teng bo'lsa    natijalarni chiqadi
            printf("%-15s | %-6.1f | %-12d | %-10s | %-18s\n",
            movies[i].name, 
            movies[i].reyting, 
            movies[i].chiqarilgan_yili, 
            movies[i].genre.name, 
            movies[i].genre.description);
        }
    }
}

int main() {
                                                                        
    struct Genre actionGenre = {"Action", "Qo'rqinch va janglarga boy"};
    struct Genre comedyGenre = {"Comedy", "Hazilga boy va yengil"};

    // Kinolar ro'yxati
    struct Movie movies[] = {
        {"Kino A", 8.5, 2022, actionGenre},
        {"Kino B", 9.0, 2023, actionGenre},
        {"Kino C", 7.3, 2021, comedyGenre},
        {"Kino D", 8.0, 2020, actionGenre}
    };

    int size = sizeof(movies) / sizeof(movies[0]); // Massiv o‘lchamini aniqlash

    
    Action_movie(movies, size);    // "Action" janridagi kinolarni ekranga chiqarish

    return 0;
}
