/*���������� 9_6 ������� ������� ��������� 3 ������ � �������� ������ �� �������.
������ - ����������� ��������
������ ������� ��������
������ ������������ ��������.

������ �������� ������.
������������ ������ �����������.

����������� 1080p
������� windows
�������� ������ �.�.
v 1.0
��������� ������ �������� �� ������������� �� �����������.
������� �������� ���� ����.
*/
#include <stdio.h>
#include <windows.h>

void sort_of_3_numbers(double *first, double *second, double *fird);


int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double num1, num2, num3;                // �������� �������� �������������

    printf("������� 3 ������������ ������\n");
    while ((scanf("%lf", &num1)) != 1)      // ���������� ������� ��������
    {
        printf("����������� ���� ����� num 1\n");
        scanf("%*s");
        num1 = -1.01;
    }
    printf("�ccept num1: %lf\n", num1);     // ��� �����
        while ((scanf("%lf", &num2)) != 1)  // ���������� ������� ��������
    {
        printf("����������� ���� ����� num 2\n");
        scanf("%*s");
        num2 = -1.01;
    }
    printf("�ccept num2: %lf\n", num2);     // ��� �����
        while ((scanf("%lf", &num3)) != 1)  // ���������� �������� ��������
    {
        printf("����������� ���� ����� num 3\n");
        scanf("%*s");
        num3 = -1.01;
    }
    printf("�ccept num3: %lf\n", num3);     // ��� �����


    sort_of_3_numbers(&num1, &num2,&num3);

    printf("������ ���������� ����� ��������� ��������: \n");
    printf("num1 = %.3lf\n"
           "num2 = %.3lf\n"
           "num3 = %.3lf\n", num1, num2, num3);


    printf("��������� ���������.\n");
    return 0;
}
void sort_of_3_numbers(double *first, double *second, double *fird)
{
    double temp_min;
    double temp_midle;
    double temp_max;        // ���������� ��� ���������� �������� ��������

    temp_min = *first;      // ����� ��������� �� ������ ����������� ��������
    if (temp_min > *second)
        temp_min = *second;
    if (temp_min > *fird)
        temp_min = *fird;

    temp_max = *first;      // ����� ��������� �� ������ ������������� ��������
    if (temp_max < *second)
        temp_max = *second;
    if (temp_max < *fird)
        temp_max = *fird;

    temp_midle = *second;   // ����� ��������� �� ������ �������� ��������
    if(*first != temp_min && *first != temp_max)
        temp_midle = *first;
    if(*second != temp_min && *second != temp_max)
        temp_midle = *second;
    if(*fird != temp_min && *fird != temp_max)
        temp_midle = *fird;

    *first = temp_min;      //������ �������� �� ��������������� ����������
    *second = temp_midle;
    *fird = temp_max;
}



