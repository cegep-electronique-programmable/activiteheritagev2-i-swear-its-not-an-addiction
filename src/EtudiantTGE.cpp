/*
 * Nom de fichier 
 *      EtudiantTGE.cpp
 * 
 * Sommaire
 *      Fichier source pour la classe Etudiant.
 * 
 * Auteur 
 *      Marc
 *  
 */

#include "EtudiantTGE.h"


//Définition de la méthode setMatricule de la classe, permet de modifier le matricule de l'étudiant
void EtudiantTGE::setMatricule(int nouveauMatricule){
    //Le numero de matricule doit necessairement avoir 7 chiffres
    if ((nouveauMatricule >= 2000000) && (nouveauMatricule <= 2999999)){
        this->numeroMatricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}

void EtudiantTGE::setMaitriseOscillo(bool maitrise){
    if (maitrise <= 1){
        this->maitriseOscillo = maitrise;
    }
    else{
        this->maitriseOscillo = 0;
    }
}

bool EtudiantTGE::getMaitrise(void){
    return (this->maitriseOscillo);
}