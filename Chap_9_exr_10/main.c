/*Упражнение 9_10 фукция переводит полученное число и значение системы счисления от 2 до 10
рекурсия
разрешение 1080p
система windows
Выполнил Кобзев Д.В.
v 0.2
старт работ 20.06.23
v 1.0
*/
#include <stdio.h>
#include <windows.h>

int to_base_n(int number, int base_num_sys);

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num, ch;
    int base_num;
    printf("Введите число для перевода и систему счисления q для завершения\n");

    while((scanf("%d %d", &num, &base_num)) == 2)
    {


        to_base_n(num,base_num);
        putchar('\n');
        printf("Повторите ввод числа для перевода и системы счисления,"
                "либо нажмите ввод для завершения\n");
        while(getchar() != '\n')
            continue;
    }


    return 0;
}

int to_base_n(int number, int base_num_sys)
{
    int res;
    res = number % base_num_sys;  // поллучить остаток в первую, созданную переменную
    if (number >= base_num_sys)
    {
        to_base_n(number/ base_num_sys, base_num_sys);

    }
    printf("%d", res);  // вывод после рекурсии, начиная с переменной последнего уровня погружения.

}











