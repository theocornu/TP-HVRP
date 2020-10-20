#pragma once

static const int NBMAX_TYPE = 10;
static const int NBMAX_CLIENT = 500;
static const int NBMAX_CLIENT_PAR_TOURNEE = 20;

typedef struct t_instance {
	int nbClient; // nombre de clients
	int nbType; // nombre de types de v�hicule
	double dist[NBMAX_CLIENT+1][NBMAX_CLIENT+1]; // distance de entre clients (i vers j)
	int nb[NBMAX_TYPE+1]; // nombre de v�hicules par type
	int capacite[NBMAX_TYPE+1]; // capacit� par type
	double CF[NBMAX_TYPE+1]; // cout fixe par type
	double CV[NBMAX_TYPE+1]; // cout variable par type
	int quantite[NBMAX_CLIENT + 1]; // quantit� � collecter par client
}t_instance;

typedef struct t_tournee {
	int nbTournee; // nombre de tourn�es
	int liste[NBMAX_CLIENT_PAR_TOURNEE+1];
	int numc; // num�ro du camion affect� � la tourn�e
	int vol; // volume
	double cout;
}t_tournee;

typedef struct t_sol {
	int nbTournee; // nombre de tourn�es
	t_tournee liste[NBMAX_CLIENT_PAR_TOURNEE+1];
	double cout;
}t_sol;

void lireDonnees(t_instance& instance, const char * nomFichier);
void constructionPlusProcheVoisin(t_instance& instance, t_sol& solution);
bool checkSolution(t_sol& solution);