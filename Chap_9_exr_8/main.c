/*���������� 9_8 ��� ������� ���������� ����� � �������

*/
#include <stdio.h>
#include <windows.h>
double power(double n, int p); //���������� �������
int main(void)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, xpow;
    int exp;

    printf("������� ����� � ������������� ����� �������,");
    printf("� �������\n����� ����� ���������. ��� ���������� ���������");
    printf(" ������� q.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x,exp);  //������ �������
        printf("%.3g � ������� %d ����� %.5g\n", x, exp,xpow);
        printf("������� ��������� ���� ����� ��� q ��� ����������.\n");
    }
    printf("��������, ��� �� ������� ��� ���������� -- �� ��������!\n");

    return 0;
}

double power(double n, int p) //����������� �������
{
    double pow = 1;
    int i;


    if (n != 0 && p > 0)
    {
        for (i = 1; i <= p; i++)
            pow *= n;
    }
    else if (n != 0 && p <0)
    {
        for (i = -1; i >= p; i--)
            pow *= 1/n;
    }
    else if( n == 0 && p != 0)
    {
        pow = 0;
        putchar('\n');
        printf("���������� ���������� ���� � ����� ������� ���� ����\n");
        putchar('\n');
    }
    else if( n != 0 && p == 0)
    {
        pow = 1;
        putchar('\n');
        printf("���������� ���������� ������ ����� � ������� ������ ���� ���� �������\n");
        putchar('\n');
    }
    else if( n == 0 && p == 0)
    {
        pow = 0;
        putchar('\n');
        printf("���������� ���������� ���� �  ������� ������ ���� �����������.\n"
            "����� ���������������� ��������: 1, � ��������� ���������� ����������.\n");
        putchar('\n');
    }
        return pow;  //������������ �������� pow
}
