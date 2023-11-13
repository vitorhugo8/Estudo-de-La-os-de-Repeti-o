// Estudo de Laços de Repetição em C++
#include <iostream>
using namespace std;

int main() {
	int n1;
	int i = 0; // Iterador 
	int n2;
	
	cout << "Que valor deseja que eu subtraia?: ";
	cin >> n1;
	
	do {
		cout << "O valor de n1 e: " << n1 << endl;
		cout << "\n";
		n1 =n1-1;
	}
	
	while(n1 > i);
	return 0;
}
