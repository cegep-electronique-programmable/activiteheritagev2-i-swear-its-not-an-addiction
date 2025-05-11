/*
 * Nom de fichier 
 *      EtudiantAdmin.h
 * 
 * Sommaire
 *      Fichier header pour la classe EtudiantAdmin.h
 * 
 * Auteur 
 *      Jeff Truong
 *  
 */

#ifndef ETUDIANTAdmin_H
#define ETUDIANTAdmin_H

#include "Etudiant.h"

//Déclaration de la classe EtudiantAdmin
class EtudiantAdmin : public Etudiant 
{
    float countSession1;
public:
    void setMatricule(int);
    void setcountSession1 (float);
    float getcountSession1(void);
};

#endif //ETUDIANTAdmin_H