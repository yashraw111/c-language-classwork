#include <stdio.h>

int main()
{
    int choice;
    int secondchoice;

    printf("Press 1 for English \nPress 2 for Hinglish \nPress 3 for Gujlish");
    printf("\nPlease enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Press 1 for Internet Recharge \nPress 2 for Top-up Recharge \nPress 3 for Special Recharge");
        printf("\nEnter your choice: ");
        scanf("%d", &secondchoice);

        switch (secondchoice)
        {
        case 1:
            printf("You have successfully done an Internet Recharge\n");
            break;
        case 2:
            printf("You have successfully done a Top-up Recharge.\n");
            break;
        case 3:
            printf("You have successfully done a Special Recharge\n");
            break;
        default:
            printf("Wrong choice\n");
        }
        break;

    case 2:
        printf("Internet recharge ke liye 1 dabao \nTop-up recharge ke liye 2 dabao \nSpecial recharge ke liye 3 dabao");
        printf("\nApna option enter kare: ");
        scanf("%d", &secondchoice);
        switch (secondchoice)
        {
        case 1:
            printf("Aapka Internet recharge successful ho gaya hai\n");
            break;
        case 2:
            printf("Aapka Top-up recharge successful ho gaya hai\n");
            break;
        case 3:
            printf("Aapka Special recharge successful ho gaya hai\n");
            break;
        default:
            printf("Galat choice\n");
        }
        break;
    case 3:
        printf("Internet recharge mate 1 dabavo \nTop-up recharge mate 2 dabavo \nSpecial recharge mate 3 dabavo");
        printf("\nTamari pasand enter karo: ");
        scanf("%d", &secondchoice);
        switch (secondchoice)
        {
        case 1:
            printf("Tamaru Internet recharge successful thai gayu chhe\n");
            break;
        case 2:
            printf("Tamaru Top-up recharge successful thai gayu chhe\n");
            break;
            
        case 3:
            printf("Tamaru Special recharge successful thai gayu chhe\n");
            break;
        default:
            printf("Khotu option\n");
        }
        break;

    default:
        printf("Invalid Choice. Please try again.\n");
    }

    return 0;
}
