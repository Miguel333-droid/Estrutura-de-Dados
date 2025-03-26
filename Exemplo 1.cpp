#include <iostream>
using namespace std;

int main() {
	int i,n[4];
	float t;
	
	
	for (i = 0; i < 4; i += 1) {
		cout << "Entre com a nota do estudande " << i << ":";
		cin >> n[i];
	}
	
	cout << "Notas: " ;
	t = 0;
	
	for (i = 0; i < 4; i += 1) {
		cout << n[i] << " ";
		t = t + n[i];
	}
	
	cout << endl << "Media: " << t/4 << endl;
	
	
}
