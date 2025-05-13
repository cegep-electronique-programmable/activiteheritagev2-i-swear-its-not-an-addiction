/*
 * Nom de fichier 
 *      EtudiantMusique.cpp
 * 
 * Sommaire
 *      Fichier source pour la classe EtudiantMusique.
 * 
 * Auteur 
 *      César Antonio Del Pozo Catalan
 *  
 */

#include "EtudiantMusique.h"

//Définition de la méthode setMatricule de la classe, permet de modifier le matricule de l'étudiant
void EtudiantMusique::setMatricule(int nouveauMatricule){
    //Le numero de matricule doit necessairement avoir 7 chiffres
    if ((nouveauMatricule >= 3000000) && (nouveauMatricule <= 3999999)){
        this->numeroMatricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}

void EtudiantMusique::setNbrInstruments(int nouveauNbrInstruments){
    if (nouveauNbrInstruments <= 100){
        this->nbrInstruments = nouveauNbrInstruments;
    }
    else{
        this->nbrInstruments = 100;
    }
}

int EtudiantMusique::getNbrInstruments(void){
    return (this->nbrInstruments);
}