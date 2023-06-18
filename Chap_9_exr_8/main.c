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

    for (i = 1; i <= p; i++)
        pow *= n;
    return pow;  //������������ �������� pow
}
