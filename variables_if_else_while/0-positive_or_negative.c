#incluide<stdio.h>

int main (void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0) {
printf ("%lu is positive",n);
}
else if (n == 0) {
printf ("%lu is zero",n);
}
else (n < 0) {
printf ("%lu is negative",n);
}
return (0);
}