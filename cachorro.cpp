#include "cachorro.h"

Cachorro::Cachorro(string n, int i, string s): Animal (n,i){
	som = s;
}
void Cachorro::emitsom( string s){
	som = s;
}
string Cachorro::getsom(){
	return som;
}
