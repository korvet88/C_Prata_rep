/*���������� 9_11 ����� ����� �������� ������.
���������� 1080p
������� windows
�������� ������ �.�.
v 0.2
����� ����� 20.06.23
������� �� ���� ��� �������� ��� ����� ������.
����� �����������  � ��� ��������
���� �������� ��������� � ����.

*/
#include <stdio.h>
#include <windows.h>
void Fibonuchi(int num);

int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num;

    printf("������� �����\n");

    while((scanf("%d", &num)) == 1)
    {
        Fibonuchi(num);
        putchar('\n');
        printf("��������� ���� �����\n");
        while(getchar() != '\n')
            continue;
    }


    return 0;
}
void Fibonuchi(int num)
{
    printf("������� ��������� �� ����?");
}











