#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(int argc, char **argv)
{
	float avg(int sum, int N)
	{
		float sred = sum/N;
		return sred; 
	}

int N, i;
int *a;
printf("Введите количество оценок: ");
scanf("%d", &N);
a = (int*)malloc(N * sizeof(int));

for (i = 0; i < N; i++)
	{
		a[i] = 2 + rand() % (5 - 2 + 1);
		printf("%d \n", a[i]);
	}

int sum = 0;
for (i = 0; i < N; i++)
	{
		sum = sum + a[i];
	}

float sred;
sred = avg(sum, N);
printf("Средний балл аттестата: %.1f\n", sred);

if(sred >= 4.6)
	{
		printf("Ученик поступит в университет\n");
	}
else
	{
		printf("Ученик не поступит в университет\n");
	}

return 0;
}