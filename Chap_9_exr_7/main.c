/*���������� 9_7 ������� ��������� ������, ���������� ��������������� � ��������
� ��������� ������ ������� "-1"
������ ��� ��������.
���������� 1080p
������� windows
�������� ������ �.�.
v 0.2
����� ����� 14.06.23

*/
#include <stdio.h>
int order_alfa(int ch);

int main(void)
{
    int ch;
    while ((ch = getchar()) != EOF)
    {
        printf("symbol %c is %d number in alafabet\n", ch, order_alfa(ch));
        while (getchar() != '\n')
            continue;

    }

    return 0;
}
int order_alfa(int ch)
{

    int number_in_alfabet;
    if (ch >= 97 && ch <=122)
    {
        number_in_alfabet = ch - 96;
    }
    else if (ch >= 65 && ch <=122)
    {
        number_in_alfabet = ch - 64;
    }
    else
        number_in_alfabet = -1;

    return number_in_alfabet;
}
