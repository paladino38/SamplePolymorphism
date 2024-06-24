#include <iostream>
#include "animal.h"

using namespace std;

class Gato : public Animal {
	private:
		string nome;
		int idade;
		string som;
	public:
		Gato(string n, int i, string s);
		void emitsom( string s);
		string getsom();
};
	
