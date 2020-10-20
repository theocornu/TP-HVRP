#pragma once

static const int NBMAX_TYPE = 10;
static const int NBMAX_CLIENT = 500;
static const int NBMAX_CLIENT_PAR_TOURNEE = 20;

typedef struct t_instance {
	int nbClient; // nombre de clients
	int nbType; // nombre de types de véhicule
	double dist[NBMAX_CLIENT+1][NBMAX_CLIENT+1]; // distance de entre clients (i vers j)
	int nb[NBMAX_TYPE+1]; // nombre de véhicules par type
	int capacite[NBMAX_TYPE+1]; // capacité par type
	double CF[NBMAX_TYPE+1]; // cout fixe par type
	double CV[NBMAX_TYPE+1]; // cout variable par type
	int quantite[NBMAX_CLIENT + 1]; // quantité à collecter par client
}t_instance;

typedef struct t_tournee {
	int nbTournee; // nombre de tournées
	int liste[NBMAX_CLIENT_PAR_TOURNEE+1];
	int numc; // numéro du camion affecté à la tournée
	int vol; // volume
	double cout;
}t_tournee;

typedef struct t_sol {
	int nbTournee; // nombre de tournées
	t_tournee liste[NBMAX_CLIENT_PAR_TOURNEE+1];
	double cout;
}t_sol;

void lireDonnees(t_instance& instance, const char * nomFichier);
void constructionPlusProcheVoisin(t_instance& instance, t_sol& solution);
bool checkSolution(t_sol& solution);