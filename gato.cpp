#include "gato.h"

Gato::Gato( string n, int i, string s): Animal (n,i){
	som = s;
}
void Gato::emitsom( string s){
	som = s;
}
string Gato::getsom(){
	return som;
}
