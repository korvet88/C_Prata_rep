/*Упражнение 9_4 фуекция - вычислить среднеее гармоническое для двух значений
разреешние 1080p
система windows
v 1.0
Выполнена функция с возвращаемым значением.
драйвер имеет 1 цикл работы.

Выполнил Кобзев Д.В.
*/

#include <stdio.h>
double s_garmonic(double a, double b);

int main(void)
{
    double num1, num2;
    printf("input 2 material number or q for end of prigramm\n");
    while ((scanf("%lf", &num1)) != 1 || num1 < 0)
    {
        printf("Input num1 agayn\n");
        scanf("%*s");
        num1 = 0;
    }
    while((scanf("%lf", &num2)) != 1 || num2 < 0)
    {
        printf("Input num2 agayn\n");
        scanf("%*s");
        num2 = 0;
    }
    printf("Result number is: %lf\n", s_garmonic(num1, num2));
    while (getchar () != '\n')
        continue;

    printf("End of prigramm");
    return 0;
}
double s_garmonic(double a, double b)
{
    double s_inversion;
    double inversion_res;
    s_inversion = ((1/a) + (1/b)) / 2 ;
    inversion_res = 1 / s_inversion;
    return inversion_res;
}
