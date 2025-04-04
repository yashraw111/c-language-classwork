// #include<stdio.h>

// int main(){
//     int choice;
//     int secondchoice;

//     printf("press the 1 for recharge \npress the 2 for cancel recharge");
//     printf("\nplease enter the number:");
//     scanf("%d",&choice);
//     switch(choice){
//         case 1:
//         printf("press the 1 for confirm recharge \npress the 2 for cancel recharge ");
//         scanf("%d",&secondchoice);
//         switch(secondchoice){
//             case 1:
//             printf("recharge successfully");
//             break;
//             case 2:
//             printf("cancel recharge");
//             break;
//             default:
//             printf("nested first default");
//         }
//         break;
//         case 2:
//         printf("SECOND");
//         break;
//         default:
//         printf("wrong choice");
//     }

// }

#include <stdio.h>

int main()
{
    int choice;
    int secondchoice;

    printf("Press 1 for Recharge\nPress 2 to Cancel Recharge\n");
    printf("Please enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Press 1 to Confirm Recharge\nPress 2 to Cancel Recharge\n");
        printf("Enter your choice: ");
        scanf("%d", &secondchoice);

        switch (secondchoice)
        {
        case 1:
            printf("Recharge Successful!\n");
            break;
        case 2:
            printf("Recharge Canceled.\n");
            break;
        default:
            printf("Invalid Choice. Please try again.\n");
        }
        break;

    case 2:
        printf("Recharge Process Canceled.\n");
        break;

    default:
        printf("Invalid Choice. Please try again.\n");
    }

    return 0;
}
