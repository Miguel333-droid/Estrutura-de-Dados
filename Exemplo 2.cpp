#include <iostream>
using namespace std;

#define h 5
#define l 10

int main () {
	int x,y;
	char m[h] [l];
	
	
	for(y = 0; y < h; y += 1) {
		for(x = 0; x < l; x += 1) {
			m[y] [x] = 0;
		}
	}
	
	cout << endl << "Entre com as coordenadas na forma \"y x\"." << endl;
	cout << "Use valores negativos para sair do programa." << endl;
	
	cout << "Coordenadas: ";
	cin >> y >> x;
	
	
	while (x >= 0 && y >= 0) {
		m[y] [x] = 1;
		
		for (y = 0; y < h; y += 1) {
			for(x = 0; x < l; x += 1){
				cout << m[y] [x] << " ";
			}
			cout << endl << endl;
		}
		cout << endl;
		cout << "Coordenadas: ";
		cin >> y >> x;
	}
}

