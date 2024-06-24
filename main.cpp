#include "passaro.h"
#include "cachorro.h"
#include "gato.h"
	using namespace std;
int main(){
	int i;
	Animal *vet[6];
	vet[0] = new Passaros("papagaio",3,"chumbanaue");
	vet[1] = new Passaros("tucano",2,"lalala");
	vet[2] = new Gato("persa",5,"miau");
	vet[3] = new Gato("padraozin",10,"maiauau");
	vet[4] = new Cachorro("toddy",5,"auaua");
	vet[5]= new Cachorro("meg",10,"auauauauauauua");
	for(i=0;i<6;i++){
		cout << "Nome" << vet[i]-> getname() <<"idade:"  << vet[i]->getid() << "som emitido" << vet[i]->getsom() << endl;
	}
	return 0;
}
