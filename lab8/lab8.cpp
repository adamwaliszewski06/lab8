
/* Zad 1. Napisz program definiuj¹cy zmienna typu int oraz wskaznik do zmiennej typu int. Program powinien 
 wczytac z klawiatury wartosc i podstawic ja do zmiennej stosujac wskaznik i operator adresu. 

#include <iostream>
using namespace std;

int main()
{
	int nr;
	cin >> nr;
	int* pnr;
	pnr = &nr;
	cout << nr << " " << *pnr;
}
*/

/* Zad 2. Na podstawie fragmentu kodu napisz program, ktory wyswietli tablice "jakas_tablica". A
nastepnie poprzez wskaznik wsk element tablicy o indeksie 7 zostanie zmieniony na 77 i ponownie wyswietli
tablice. 

#include <iostream>
using namespace std;

int main()
{
	int jakas_tablica[10] = { 0 };
	int* wsk;
	wsk = jakas_tablica; // to samo, co wsk = &jakas_tablica[0]
	// wsk++ sprawia, ¿e wsk wskazuje na 2gi element tablicy
	//(*wsk)++ zwiêksza ten 2gi (obecnie wskazywany) element o 1 
	for (int i = 0; i < 10; i++) {
		cout << jakas_tablica[i] << " ";
	}

	wsk = wsk + 7;
	(*wsk) = 77;

	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << jakas_tablica[i] << " ";
	}
}

 */

/* Zad 2.1 Utworz tablice int 10 - elementowa, z poczatkowymi wartosciami ustawionymi na zero.Ustaw wskaznik
typu int na pierwszy element tablicy.W petli zmien kazdy element tablicy na 9, ale tylko przy uzyciu skladni
wskaznikow, bez uzywania nazwy oryginalnej tablicy. 

#include <iostream>
using namespace std;

int main()
{
	int jakas_tablica[10] = { 0 };
	int* wsk;
	wsk = &jakas_tablica[0]; 

	for (int i = 0; i < 10; i++) {
		cout << *wsk << " ";
		wsk++;
	}
	wsk = jakas_tablica;

	for (int i = 0; i < 10; i++) {
		(*wsk) = 9;
		wsk++;
	}

	wsk = jakas_tablica;
	cout << endl;

	for (int i = 0; i < 10; i++) {
		cout << *wsk << " ";
		wsk++;
	}

}
*/

/* Zad 3. Najpierw niech program zapyta u¿ytkownika o rozmiar tablicy 1-wymiarowej, a potem niech ja stworzy
(rozkaz new, tablica typu float). 
Nastêpnie niech kazdy element tablicy od pierwszego ([0]) do ostatniego wartosc równa indeksowi komorki tablicy. 
Nastêpnie ustaw wskaznik wsk typu float na ostatni element tablicy. 
Poruszaj siê tym wskaznikiem w kierunku poczatku tablicy (chodzi o wsk--) tak dlugo, w petli nieskonczonej -
np. while(1) {...}, az wartosc pod wskaznikiem bêdzie rowna zero (czyli od gory tablicy dotarlismy do pierszego
elementu). Wtedy niech polecenie break przerwie wykonywanie kodu. 

#include <iostream>
using namespace std;

int main() {
	int size;
	cout << "Enter the size of a 1-dimentional table: ";
	cin >> size;
	float* tab = new float[size];
	
	for (int i = 0; i < size; ++i) {
		tab[i] = i;
	}

	for (int i = 0; i < size; ++i) {
		cout << tab[i] << " ";
	}
	cout << endl;

	float* wsk = tab + size - 1;
	
	while (1) {
		if (*wsk == 0) {
			break;
		}
		else {
			cout << *wsk << " ";
			wsk--;
		}
	}
}
*/

/* Zad 4. Utwórz funkcjê, która zwraca œredni¹ arytmetyczn¹ liczb znajduj¹cych siê w tablicy przes³anej jako argument. 
Funkcja ta jako parametry przyjmuje wskaŸnik na tablicê i rozmiar tablicy. 
Tablica niech bêdzie wygenerowana dynamicznie (rozkaz new) i wype³niona losowymi wartoœciami (pdf nr 4, sekcja 4 - generator
liczb pseudolosowych). 
(Do funkcji wysy³amy zarówno tablicê, jak i rozmiar tej tablicy
jako drugi argument - mo¿e byæ to zwyk³a zmienna typu int.)  */

#include <iostream>
using namespace std;
int average(int* wsk, int size);


int main() {
	int sec = time(NULL);
	srand(sec);

	int size;
	cout << "Enter the size of a 1-dimentional table: ";
	cin >> size;
	float* tab = new float[size];

	for (int i = 0; i < size; ++i) {
		tab[i] = rand()%100;
	}

	for (int i = 0; i < size; ++i) {
		cout << tab[i] << "  ";
	}
}

int average(int* wsk, int size) {
	int sum = 0;
	int avg = 0;
	for (int i = 0; i < size; ++i) {
		sum = sum + tab[i];
	}

}