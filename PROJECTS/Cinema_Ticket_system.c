#include <stdio.h>
void main()
{
    int i, j, x, O;
    int ch;
    printf("Welcome to SD cinema Booking System!!!\n");
    printf("Choose tour seat!!!\n");
    int arr[10][10] = {0};
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c ", arr[i][j] == 0 ? 'O' : 'X');
        }
        printf("\n");
    }
    int seat;
    do
    {
        printf("Enter seat number u want to book....\n");
        scanf("%d", &seat);
        int row = (seat - 1) / 10;
        int column = (seat - 1) % 10;
        if(arr[row][column] !=0){
            printf("Seat already booked!!\n");
            break;
        }
        arr[row][column] = x;
        printf("seat %d booked successfully!\n", seat);
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 10; j++)
            {
                printf("%c ", arr[i][j] == 0 ? 'O' : 'X');
            }
            printf("\n");
        }
        printf("do u want to book 1 more? (Yes=1,No=0)");
        scanf("%d", &ch);
    } while (ch != 0);
    printf("Thank you for booking!!!");
}