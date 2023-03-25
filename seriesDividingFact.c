//******>>>> Printing 1!/2! + 3!/4! + 5!/6! = Sum Result

/*
//Using loop and swaping variables
#include <stdio.h>
int main()
{
    int n = 6, fact = 1, fact1 = 1, fact2 = 1;
    double sum = 0;
    for (int i = 1; i <= n; i += 2)
    {

        fact = fact2 * i;
        fact1 = fact;
        fact2 = fact1 * (i + 1);
        sum += fact1 / (double)fact2;
        if (i != n - 1)
            printf("%d!/%d! + ", i, i + 1);
        else
            printf("%d!/%d! = %lf", i, i + 1, sum);
    }
    return 0;
}
*/

/*
//Using loop and Array
#include <stdio.h>
int main()
{
    int n = 6, arr[6], fact = 1;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        arr[i - 1] = fact;
    }
    for (int j = 0; j < n; j += 2)
    {
        sum += (double)arr[j] / arr[j + 1];
    }
    printf("%lf", sum);

    return 0;
}
*/

/*
//Using Function(recursion), loop
#include <stdio.h>

int fact(int n)
{
    if (n < 0)
        return 0;
    if (n > 0)
        return n * fact(n - 1);
    else
        return 1;
}

int main()
{
    double sum = 0;
    for (int i = 1; i <= 8; i += 2)
    {
        sum += fact(i) / (double)fact(i + 1);
        if (i != 7)
            printf("%d!/%d! + ", i, i + 1);
        else
            printf("%d!/%d! = %lf", i, i + 1, sum);
    }
    return 0;
}
*/