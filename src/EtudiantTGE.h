/*
 * Nom de fichier 
 *      EtudiantTGE.h
 * 
 * Sommaire
 *      Fichier header pour la classe EtudiantTGE.h
 * 
 * Auteur 
 *      Marc
 *  
 */

#ifndef ETUDIANTTGE_H
#define ETUDIANTTGE_H


//Déclaration de la classe Etudiant
class EtudiantTGE : public Etudiant {
    bool maitriseOscillo;
	
public:
    void setMatricule(int);
    void setMaitriseOscillo(bool);
    bool getMaitrise();
};

#endif //ETUDIANTTGE_H