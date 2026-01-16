#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Asal_Sayi_Bul(int sayi)
{
    int i, j;
    for (j = sayi - 1; j >= 2; j--)
    {
        int asal = 1;
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                asal = 0;
                break;
            }
        }
        if (asal == 1)
        {
            break;
        }
    }
    return j;
}

int main()
{
    printf("%d", Asal_Sayi_Bul(11));
}
