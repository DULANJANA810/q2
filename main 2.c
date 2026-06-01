#include <stdio.h>
#include <stdlib.h>

int main()
{
    int previousUnit=0;
    int newUnit=0;
    int consumUnit=0;
    float consumValue=0;
    float total=0;

    printf("Enter Previous meter Reading  : ");
    scanf("%d", &previousUnit);

    printf("Enter New meter Reading       : ");
    scanf("%d", &newUnit);

    consumUnit = (newUnit-previousUnit);

    consumValue = consumUnit*27.85;

    total = consumValue+400.00+250.00;

    printf("Consumed Unit in Month        : %d\n",consumUnit);
    printf("Consumed Value in Month       :%9.2f\n",consumValue);
    printf("Monthly Bill                  :%9.2f\n",total);

return 0;
}
