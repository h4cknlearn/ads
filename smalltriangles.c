
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
	/* Sort an array a of the length n */
    
    // [1] array to store areas of triangle
    double areas[n];
    int i, j;
    double tmp_area;
    triangle tmp_tr; 
    
    // [2] calculate and store in the areas array
    for(i = 0; i < n; i++){
        double p = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
        areas[i] = sqrt((p)*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
    }
    
    
    // [3] sorting the areas
    for (i = 0; i < n - 1; i++) 
    {
       for (j = i + 1; j < n; j++) 
       {
            if (areas[i] > areas[j]) 
            {
                
                // Swap areas
                tmp_area = areas[i];
                areas[i] = areas[j];
                areas[j] = tmp_area;
                
                // Swap triangles
                tmp_tr = tr[i];
                tr[i] = tr[j];
                tr[j] = tmp_tr;
            
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
