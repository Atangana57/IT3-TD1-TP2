#include <iostream>
#include "Magasin.h"
#include <string>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include "Produit.h"
#include "Client.h"
#include "Commande.h"
using namespace std;

vector<Client> liste_clients;
vector<Magasin> liste_magasins;
vector<Produit> liste_produits;
vector<Commande> liste_commandes;


void menu_produit();
void menu_client();
void menu_commande();
void menu_magasin();
void menu_principal();
void nouvel_utilisateur();
void listing_utilisateur();
void modifier_utilisateur();
void nouvel_produit();
void listing_produit();
void modifier_produit();
void nouvel_magasin();
void listing_magasin();
void modifier_magasin();
void gerer_magasin();
void nouvel_commande();
void listing_commande();
void modifier_commande();

int main()
{
    menu_principal();
    return 0;
}

void menu_client(){

cout<<"------------------------------------ \n";
cout<<"-------GESTION DES UTILISATEURS---------\n";
cout<<" ---------------------------------- \n";

cout<<" Sectionner une action a faire svp : \n";
cout<<" [ 1 ] ajouter des  Utilisateurs: \n";
cout<<" [ 2 ] afficher les utilisateur \n";
cout<<" [ 3 ] modifier un utilisateur \n";
cout<<" [ 4 ] menu  principal \n";
action_utilisateurs:
int choix=0;
cout<<" Votre choix svp :  ";cin>>choix;
switch(choix)
{
case 1  :nouvel_utilisateur(); menu_client();break;
case 2  :listing_utilisateur(); menu_client(); break;
case 3  :modifier_utilisateur(); menu_client();break;
case 4  :menu_principal();break;
default : cout<<" entre [1] , [2] , [3] et [4] svp \n";
         goto action_utilisateurs;
break;
}

}

void menu_produit(){

cout<<"------------------------------------ \n";
cout<<"-------GESTION DES PRODUITS---------\n";
cout<<" ---------------------------------- \n";

cout<<" Sectionner une action a faire svp : \n";
cout<<" [ 1 ] ajouter des  produits: \n";
cout<<" [ 2 ] afficher les produits \n";
cout<<" [ 3 ] modifier un produit \n";
cout<<" [ 4 ] menu  principal \n";
action_produit:
int choix=0;
cout<<" Votre choix svp :  ";cin>>choix;
switch(choix)
{
case 1  :nouvel_produit(); menu_produit();break;
case 2  :listing_produit(); menu_produit(); break;
case 3  :modifier_produit(); menu_produit();break;
case 4  :menu_principal();break;
default : cout<<" entre [1] , [2] , [3] et [4] svp \n";
         goto action_produit;
break;
}

}

void menu_magasin(){
cout<<"------------------------------------ \n";
cout<<"-------GESTION DES MAGASINS---------\n";
cout<<" ---------------------------------- \n";

cout<<" Sectionner une action a faire svp : \n";
cout<<" [ 1 ] ajouter des  magasins: \n";
cout<<" [ 2 ] afficher les magasins \n";
cout<<" [ 3 ] modifier un magasin \n";
cout<<" [ 4 ] gerer un magasin \n";
cout<<" [ 5 ] menu  principal \n";
action_magasin:
int choix=0;
cout<<" Votre choix svp :  ";cin>>choix;
switch(choix)
{
case 1  :nouvel_magasin(); menu_magasin();break;
case 2  :listing_magasin(); menu_magasin(); break;
case 3  :modifier_magasin(); menu_magasin();break;
case 4  :gerer_magasin();break;
case 5  :menu_principal();break;
default : cout<<" entre [1] , [2] , [3] , [4] et [5] svp \n";
         goto action_magasin;
break;
}
}
void menu_commande(){
cout<<"------------------------------------ \n";
cout<<"-------GESTION DES COMMANDES---------\n";
cout<<" ---------------------------------- \n";

cout<<" Sectionner une action a faire svp : \n";
cout<<" [ 1 ] ajouter des  commandes: \n";
cout<<" [ 2 ] afficher les commandes \n";
cout<<" [ 3 ] modifier une commande \n";
cout<<" [ 4 ] menu  principal \n";
action_commande:
int choix=0;
cout<<" Votre choix svp :  ";cin>>choix;
switch(choix)
{
case 1  :nouvel_commande(); menu_commande();break;
case 2  :listing_commande(); menu_commande(); break;
case 3  :modifier_commande(); menu_commande();break;
case 4  :menu_principal();break;
default : cout<<" entre [1] , [2] , [3] et [4]  svp \n";
         goto action_commande;
break;
}
}

void menu_principal()
{
cout<<"------------------------------------ \n";
cout<<"   -------MENU PRINCIPAL---------\n";
cout<<" ---------------------------------- \n";

cout<<" Sectionner une action a faire svp : \n";
cout<<" [ 1 ] Gestion des  Utilisateurs: \n";
cout<<" [ 2 ] Gestion des  Magasins \n";
cout<<" [ 3 ] Gestion des  commandes \n";
action_principale:
int choix=0;
cout<<" Votre choix svp :  ";cin>>choix;
switch(choix)
{
case 1  :menu_client();  break;
case 2  :menu_magasin(); break;
case 3  :menu_commande();break;
default : cout<<" entre [1] , [2] et [3] svp \n";
         goto action_principale;
break;

}


}



void nouvel_utilisateur(){
cout<<"   -------NOUVEL UTILISATEUR---------\n";
string nom,prenom;Client cli;
cout<<" entrer un nom : "; cin>>nom;
cout<<" entrer un prenom : "; cin>>prenom;
cli.Setnom(nom);
cli.Setprenom(prenom);
cli.Setid(liste_clients.size()+1);
liste_clients.push_back(cli);
cout<<"\n"<<nom<<"  "<<prenom<<" ok \n";
};
void listing_utilisateur(){
cout<<"   -------LISTE DES UTILISATEURS---------\n\n";
 for(unsigned int i=0;i<liste_clients.size();i++)
            {
            cout<<liste_clients[i].Getid()<<"             ";
            liste_clients[i].Display();
            cout<<"\n";
            }
  cout<<"\n";

};
void modifier_utilisateur(){

listing_utilisateur();
choix_client:
int choix=0;
cout<<" choisir un utilisateur svp :  ";cin>>choix;
string nom,prenom;
for(unsigned int i=0;i<liste_clients.size();i++)
            {
           if(liste_clients[i].Getid()==choix)
          { cout<<"Vous avez choisi : ";
          liste_clients[i].Display();
cout<<"\n";
cout<<" entrer un nouveau nom : "; cin>>nom;
cout<<" entrer un nouveau prenom : "; cin>>prenom;
liste_clients[i].Setnom(nom);
liste_clients[i].Setprenom(prenom);
cout<<"\n"<<nom<<"  "<<prenom<<" ok \n";
             break;
          }
           else{
           cout<<" faire un choix honnete svp \n";
           goto choix_client;
           }
            }

};

void nouvel_produit(){


};
void listing_produit(){};
void modifier_produit(){};
void nouvel_commande(){};
void listing_commande(){};
void modifier_commande(){};
void nouvel_magasin(){};
void listing_magasin(){};
void modifier_magasin(){};
void gerer_magasin(){};



