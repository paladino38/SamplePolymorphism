#include "animal.h"

using namespace std;

Animal::Animal(string n, int i){
	nome = n;
	idade = i;
}
void Animal::setname(string n){
	nome = n;
}
void Animal::setyear(int i){
	idade = i;
}
string Animal::getname(){
		return nome;
}
int Animal::getid(){
	return idade;
}
