// Restaurant Management
#include <stdio.h>

int main()
{
    int ch, qty;
    char cont;
    float bill = 0;

    do
    {
        printf("-----BHAVANA HOTEL-----");
        printf("\n1) Egg Fried rice\n2) Chapatti and chicken gravy\n3) Chicken Biryani\n4) Parotta and chicken salna\n5) Chicken 65");

        printf("\nEnter your choice:");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("\nEnter the quantity:");
                scanf("%d", &qty);
                bill += qty * 110;
                break;

            case 2:
                printf("Enter the quantity:");
                scanf("%d", &qty);
                bill += qty * 80;
                break;

            case 3:
                printf("\nEnter the quantity:");
                scanf("%d", &qty);
                bill += qty * 210;
                break;

            case 4:
                printf("\nEnter the quantity:");
                scanf("%d", &qty);
                bill += qty * 100;
                break;

            case 5:
                printf("\nEnter the quantity:");
                scanf("%d", &qty);
                bill += qty * 90;
                break;

            default:
                printf("\nInvalid input");
        }

        printf("\nDo you want to continue? Y/N:");
        scanf(" %c", &cont);

    } while(cont == 'y' || cont == 'Y');

    printf("\nTotal Bill = %.2f", bill);
    printf("\nTHANK YOU! VISIT AGAIN.");

    return 0;
}