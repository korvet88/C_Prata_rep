/*Упражнение 9_6 драйвер функции принимает 3 адреса и изменяет адреса на порядок.
перыое - минимальное значение
второе среднее значение
третье максимальное значение.

фукция получает адреса.
Используется снятие косвенности.

разрешщение 1080p
Система windows
Выполнил Кобзев Д.В.
v 1.0
Выполняет замену значений на сортированные по возрастанию.
Драйвер работает один цикл.
*/
#include <stdio.h>
#include <windows.h>

void sort_of_3_numbers(double *first, double *second, double *fird);


int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double num1, num2, num3;                // значения вводимые пользователем

    printf("Введите 3 вещественных числоа\n");
    while ((scanf("%lf", &num1)) != 1)      // считывание первого значения
    {
        printf("Повторовите ввод числа num 1\n");
        scanf("%*s");
        num1 = -1.01;
    }
    printf("Аccept num1: %lf\n", num1);     // Эхо вывод
        while ((scanf("%lf", &num2)) != 1)  // считывание второго значения
    {
        printf("Повторовите ввод числа num 2\n");
        scanf("%*s");
        num2 = -1.01;
    }
    printf("Аccept num2: %lf\n", num2);     // Эхо вывод
        while ((scanf("%lf", &num3)) != 1)  // считывание третьего значения
    {
        printf("Повторовите ввод числа num 3\n");
        scanf("%*s");
        num3 = -1.01;
    }
    printf("Аccept num3: %lf\n", num3);     // Эхо вывод


    sort_of_3_numbers(&num1, &num2,&num3);

    printf("Теперь переменные имеют следующие значения: \n");
    printf("num1 = %.3lf\n"
           "num2 = %.3lf\n"
           "num3 = %.3lf\n", num1, num2, num3);


    printf("Программа завершена.\n");
    return 0;
}
void sort_of_3_numbers(double *first, double *second, double *fird)
{
    double temp_min;
    double temp_midle;
    double temp_max;        // переменные для временного хранения значений

    temp_min = *first;      // серия операндов по поиску наименьшего значения
    if (temp_min > *second)
        temp_min = *second;
    if (temp_min > *fird)
        temp_min = *fird;

    temp_max = *first;      // серия операндов по поиску максимального значения
    if (temp_max < *second)
        temp_max = *second;
    if (temp_max < *fird)
        temp_max = *fird;

    temp_midle = *second;   // серия операндов по поиску среднего значения
    if(*first != temp_min && *first != temp_max)
        temp_midle = *first;
    if(*second != temp_min && *second != temp_max)
        temp_midle = *second;
    if(*fird != temp_min && *fird != temp_max)
        temp_midle = *fird;

    *first = temp_min;      //замена значений по соответствующим указателям
    *second = temp_midle;
    *fird = temp_max;
}



