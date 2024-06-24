#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
using namespace std;

class Animal {
	private:
		string nome;
		int idade;
	public:
		Animal(string n, int i);
		void setname(string n);
		void setyear(int i);
		virtual string getsom() = 0;
		string getname();
		int getid();
		virtual void emitsom(string s)=0;
};
#endif

