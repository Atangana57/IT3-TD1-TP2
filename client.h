#ifndef CLIENT_H
#define CLIENT_H
#include <string>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include "Produit.h"
using namespace std;

class Client
{
    public:
        /** Default constructor */
        Client(unsigned int ID,string prm,string nm,vector<Produit> pnr )
        {
        id=ID;
        nom=nm;
        prenom=prm;
        panier=pnr;
        }



        Client(){}

        virtual~Client()
        {
        //dtor
        }

        /** Access id
         * \return The current value of id
         */
        int Getid() { return id; }
        /** Set id
         * \param val New value to set
         */
        void Setid(unsigned int val) { id = val; }


        /** Access prenom
         * \return The current value of prenom
         */
        string Getprenom() { return prenom; }
        /** Set prenom
         * \param val New value to set
         */
        void Setprenom(string val) { prenom = val; }
        /** Access nom
         * \return The current value of nom
         */
        string Getnom() { return nom; }
        /** Set nom
         * \param val New value to set
         */
        void Setnom(string val) { nom = val; }
        /** Access panier
         * \return The current value of panier
         */
        vector<Produit> Getpanier() { return panier; }
        //!< Method
        //!< erase cart
        void erase_cart()
        {vector<Produit> pr; panier =pr;}



    protected:

    private:
        unsigned int id; //!< Member variable "id"
        string prenom; //!< Member variable "prenom"
        string nom; //!< Member variable "nom"
        vector<Produit> panier; //!< Member variable "panier"
};

#endif // CLIENT_H
