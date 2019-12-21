#ifndef MAGASIN_H
#define MAGASIN_H
#include <string>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include "Produit.h"
#include "Commande.h"
#include "Client.h"


class Magasin
{
    public:
        /** Default constructor */
         Magasin(vector<Produit> prod,vector<Client> cli,vector<Commande> cmd)
        {
        produits=prod;
        clients=cli;
        commandes=cmd;
        }

        Magasin(){}

        /** Default destructor */
        virtual ~Magasin();

        /** Access produits
         * \return The current value of produits
         */
        vector<Produit> Getproduits() { return produits; }
        /** Set produits
         * \param val New value to set
         */
         void Setproduits(vector<Produit> val) { produits = val; }
        /** Access clients
         * \return The current value of clients
         */
      
    protected:

    private:
        vector<Produit> produits; //!< Member variable "produits"
        vector<Client> clients; //!< Member variable "clients"
        vector<Commande> commandes; //!< Member variable "commandes"
};

#endif // MAGASIN_H
