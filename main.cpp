#include "Acceuil.hpp"

using namespace std;

int main(int argc, char* argv[]){
	Acceuil* a = new Acceuil(1600,1200,"AieRobot","Choose your skills","Capteur","Arme");
	a->load_shapes();
	a->load_game();
	return 0;
}
