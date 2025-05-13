/*
 * Nom de fichier 
 *      EtudiantArtLettre.h
 * 
 * Sommaire
 *      Fichier header pour la classe EtudiantArtLettre.h
 * 
 * Auteur 
 *      Sonia Michaud
 *  
 */


#ifndef ETUDIANTARTLETTRE_H
#define ETUDIANTARTLETTRE_H

#include "Etudiant.h"

//Déclaration de la classe EtudiantArtLettre
class EtudiantArtLettre : public Etudiant {
    int nbrLivresLus;
public:
    void setMatricule(int);
    void setNbrLivresLus(int);
    int getNbrLivresLus();
};

#endif //ETUDIANTARTLETTRE_H