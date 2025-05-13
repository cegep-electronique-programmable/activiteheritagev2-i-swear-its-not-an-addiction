/*
 * Nom de fichier 
 *      EtudiantAdmin.cpp
 * 
 * Sommaire
 *      Fichier source pour la classe EtudiantAdmin.
 * 
 * Auteur 
 *      Jeff Truong
 *  
 */
#include "EtudiantAdmin.h"

//Définition de la méthode setMatricule de la classe, permet de modifier le matricule de l'étudiant
void EtudiantAdmin::setMatricule(int nouveauMatricule){
    //Le numero de matricule doit necessairement avoir 7 chiffres et commence par 5.
    if ((nouveauMatricule >= 5000000) && (nouveauMatricule <= 5999999)){
        this->numeroMatricule = nouveauMatricule;    
    }
    else{
        this->numeroMatricule = 0; //Le matricule est mis à 0 si le matricule n'est pas valide
    }
}

void EtudiantAdmin::setcountSession1(float nbrSessions)
{
    this->countSession1 = nbrSessions;
}

float EtudiantAdmin::getcountSession1(void)
{
    return this->countSession1;
}