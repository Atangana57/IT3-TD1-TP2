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
          vector<Client> Getclients() { return clients; }
        /** Set clients
         * \param val New value to set
         */
        void Setclients(vector<Client> val) { clients = val; }
        /** Access commandes
         * \return The current value of commandes
         */


        void add_client(string prenom,string nom)
        {
        Client cli;
        cli.Setid(clients.size()+1);
        cli.Setnom(nom);
        cli.Setprenom(prenom);
        clients.push_back(cli);
        }
      
    protected:

    private:
        vector<Produit> produits; //!< Member variable "produits"
        vector<Client> clients; //!< Member variable "clients"
        vector<Commande> commandes; //!< Member variable "commandes"
};

#endif // MAGASIN_H
