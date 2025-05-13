/*
 * Nom de fichier 
 *      EtudiantMusique.h
 * 
 * Sommaire
 *      Fichier source pour la classe EtudiantMusique.
 * 
 * Auteur 
 *      César Antonio Del Pozo Catalan
 *  
 */

#ifndef ETUDIANTMUSIQUE_H
#define ETUDIANTMUSIQUE_H

#include "Etudiant.h"

class EtudiantMusique : public Etudiant {
    int nbrInstruments;
	
public:
    void setMatricule(int);
    void setNbrInstruments(int);
    int getNbrInstruments();
};

#endif //ETUDIANTMUSIQUE_H