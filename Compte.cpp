#include <iostream>
#include "Compte.h"
using namespace std;

void Compte::consulterSolde() {
	double so = this->solde;
	cout << "votre solde est de " << so << endl;
};

bool Compte::retirerArgent(double montant) {
	if (this->solde >= montant) {
		this->solde -= montant;
		return true;
	}
	else return false;
};

void Compte::deposerArgent(double montant) {
	this->solde += montant;
};


void Compte::transfererArgent(double montant, Compte C1) {
	if (this->retirerArgent(montant) == true) {
		C1.deposerArgent(montant);
	}
	else cout << "Cela ne peut pas se produire" << endl
};