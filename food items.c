#include <stdio.h>
int main()
{
 printf("food item:\n1.apple\n2.pizza\n3.pasta\n4.noodle\n5.sandwich");
 int choice=0;
 scanf("%d",&choice);
    switch( choice)
    {
        case 1:
        printf("\nfood item-apple \n prize -100");
        break;
        case 2:
        printf("\nfood item-pizza \n prize -239");
          break;
        case 3:
        printf("\nfood item-pasta \n prize -179");
          break;
        case 4:
        printf("\nfood item-noodle \n prize -99");
          break;
        case 5:
        printf("\nfood item-sandwich  \n prize -149");
          break;
        default:
        printf("\nfood item-invalid choice \n prize -00");
    }
    return 0;
}
