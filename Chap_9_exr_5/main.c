/*���������� 9_5 - ������� �������� ��� �������� �� ������� �� ���.
������������
�������� ������ �.�.
���������� 1080p
������� windows
v 1.0
13.06.23
������ ��������. ������������ ������ ����������� � ������ � ������ ��������.
���� ���� ������ ��������

*/
#include <stdio.h>
#include <stdlib.h>
void change_to_max(double *, double *);

int main()
{
    double num1, num2;
    printf("input 2 material number or q for end of prigramm\n");
    while ((scanf("%lf", &num1)) != 1 || num1 < 0)
    {
        printf("Input num1 agayn\n");
        scanf("%*s");
        num1 = 0;
    }
    printf("Accept num 1: %lf\n", num1);
    while((scanf("%lf", &num2)) != 1 || num2 < 0)
    {
        printf("Input num2 agayn\n");
        scanf("%*s");
        num2 = 0;
    }
    printf("Accept num 2: %lf\n", num2);

    change_to_max(&num1, &num2);

    printf("number 1 %lf\n"
            "number 2 %lf\n", num1, num2);

    return 0;
}
void change_to_max(double *a, double *b)
{
    double temp;
    if (*a > *b)
        temp = *a;
    else
        temp = *b;
    *a = temp;
    *b = temp;
}
