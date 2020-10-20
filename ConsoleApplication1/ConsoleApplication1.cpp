// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "HVRP.h"

int main()
{
	
	t_instance *ptrInstance = new t_instance{0};
	t_instance &instance = *ptrInstance;

	lireDonnees(instance, "HVRP_DLP_05.txt");
	
    std::cout << "Hello World!\n";
}
