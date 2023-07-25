/*Упражнение 9_9 фун. возведения в степень рекурсивно
разрешение 1080P
система windows
выполнил Кобзев Д.В.
v - 0.2
старт работ 20.06.23
v - 1. 0
вывод чистый.
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



    if( n == 0 && p != 0)
    {
        pow = 0;
        putchar('\n');
        printf("Резфультат возведения нуля в любую степень есть нуль\n");
        putchar('\n');
    }
    else if( n != 0 && p == 0)
    {
        pow = 1;
        putchar('\n');
        printf("Резфультат возведения любого числа в степень равную нулю есть единица\n");
        putchar('\n');

    }
    else if( n == 0 && p == 0)
    {
        pow = 0;
        putchar('\n');
        printf("Резфультат возведения нуля в  степень равную нулю неопределен.\n"
            "Будет использоваваться значение: 1, в качествве результата вычисления.\n");
        putchar('\n');
    }
    else if (n != 0 && p >= 1)
    {
            pow *= n * power(n, p-1);
    }
    else if (n != 0 && p <=(-1))
    {
            pow *= (1/n) * power(n, p+1);
    }

        return pow;  //возвращаемое значение pow
}
