#pragma once

static const int NBMAX_TOURNEE = 20;
static const int NBMAX_SOMMET = 50;

typedef struct t_instance {
	int nbNoeud;
	int nbTournee;
	double d[][];
	int nb[NBMAX_TOURNEE+1];
	int capa[NBMAX_TOURNEE+1];
	double CF[]; // cout fixe
	double CV[]; // cout variable
}t_instance;

typedef struct t_tournee {
	int n;
	int liste[NBMAX_SOMMET+1];
	int nc;
	int vol;
	double cout;
}t_tournee;

typedef struct t_sol {
	int n;
	t_tournee liste[NBMAX_TOURNEE+1];
	double cout;
}t_sol;