#include <stdio.h>
#include <stdlib.h>

#define pmin 740
#define pmax 780
#define pnorm 760

int main()
{
	FILE *file = fopen("extask06.txt", "r");

int n;
printf("Введите количество дней: ");
scanf("%d", &n);

int pressure[n];

printf("arr: ");
for(int i = 0; i < n; i++)
{
	fscanf(file, "%d", &pressure[i]);
	printf("%d ", pressure[i]);
}
printf("\n");

int day;
printf("Введите номер дня для удаления: ");
scanf("%d", &day);

for(int i = 0; i < n; i++)
{
	if(i + 1 == day)
		pressure[i] = 0;
	printf("%d ", pressure[i]);
}
printf("\n");

int below = 0;  //ниже нормы
int exact = 0;  // нориа
int above = 0;  //выше нормы

for(int i = 0; i < n; i++)
{
	if(pressure[i] > 0)
	{
	if(pressure[i] < pnorm) below++;	
	if(pressure[i] == pnorm) exact++;	
	if(pressure[i] > pnorm) above++;
	}	
}

printf("below: %d\n", below);
printf("exact: %d\n", exact);
printf("above: %d\n", above);

printf("sor: ");
for (int i = n - 1; i >= 0; i--)
{
    for (int j = 0; j < i; j++)
    {
        if (pressure[j] > pressure[j + 1])
        {
            int tmp = pressure[j];
            pressure[j] = pressure[j + 1];
            pressure[j + 1] = tmp;
        }
    }
    printf("%d ", pressure[i]);
}
printf("\n");

return 0;
}
