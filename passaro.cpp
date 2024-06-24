#include "passaro.h"

Passaros::Passaros(string n, int i, string s): Animal (n,i){
	som = s;
}
void Passaros::emitsom( string s){
	som = s;
}
string Passaros::getsom(){
	return som;
}
