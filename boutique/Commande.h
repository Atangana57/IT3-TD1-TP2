#ifndef COMMANDE_H
#define COMMANDE_H
#include <string>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include "Produit.h"
#include "Client.h"



class Commande
{
    public:
        /** Default constructor */
        Commande(Client cli,vector<Produit> produits,unsigned int status)
        {
        client=cli;
        produits=produits;
        status=status;
        }

        Commande(){}

        /** Default destructor */
        virtual ~Commande()
        {
        //dtor
        }

        /** Access client
         * \return The current value of client
         */
        Client Getclient() { return client; }
        /** Set client
         * \param val New value to set
         */
        void Setclient(Client val) { client = val; }
        /** Access produits
         * \return The current value of produits
         */
        std::vector<Produit*> Getproduits() { return produits; }
        /** Set produits
         * \param val New value to set
         */
        void Setproduits(std::vector<Produit*> val) { produits = val; }
        /** Access status
         * \return The current value of status
         */
        unsigned int Getstatus() { return status; }
        /** Set status
         * \param val New value to set
         */
        void Setstatus(unsigned int val) { status = val; }

    protected:

    private:
        Client client; //!< Member variable "client"
        std::vector<Produit*> produits; //!< Member variable "produits"
        unsigned int status; //!< Member variable "status"
};

#endif // COMMANDE_H
