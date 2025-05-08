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
#include "EtudiantAdmin.cpp"

#ifndef ETUDIANTAdmin_H
#define ETUDIANTAdmin_H


//Déclaration de la classe EtudiantAdmin
class EtudiantAdmin : public Etudiant {
    float countSession1;
public:
    void setMatricule(int);
    void setcountSession1 (float);
    void getcountSession1 (float);
};

#endif //ETUDIANTAdmin_H