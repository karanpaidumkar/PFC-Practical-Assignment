#include <stdio.h>

int main() {
    int p, n;
    float d, total, discount;
    scanf("%d %d %f", &p, &n, &d);
    discount= (p * n * d) / 100;
    total = (p * n) - discount;
    printf("*** DIWALI FIREWORKS ***\n");
    printf("Item Price:\t%d rupees\n", p);
    printf("Quantity:\t%d\n", n);
    printf("Discount:\t%.2f%%\n", d);
    printf("Total:\t%.2f rupees\n", total);
    printf("\a");
     printf("\t\t Karan Paidumkar ERPID--RU-25-10650\n");
    return 0;
}
