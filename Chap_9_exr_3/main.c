/* ��������� ��� ������ ������� ��������� �� ������ �������.
������� ��������� ������ � ��� ����� �����.

������� windows
���������� 1080p
�������� ������ �.�.
V 1.0 12.06.23
���� ���������� ����������� ����� ����� �����,
��� ����������.
��������������� ����������.

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
    printf("������� ������ � ��� �����\n");
    while((cr =  getchar()) !='\n')
    {
        printf("������� ���������� �����\n");
        while (scanf("%d", &str) != 1 || str < 0)
        {
            printf("��������� ���� ������\n");
            scanf("%*s");
            str = 0;
        }
        printf("Accept str: %d\n", str); // ������� �����
        printf("������� ���������� ��������\n");
        while (scanf("%d", &col) != 1 || col < 0)
        {
            printf("��������� ���� ��������\n");
            scanf("%*s");
            col = 0;
        }
        printf("Accept col: %d\n", col); // ������� �������
        matrix(cr,str,col);
        str = 0;
        col = 0;
        printf("������� ��� ���� �������?\n"
         "����� ������� ������ � ��� �����\n"
         "��� ���������� ������� ������ ����� ������\n");
    }

    printf("��������� ���������\n");

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
