#include <stdio.h>

int main()
{
/*Variable : p = principle, r = rate if interest, n = time, i = profit */
int p, r, n, i;

/*input*/

printf("Enter Principle: "); // p = principle
scanf("%d", &p);
printf("Enter rate of interest: "); //r = rate
scanf("%d", &r);
printf("Enter time: "); //n = time
scanf("%d", &n);

i = (p * r * n) / 100; // i = prn

/*output*/
printf("Profit is %d\n:)\n", i);

return 0;
}
