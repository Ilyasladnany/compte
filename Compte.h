#pragma once
class Compte {
private :
	int numCompte;
	char nomProprietaire;
	double solde;
	
public:
	void consulterSolde();
	Compte deposerArgent(double montant);
	bool retirerArgent(double montant);
	Compte transfererArgent(double montant, Compte C1);
};