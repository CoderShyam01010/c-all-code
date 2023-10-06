#include <stdio.h>
#include <string.h>
#include <conio.h>
int i, flag, type, value;
void num_pass()
{
    int i = 0;
    char ch;
    char user[20];
    char pass[20];
    printf("enter your password for login page: ");
    while (1)
    {   
        ch = getch();
        if (ch == '\r')
        {
            pass[i] = '\0'; // Null-terminate the password string
            break;
        }
        else if (ch == '\b' && i > 0)
        {                    // Check for Backspace key
            printf("\b \b"); // Erase the character from screen
            i--;
        }
        else
        {
            pass[i] = ch;
            i++;
            printf("*"); // Display an asterisk instead of the actual character
        }
    }
        printf("\nyour password successfully submitted\n");
    start:
        printf("please give ur password--");
        scanf("%s",user);
    value = strcmp(user, pass);
    if (value == 0)
    {
        printf("\ncorrect password! login successfully.");
    }
    else
    {
        printf("\nwrong password!\n");
        goto start;
    }
}
void char_pass()
{
    char user[20];
    char pass[20];
    int i = 0;
    char ch;
    printf("enter your password for login page: ");
    while (1)
    {
        ch = getch(); // Get a character without displaying it
        if (ch == '\r')
        {                   // Check for Enter key
            pass[i] = '\0'; // Null-terminate the password string
            break;
        }
        else if (ch == '\b' && i > 0)
        {                    // Check for Backspace key
            printf("\b \b"); // Erase the character from screen
            i--;
        }
        else
        {
            pass[i] = ch;
            i++;
            printf("*"); // Display an asterisk instead of the actual character
        }
    }
    printf("\nyour password successfully submitted\n");
start:
    printf("please give ur password--");
    scanf("%s", user);
    value = strcmp(user, pass);
    if (value == 0)
    {
        printf("\ncorrect password! login successfully.");
    }
    else
    {
        printf("\nwrong password!\n");
        goto start;
    }
}
void mix_pass()
{
    char user[20];
    char pass[20];
    int i = 0;
    char ch;
    printf("Enter password: ");
    while (1)
    {
        ch = getch(); // Get a character without displaying it
        if (ch == '\r')
        {                   // Check for Enter key
            pass[i] = '\0'; // Null-terminate the password string
            break;
        }
        else if (ch == '\b' && i > 0)
        {                    // Check for Backspace key
            printf("\b \b"); // Erase the character from screen
            i--;
        }
        else
        {
            pass[i] = ch;
            i++;
            printf("*"); // Display an asterisk instead of the actual character
        }
    }
    printf("\nyour password successfully submitted\n");
start:
    printf("please give ur password--");
    scanf("%s", user);
    int value = strcmp(user, pass);
    if (value == 0)
    {
        printf("\ncorrect password! login successfully.");
    }
    else
    {
        printf("\nwrong password!\n");
        goto start;
    }
}
void main()
{

start:
    printf("select type of passsword:\n1.Number password  2.character password  3.Mix password\n");
    printf("enter your type: ");
    scanf("%d", &type);
    if (type == 1)
    {
        num_pass();
    }
    else if (type == 2)
    {
        char_pass();
    }
    else if (type == 3)
    {
        mix_pass();
    }
    else
    {
        printf("wrong type!\n");
        goto start;
    }
}