/*Упражнение 9_8 мсд функции возведения числа в степень

*/
#include <stdio.h>
#include <windows.h>
double power(double n, int p); //обхявление функции
int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, xpow;
    int exp;

    printf("Введите число и положительную целую степень,");
    printf("в которую\nчисло будет возведено. Для завершения программы");
    printf(" введите q.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x,exp);  //вызово функции
        printf("%.3g в степени %d равно %.5g\n", x, exp,xpow);
        printf("Введите следующую пару чисел или q для завершения.\n");
    }
    printf("Надеемся, что вы оценили это упражнение -- до свидания!\n");

    return 0;
}

double power(double n, int p) //определение функции
{
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++)
        pow *= n;
    return pow;  //возвращаемое значение pow
}
