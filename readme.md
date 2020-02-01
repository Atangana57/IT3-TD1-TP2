BIENVENUE DANS VOTRE APPLICATION DE GESTION DE MAGASIN EASYSTORE

Le projet a été mené par Atangana Atangana Thomas Olivier et Anass El Ouahabi.

Notre application nous permet  globalement de  gérer un ou plusieurs magasins. A l'évidence, pour chaque magasin nous pouvons :

- gérer son stock

- gérer sa clientèle

- gérer ses commandes

- gérer basiquement le crud (ajout,supression,edition) pour les utilisateurs (potentiels clients)

Conformément à l'énoncé, toutes les classes et leurs contenus on été créées et
se trouvent dans le repertoire "/header".

Ceci dit, les reponses aux questions 1 à 8 correspondent respectivement aux différentes classes créées (Magasins,produit,client,commande) tandis que les réponses aux questions subsidiaires ou de completion sont  intégrées dans leurs classes respectives.

Par ailleurs, l'annonce des méthodes(procédures) implémentées dans le déroulé du  code et répondant aux questions y afférentes est faite en englais sous forme de commentaire.

En guise d'illustration, nous notons par exemple qu'au sujet de la question 7 nous avons:

7.c) Ajouter une méthode permettant d'afficher toutes les commandes passées.

Réponse :

 //!< Method
        //!< List all commands

        void List_all_command()
        {
          for(unsigned int i=0;i<commandes.size();i++)
            {
                {
            std::cout<<"---("<<i+1<<")---";
            commandes[i].Display();
                }
            }
        }
!//

Enfin, l'exécution de la  question 8.a relative à la création du menu de selection se fait dans le programme principal qui n'est rien d'autre que  le fichier main.cpp
