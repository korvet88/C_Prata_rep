/*���������� 9_10 ������ ��������� ���������� ����� � �������� ������� ��������� �� 2 �� 10
��������
���������� 1080p
������� windows
�������� ������ �.�.
v 0.2
����� ����� 20.06.23
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
    printf("������� ����� ��� �������� � ������� ��������� q ��� ����������\n");

    while((scanf("%d %d", &num, &base_num)) == 2)
    {


        to_base_n(num,base_num);
        putchar('\n');
        printf("��������� ���� ����� ��� �������� � ������� ���������,"
                "���� ������� ���� ��� ����������\n");
        while(getchar() != '\n')
            continue;
    }


    return 0;
}

int to_base_n(int number, int base_num_sys)
{
    int res;
    res = number % base_num_sys;  // ��������� ������� � ������, ��������� ����������
    if (number >= base_num_sys)
    {
        to_base_n(number/ base_num_sys, base_num_sys);

    }
    printf("%d", res);  // ����� ����� ��������, ������� � ���������� ���������� ������ ����������.

}











