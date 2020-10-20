#include "HVRP.h"
#include <iostream>
#include <fstream>

void lireDonnees(t_instance& instance, const char * nomFichier) {
	std::ifstream fichier(nomFichier);

	if (fichier) {
		int nbClient = 0, nbType = 0;
		fichier >> nbClient >> nbType;
		instance.nbClient = nbClient, instance.nbType = nbType;
		// lecture types de véhicule
		for (int i = 1; i <= nbType; i++) {
			fichier >> instance.nb[i]
					>> instance.capacite[i]
					>> instance.CF[i]
					>> instance.CV[i];
		}
		// lecture distances
		for (int i = 0; i <= nbClient; i++) {
			for (int j = 0; j <= nbClient; j++) {
				int distance = 0;
				fichier >> instance.dist[i][j];
			}
		}
		// lecture quantitées
		for (int i = 1; i <= nbClient; i++) {
			int index = 0, quantite = 0;
			fichier >> index >> quantite;
			instance.quantite[index] = quantite;
		}
	}
	else {
		std::cerr << "ERREUR : Ouverture du fichier impossible\n";
	}
}

void constructionPlusProcheVoisin(t_instance & instance, t_sol & solution){
	int nbClient = instance.nbClient;
	int client[NBMAX_CLIENT] = { 0 };
	int clientCour = 0;
	for (int i = 0; i <= nbClient; i++) {

	}
}
