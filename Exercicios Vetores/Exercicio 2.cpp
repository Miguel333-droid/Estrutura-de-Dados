#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
		int n,i = 0;
		double vet[8];
		
		
		
		
		for (i = 0; i < 8; i++) {
			cout << "Digite a posicao " << i << "  do vetor: ";
			cin >> vet[i];
			
			
			if (vet[i] > n) {
				n = vet[i];
			}
		}
		
		cout << "A maio número digitado foi: " << n;
		
	
		
    
	

}
