/* Программа для вывода матрицы состоящей из одного символа.
функция принимает символ и два целых часла.

система windows
разершение 1080p
Выполнил Кобзев Д.В.
V 1.0 12.06.23
Есть флуктуации корректного ввода числа строк,
без считывания.
Воспроизводство затруднено.

*/
#include <stdio.h>
#include <windows.h>
void matrix(char ch, int string, int column);

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char cr = 'y';
    int str = 3;
    int col = 5;
    printf("Введите символ и два числа\n");
    while((cr =  getchar()) !='\n')
    {
        printf("Введите количество строк\n");
        while (scanf("%d", &str) != 1 || str < 0)
        {
            printf("Повторите ввод строки\n");
            scanf("%*s");
            str = 0;
        }
        printf("Accept str: %d\n", str); // принято строк
        printf("Введите количество столбцов\n");
        while (scanf("%d", &col) != 1 || col < 0)
        {
            printf("Повторите ввод столбцов\n");
            scanf("%*s");
            col = 0;
        }
        printf("Accept col: %d\n", col); // принято колонок
        matrix(cr,str,col);
        str = 0;
        col = 0;
        printf("Желаете еще одну матрицу?\n"
         "тогда введите символ и два числа\n"
         "Для завершения нажмите символ новой строки\n");
    }

    printf("Программа завершена\n");

    return 0;
}
void matrix(char ch, int string, int column)
{
    for(int i = 0; i < string; i++)
    {
        putchar('\n');

        for (int j = 0; j < column; j++)
        {
          putchar(' ');
          putchar(ch);
        }
    }
    putchar('\n');
    while (getchar() != '\n')
        continue;

}
