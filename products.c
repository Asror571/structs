#include <stdio.h>
#include <string.h>
struct Product{     // Struct yaratildi  va ma'lumotlar elen qilindi
    char name[30];
    char catagoriy[30];
    int price; 
    int quantity;
};
int main(){
    int user;
    printf("Qancha maxsulot ma'lumotini kiritasiz :");  scanf("%d",&user);  // Qancha maxsulot ma'lumotin i kiritishligi so'raldi
    struct Product product[user];    // struct yaratildi 

    for (int  i = 0; i < user; i++){     // For loop orqali masulot ma'lumotlari olindi
        printf("%d-Maxsulotni  nomini kiriting :", i + 1 );   
        scanf("%s", product[i].name);

        printf("%d-Katagoriyasini kiriting  :", i + 1);
        scanf("%s", product[i].catagoriy);

        printf("%d- Narxini kiriting :", i + 1);
        scanf("%f",&product[i].price);

        printf("%d-Qancha qolganligini  kiriting :", i + 1);
        scanf("%d", &product[i].quantity);

    }
     printf("Maxsulotlar :\n");
     printf("Nomi ||  Cataegory || Narxi || Soni\n"); 
      for (int  i = 0; i < user ; i++){      // For loop orqali tekshirib 
         if (!strcmp(product[i].catagoriy, "Diary" )){    // Agar maxsulot katigoriyasi Diary katigoriasiga teng bo'lsa 

            printf("%.11s", product[i].name);   // Natija chiqadi

            printf("%11s", product[i].price);

           printf("%11.1f", product[i].price);

           printf("%11d\n", product[i].quantity);
        
         }
         
    }
    

    
}
    