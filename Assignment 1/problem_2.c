#include <stdio.h>
int main()
{
    char ch;
    int days;
    float rate, fine;

    scanf("%c %d %f", &ch, &days, &rate);
    fine = days * rate;

    printf("Library Receipt: \v\n");
    printf("Member Initial:%c \n", ch);
    printf("Days: \t %05d \n", days);
    printf("Fine: \t %.2f", fine);
     printf("\t\t Karan Paidumkar ERPID--RU-25-10650\n");
    return 0;
}