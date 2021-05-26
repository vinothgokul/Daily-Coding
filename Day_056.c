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
void sort_by_area(triangle* tr, int n) {
	float s[n],p[n],temp1;
    triangle *temp = malloc(n * sizeof(triangle));
    for(int i=0;i<n;i++)
    {
        float a = tr[i].a,b = tr[i].b,c = tr[i].c;
        p[i] = (float) (a+b+c)/2;
        s[i] = (float) sqrt(p[i]*(p[i]-a)*(p[i]-b)*(p[i]-c));
        printf("%.2f ",s[i]);
    }
    printf("\n");
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]>s[j])
            {
                temp[i] = tr[i];
                tr[i] = tr[j];
                tr[j] = temp[i];

                temp1 = s[i];
                s[i] = s[j];
                s[j] = temp1;
            }
        }
    }

}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
