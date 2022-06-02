#include<stdlib.h>
#include <stdio.h>
#include <time.h>
int elementarne = 0;
int dominujaca = 0;
void wykonanie_quicksort(x, losowa, posortowana, odwrotna);
void wykonanie_bubblesort(x, losowa, posortowana, odwrotna);
void wykonanie_selectionsort(x, a, b, c);
void druk(int*, int);
void wypelnijTablice(int t[], int ta[], int tab[], int x) {
	int j = 0;
	for (int i = 0; i < x; i++) {
		t[i] = i;
		ta[i] = rand() % 1000;
	}
	for (int i = x - 1; i >= 0; i--) {
		tab[i] = t[j];
		j++;
	}
}
void quicksort(int* tab, int poczatek, int n){
		if (n > 1){			
			int liczba_mniejszych = 0;
			elementarne++;
			int liczba_wiekszych = 0;
			elementarne++;
			int koniec = poczatek + n;
			elementarne++;
			elementarne++;
			int t;			
			for (int i = (poczatek + 1); i < koniec; ++i){
				elementarne++;
				elementarne++;
				elementarne++;
				elementarne++;

				dominujaca++;
				dominujaca++;
				dominujaca++;
				if (tab[i] < tab[poczatek]){
					elementarne++;
					elementarne++;
					elementarne++;
					if (liczba_wiekszych > 0){
						elementarne++;						
						t = tab[poczatek + liczba_mniejszych + 1];
						elementarne++;
						elementarne++;
						elementarne++;
						elementarne++;
						tab[poczatek + liczba_mniejszych + 1] = tab[i];
						elementarne++;
						elementarne++;
						elementarne++;
						elementarne++;
						elementarne++;
						tab[i] = t;
						elementarne++;
						elementarne++;
					}
					++liczba_mniejszych;
					elementarne++;
				}
				else{
					++liczba_wiekszych;
					elementarne++;
				}
				elementarne++;
			}			
			t = tab[poczatek + liczba_mniejszych];
			elementarne++;
			elementarne++;
			elementarne++;
			tab[poczatek + liczba_mniejszych] = tab[poczatek];
			elementarne++;
			elementarne++;
			elementarne++;
			elementarne++;
			tab[poczatek] = t;
			elementarne++;
			elementarne++;
			quicksort(tab, poczatek, liczba_mniejszych);			
			quicksort(tab, koniec - liczba_wiekszych, liczba_wiekszych);			
		}
}
void bubble_sort(int* tab, int n)
{
	int i, j, t;


	for (i = n - 1; i > 0; i--){
		
		elementarne++;
		elementarne++;
		elementarne++;
		elementarne++;

		for (j = 1; j <= i; j++){
			
			elementarne++;
			elementarne++;
			elementarne++;

			dominujaca++;
			dominujaca++;
			dominujaca++;
			dominujaca++;

			elementarne++;
			elementarne++;
			elementarne++;
			elementarne++;
			if (tab[j-1] > tab[j])
			{
				t = tab[j];
				elementarne++;
				elementarne++;
				tab[j] = tab[j - 1];
				elementarne++;
				elementarne++;
				elementarne++;
				elementarne++;
				tab[j - 1] = t;
				elementarne++;
				elementarne++;
				elementarne++;
			}
			elementarne++;
		}
		elementarne++;
	}
}
void selection_sort(int* tab, int n){
	for (int i = n - 1; i > 0; i--) {
		elementarne++;
		elementarne++;
		elementarne++;
		elementarne++;
		int j_max = 0;
		elementarne++;	
		

		for (int j = 1;j <= i ;j++)
		{
			elementarne++;
			elementarne++;
			elementarne++;

			dominujaca++;
			dominujaca++;
			dominujaca++;

			elementarne++;
			elementarne++;
			elementarne++;
			if (tab[j]>tab[j_max])
			{
				j_max = j;
				elementarne++;
				int temp = tab[i];
				elementarne++;
				elementarne++;
				tab[i] = tab[j_max];
				elementarne++;
				elementarne++;
				elementarne++;
				tab[j_max] = temp;
				elementarne++;
				elementarne++;
			}
			elementarne++;
		}
		elementarne++;
	}
	

	
	
}

int main(void){
	srand(time(NULL));
	int posortowana[200], losowa[200], odwrotna[200];
	int  x = 10;

	while (x <= 200)
	{
		
		wypelnijTablice(posortowana, losowa, odwrotna, x);
		wykonanie_quicksort(x, losowa, posortowana, odwrotna);
		
		wypelnijTablice(posortowana, losowa, odwrotna, x);
		wykonanie_bubblesort(x, losowa, posortowana, odwrotna);
		
		wypelnijTablice(posortowana, losowa, odwrotna, x);
		wykonanie_selectionsort(x, losowa, posortowana, odwrotna);

		x = x + 10;
	}
	system("pause");
};


void druk(int* a, int b){	
	printf("\nliczba operacji elementarnych: %i", elementarne);
	printf("\nliczba operacji dominujacych: %i\n", dominujaca);	
}
void wykonanie_quicksort(x, losowa, posortowana, odwrotna) {
	elementarne = 0;
	dominujaca = 0;
	quicksort(losowa, 0, x);
	printf("\nzlozonosc quicksort dla tablicy z losowymi liczbami dla n rownego %i", x);
	druk(losowa, x);
	elementarne = 0;
	dominujaca = 0;
	quicksort(posortowana, 0, x);
	printf("\nzlozonosc quicksort dla tablicy z posortowanymi liczbami dla n rownego %i", x);
	druk(posortowana, x);
	elementarne = 0;
	dominujaca = 0;
	quicksort(odwrotna, 0, x);
	printf("\nzlozonosc quicksort dla tablicy z posortowanymi odwrotnie liczbami dla n rownego %i", x);
	druk(odwrotna, x);
	elementarne = 0;
	dominujaca = 0;
}
void wykonanie_bubblesort(x, losowa, posortowana, odwrotna) {
	elementarne = 0;
	dominujaca = 0;
	bubble_sort(losowa, x);
	printf("\nzlozonosc bubblesort dla tablicy z losowymi liczbami dla n rownego %i", x);
	druk(losowa, x);
	elementarne = 0;
	dominujaca = 0;
	bubble_sort(posortowana, x);
	printf("\nzlozonosc bubblesort dla tablicy z posortowanymi liczbami dla n rownego %i", x);
	druk(posortowana, x);
	elementarne = 0;
	dominujaca = 0;
	bubble_sort(odwrotna, x);
	printf("\nzlozonosc bubblesort dla tablicy z posortowanymi odwrotnie liczbami dla n rownego %i", x);
	druk(odwrotna, x);
	elementarne = 0;
	dominujaca = 0;
}
void wykonanie_selectionsort(x, a, b, c) {
	elementarne = 0;
	dominujaca = 0;
	selection_sort(a, x);
	printf("\nzlozonosc sortowania przez wybor dla tablicy z losowymi liczbami dla n rownego %i", x);
	druk(a, x);
	elementarne = 0;
	dominujaca = 0;
	selection_sort(b, x);
	printf("\nzlozonosc sortowania przez wybor dla tablicy z posortowanymi liczbami dla n rownego %i", x);
	druk(b, x);
	elementarne = 0;
	dominujaca = 0;
	selection_sort(c, x);
	printf("\nzlozonosc sortowania przez wybor dla tablicy z posortowanymi odwrotnie liczbami dla n rownego %i", x);
	druk(c, x);
	elementarne = 0;
	dominujaca = 0;
}