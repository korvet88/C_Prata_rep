/*Упражнение 9_11 вывод чисел Фибоначи циклом.
разрешение 1080p
система windows
Выполнил Кобзев Д.В.
v 0.2
Старт работ 20.06.23
Понятие не имею как выводить эти числа циклом.
Нужно разбираться  в мат аппарате
Либо включать подсказки с МФТИ.

*/
#include <stdio.h>
#include <windows.h>
void Fibonuchi(int num);

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num;

    printf("Введите число\n");

    while((scanf("%d", &num)) == 1)
    {
        Fibonuchi(num);
        putchar('\n');
        printf("Повторите ввод числа\n");
        while(getchar() != '\n')
            continue;
    }


    return 0;
}
void Fibonuchi(int num)
{
    printf("Смотрел подсказки от МФТИ?");
}











