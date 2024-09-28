#include <stdio.h>

int main()
{
    int a, b;

    printf("choose your language = ");
    scanf("%d", &a);

    printf("press 1 to hindi language ,\npress 2 to english language,\npress 3 to gujarati ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        switch (a)
        {
        case 1:
            printf("offer ke liye 1 dabaye");
            break;
        case 2:
            printf("information ke liye 2 dabaye");
            break;
        case 3:
            printf("recharge ke liye 3 dabaye");
            break;

        default:
            printf("plz num chech kijiye");
            break;
        }
    case 2:
        switch (a)
        {
        case 1:
            printf("press 1 to offer");
            break;
        case 2:
            printf("press 2 to information");
            break;
        case 3:
            printf("press 3 to recharge");
            break;
        default:
            printf("plz check the number");
            break;
        }
    case 3:
        switch (a)
        {
        case 1:
            printf("offer mate 1 dabavo");
            break;
        case 2:
            printf("information mate 2 dabavo");
            break;
        case 3:
            printf("recharge mate 3 dabavo");
            break;

            break;

        default:
            ("sachi mahiti nakho");
            break;
        }
    }
}