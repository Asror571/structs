#include <stdio.h>
#include <string.h>

struct Stadium {          // Struct yaratildi 
    char name[50];
    int capacity;
};


struct Team {                   // Jamoa uchun struct yaratildi
    char team_name[50];
    char coach[50];
    int players_count;
    int founded_year;
    struct Stadium stadium;     
};

int main() {
    
    struct Team teams[5] = {                         // Jamolar massivlariu elenon qilindi
        {"Team A", "Coach A", 11, 1950, {"Stadium A", 50000}},
        {"Team B", "Coach B", 13, 1970, {"Stadium B", 60000}},
        {"Team C", "Coach C", 10, 1930, {"Stadium C", 40000}},
        {"Team D", "Coach D", 15, 1980, {"Stadium D", 45000}},
        {"Team E", "Coach E", 12, 1945, {"Stadium E", 55000}}
    };

    int eski_index = 0;    // Eng eski jamoani topish uchun verblie yaratildi 
    for (int i = 1; i < 5; i++) {
        if (teams[i].founded_year < teams[eski_index].founded_year) {  // shart bajarilsa  natijalar chiqaradi
            eski_index = i;
        }
    }
                                                // Eng eski jamoani ma'luotlarini chiqarish
    printf("Eng eski jamoa:\n");
    printf("Team Name    | Coach       | Players Count | Founded Year | Stadium Name\n");
    printf("----------------------------------------------------------------------\n");
    printf("%-12s| %-12s| %-14d| %-12d| %-12s\n",
           teams[eski_index].team_name,
           teams[eski_index].coach,
           teams[eski_index].players_count,
           teams[eski_index].founded_year,
           teams[eski_index].stadium.name);

    return 0;
}
