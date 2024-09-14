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
	// float arr[n],k;
	triangle temp;
	float p, k;
	
	

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			p = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
			k = (tr[j].a + tr[j].b + tr[j].c) / 2.0;
			if (sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c)) > sqrt(p * (p - tr[j].a) * (p - tr[j].b) * (p - tr[j].c)))
			{   
				
				
				temp.a = tr[i].a;
				temp.b = tr[i].b;
				temp.c = tr[i].c;
				
				tr[i].a = tr[j].a;
				tr[i].b = tr[j].b;
				tr[i].c = tr[j].c;
				
				tr[j].a = temp.a;
				tr[j].b = temp.b;
				tr[j].c = temp.c;
				
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