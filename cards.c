#include <stdio.h>
#include <string.h>
struct Card{     // Struct yaratildi  va ma'lumotlar elen qilindi
    char holder_name[30];
    char card_number[30];
    int card_expery;
    int cvv;
};
int main(){
    int user;
    printf("Qancha carta ma'lumotini kiritasiz :");  scanf("%d",&user);  // Qancha maxsulot ma'lumotin i kiritishligi so'raldi
    struct Card cards[user];    // struct yaratildi 

    for (int  i = 0; i < user; i++){     // For loop orqali masulot ma'lumotlari olindi
        printf("%d-  Karta egasini  kiriting :", i + 1 );   
        scanf("%s", cards[i].holder_name);

        printf("%d-Kartani numberini  kiriting  :", i + 1);
        scanf("%s", cards[i].card_number);

        printf("%d- Qachon olonganini kiriting  :", i + 1);
        scanf("%d", &cards[i].card_expery);

        printf("%d- Paswordni kiritgn :", i + 1);
        scanf("%d--", &cards[i].cvv);

    }
     printf("Cartalar  :\n");
     printf("Carta egasi ||  card number|| Tugash mudati || Password\n"); 
      for (int  i = 0; i < user ; i++){      // For loop orqali tekshirib 
         if (cards[i].card_expery >= 2025){    // Agar maxsulot katigoriyasi Diary katigoriasiga teng bo'lsa 

            printf("%.11s", cards[i].holder_name);   // Natija chiqadi

            printf("%11s", cards[i].card_number);

           printf("%11d", cards[i].card_expery);

           printf("%11d\n", cards[i].cvv);
        
         }
    }
    

    
}
    