#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle *tr, int n)
{
    /**
     * Sort an array a of the length n
     */

    int temp1, temp2, temp3;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            float p1 = (tr[i].a + tr[i].b + tr[i].c) / 2, p2;
            float s1 = sqrt(p1 * (p1 - tr[i].a) * (p1 - tr[i].b) * (p1 - tr[i].c)), s2;
            p2 = (tr[j].a + tr[j].b + tr[j].c) / 2;
            s2 = sqrt(p2 * (p1 - tr[j].a) * (p2 - tr[j].b) * (p2 - tr[j].c));
            if (s1>s2)
            {

                temp1 = tr[i].a;
                temp2 = tr[i].b;
                temp3 = tr[i].c;
                tr[i].a = tr[j].a;
                tr[i].b = tr[j].b;
                tr[i].c = tr[j].c;
                tr[j].a = temp1;
                tr[j].b = temp2;
                tr[j].c = temp3;
            }
        }
    }
}   

    int main()
    {
        int n;
        scanf("%d", &n);
        triangle *tr = malloc(n * sizeof(triangle));
        for (int i = 0; i < n; i++)
        {
            scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
        }
        sort_by_area(tr, n);
        for (int i = 0; i < n; i++)
        {
            printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
        }
        return 0;
    }