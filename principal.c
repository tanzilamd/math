#include <stdio.h>

int main()
{
/*Variable : p = principle, r = rate if interest, n = time, i = profit */
int p, r, n, i;

/*input*/

printf("Enter profit: "); // i = profit
scanf("%d", &i);
printf("Enter rate of interest: "); //r = rate
scanf("%d", &r);
printf("Enter time: "); //n = time
scanf("%d", &n);

p = (i * 100) / (r * n) ; // p = (i/(r*n))/100

/*output*/
printf("Principal is %d\n:)\n", p);

return 0;
}
