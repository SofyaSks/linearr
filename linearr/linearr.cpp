#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

template <typename T> int searchindex(T arr[], int length, T key,int begin = 0) {
	for (int i = begin; i < length; i++) 
		if (arr[i] == key)
			return i;
		return -1;
}
template <typename T> int lis(T arr[], int length, T key, int begin = -1) {
	if (begin == -1)
		begin = length - 1;
	for (int i = begin; i >= 0; i--)
		if (arr[i] == key)
			return i;
	return -1;
}
void subword(char arr[], int length, char sym);

int main() {
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	int n;


	
	return 0;
}

void subword(char arr[], int length, char sym) {
	int symindex = searchindex(arr, length, sym);
	if (symindex == -1)
		cout << "ERROR";
	else
	for (int i = symindex; i < length; i++)
		cout << arr[i];
}

// Подслово
/*char word[8] = {'f', 'u', 'n', 'c', 't', 'i', 'o', 'n'};
cout << "Изначальный массив: ";
for (int i = 0; i < 8; i++)
	cout <<  word[i];
cout << endl;

char mysym;
cout << "Введите символ: ";
cin >> mysym;
cout << "Подслово: ";
subword(word, 8, mysym);
cout << endl;*/

/*cout << "Изначальный массив: \n[";
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 10 + 1;
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";
	cout << endl;

	cout << "Введите искомое значение: ";
	cin >> n;
	cout << lis(arr, 10, n,5);
	cout << endl;*/