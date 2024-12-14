#include <stdio.h>
#include <string.h>
struct Product{     // Struct yaratildi  va ma'lumotlar elen qilindi
    char name[30];
    char location[40];
    int price;
    int quantity;
};
int main(){
    int user;
    printf("Qancha maxsulot ma'lumotini kiritasiz :");  scanf("%d",&user);  // Qancha maxsulot ma'lumotin i kiritishligi so'raldi
    struct Product products[user];    // struct yaratildi 

    for (int  i = 0; i < user; i++){     // For loop orqali masulot ma'lumotlari olindi
        printf("%d-Maxsulotni  nomini kiriting :", i + 1 );   
        scanf("%s", products[i].name);

        printf("%d- Qayerda ishlab chiqarilgan :", i + 1);
        scanf("%s", products[i].location);

        printf("%d- Narxini kiriting :", i + 1);
        scanf("%f",&products[i].price);

        printf("%d-Qancha qolganligini  kiriting :", i + 1);
        scanf("%d", &products[i].quantity);

    }
     printf("Maxsulotlar :\n");
     printf("Nomi ||  LOCATION || Narxi || Soni\n"); 
      for (int  i = 0; i < user ; i++){      // For loop orqali tekshirib 
         if (!strcmp(products[i].location, "USA" )){    // Agar maxsulot Ishlab chiqarilgan joyi "USA " teng bo'lsa 

            printf("%.11s", products[i].name);   // Natija chiqadi

            printf("%11s", products[i].location);

           printf("%11.1f", products[i].price);

           printf("%11d\n", products[i].quantity);
        
         }
         
    }
    

    
}
    