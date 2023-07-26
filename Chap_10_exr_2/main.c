/*Упражнение 10_2 функции копирования массива 3 варианта
использовать запись через массив
использовать запись через указатели

разрешение 1080p
система windows
Выполнил Кобщев Д.В.
v 0.2
26.07.23
Сборка есть
первая фукция работает
v 0.3
Вторая функция работает

*/
#include <stdio.h>
void copy_arr(double [], double [], int );
void copy_ptr( double *, double * , int );
//void copy_ptrs(double *, double * , double (*[]) ) ;
int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5];
    double target2[5];
//    double target3[5];

    copy_arr(target1, source, 5);
    for (int i = 0; i < 5; i ++)
        printf("%0.1f ", target1[i]);
    putchar('\n');
    copy_ptr(&target2, &source, 5);
    for (int i = 0; i < 5; i ++)
        printf("%0.1f ", target2[i]);
    putchar('\n');

//    copy_ptrs(target3, &source, &source + 5) ;
    return 0;
}

void copy_arr(double ar_copy[], double ar_source[], int x)
{
    for (int i= 0; i < x; i++)
        ar_copy[i] = ar_source[i];

    printf("arr ok\n"); // fix me
}
void copy_ptr(double * ar_copy, double * ar_source, int x)
{
    for (int i= 0; i < x; i++)
        *(ar_copy + i) = *(ar_source + i );

    printf("ptr ok\n"); // fix me
}
//void copy_ptrs(target3, source, source + 5)
//{
//    printf("ptr ok"); // fix me
//}
