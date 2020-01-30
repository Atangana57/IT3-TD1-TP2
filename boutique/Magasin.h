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
        Magasin();
      
    protected:

    private:
        vector<Produit> produits; //!< Member variable "produits"
        vector<Client> clients; //!< Member variable "clients"
        vector<Commande> commandes; //!< Member variable "commandes"
};

#endif // MAGASIN_H
