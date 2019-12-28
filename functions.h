#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int Random(int k)
{
	int n;
	srand(time(NULL));
	n=rand()%k;
	return n;
}
void Switch(int *v, int *w)
{
	int aux;
	aux=*v;
	*v=*w;
	*w=aux;
}
void SelectionSort(int *v, int n)
{
	int i, j, min;

	for(i=0;i<n-1;i++) {
		min=i;
		for(j=i+1; j<=n; j++) {
			if(v[j]<v[min])
				min=j;
		}
		if(min!=i) {
			Switch((v+i),(v+min));
		}
	}
}
void ClearScreen()
{
	int i=0, j=0;
	for(j=0; j<20; j++) {
		for(i=0; i<80; i++)
			showCharAt(1+i, 32+j, ' ');
	}
}