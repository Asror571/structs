#include <stdio.h>
#include <string.h>

// Author struct
struct Author {
    char name[30];        // Muallifning ismi
    int birth_year;       // Tug'ilgan yili
};

// Book struct
struct Book {
    char title[50];      
    float price;            
    int published_year;    
    struct Author author;   // Muallif haqida ma'lumot
};

// XXI asrda yozilgan kitoblarni chiqarish funksiyasi
void printXXIBooks(struct Book books[], int size) {
    printf("XXI asrda yozilgan kitoblar:\n");
    printf("Title          | Price  | Published Year | Author Name    | Author Birth Year\n");

    for (int i = 0; i < size; i++) {
        if (books[i].published_year >= 2000) {         // XXI asrda yozilgan kitoblarni aniqlash  va shart to'g'ri bo'lsa natijalar chiqadi
            printf("%-15s | %-6.1f | %-14d | %-15s | %-18d\n",
                   books[i].title,
                   books[i].price,
                   books[i].published_year,
                   books[i].author.name,
                   books[i].author.birth_year);
        }
    }
}

int main() {

    struct Author author01 = {"Alex Black", 1990};    //  3  muallif ma'lumoti
    struct Author author02 = {"Mary White", 1985};
    struct Author author03 = {"John Green", 1975};

    // 10 ta kitob
    struct Book books[10] = {                 // Kitoblar ro'yxati
        {"Book A", 25.0, 2021, author01},
        {"Book B", 30.0, 2023, author02},
        {"Book C", 15.0, 1997, author03},
        {"Book D", 20.0, 1880, author02},
        {"Book E", 35.0, 1994, author02},
        {"Book F", 40.0, 1995, author01},
        {"Book G", 10.0, 1790, author02},
        {"Book H", 50.0, 1890, author01},
        {"Book I", 45.0, 1990, author02},
        {"Book J", 60.0, 2005, author03}                            
    };

    int size = sizeof(books) / sizeof(books[0]);             // Massiv o'lchamini aniqlash

    printXXIBooks(books, size);                // XXI asrda yozilgan kitoblarni chiqarish

    return 0;
}
