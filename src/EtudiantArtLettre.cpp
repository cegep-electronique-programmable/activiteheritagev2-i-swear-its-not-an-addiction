/*
 * Nom de fichier 
 *      EtudiantArtLettre.cpp
 * 
 * Sommaire
 *      Fichier source pour la classe EtudiantArtLettre.
 * 
 * Auteur 
 *      Sonia Michaud
 *  
 */

#include "EtudiantArtLettre.h"

//Définition de la méthode setMatricule de la classe, permet de modifier le matricule de l'étudiant
void EtudiantArtLettre::setMatricule(int nouveauMatricule){
    //Le numero de matricule doit necessairement avoir 7 chiffres et commence par 4
    if ((nouveauMatricule >= 4000000) && (nouveauMatricule <= 4999999)){
        this->numeroMatricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}

int EtudiantArtLettre::setNbrLivresLus(int nbLivresLus){
    this->nbrLivresLus= nbLivresLus;
}

int EtudiantArtLettre::getNbrLivresLus(void){
    return (this->nbrLivresLus);
}