#ifndef	PRODUIT_H
#define PRODUIT_H
#include <string>

class Produit
{
public:
	Produit();
	~Produit();
	void getNomproduit(string nom_produit);
	void getDescriptionproduit(string description_produit);
	void setQuantitedeproduit(int quantite_produit);

private:
	string nom_produit;
	string description_produit;
	int quantite_produit;
	int Id_client

	
};








#endif