#include <iostream>
#include "animal.h"
using namespace std;

class Passaros: public Animal {
	private:
		string nome;
		int idade;
		string som;
	public:
		Passaros(string n, int i, string s);
		void emitsom( string s);
		string getsom();
};
	
