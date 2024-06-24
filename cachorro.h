#include <iostream>
#include "animal.h"

using namespace std;

class Cachorro: public Animal {
	private:
		string nome;
		int idade;
		string som;
	public:
		Cachorro( string n, int i, string s);
		void emitsom( string s);
		string getsom();
};
	
