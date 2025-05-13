/*
 * Nom de fichier 
 *      main.cpp
 * 
 * Sommaire
 *      Fichier de départ pour le projet ActiviteHeritageV2
 * 
 * Auteur 
 *      Jefu, Tonia, CEEEESA, Markiplier
 * 
 * Date de création
 *      7 mai 2025
 *  
 */

#include <Arduino.h>
#include <iostream>
#include "Etudiant.h"
#include "EtudiantMusique.h"
#include "EtudiantTGE.h"
#include "EtudiantArtLettre.h"
#include "EtudiantAdmin.h"


//********************************************************************************
// Déclaration des fonctions
//********************************************************************************
void testEtudiant(void);
void testEtudiantMusique(void);
void testEtudiantTGE(void);
void testEtudiantArtLettre(void);
void testEtudiantAdmin(void);

//********************************************************************************
// Déclartions des variables globales
//********************************************************************************



//********************************************************************************
// fonction setup (est appelée une sule fois au lancement du programme)
//********************************************************************************
void setup() {
  Serial.begin(9600);             // Démarrer le port série par défaut à 9600bauds
  printf("Hello world !\n\n");

  pinMode(LED_BUILTIN, OUTPUT);   // DEL embarqué configuré en sortie

  testEtudiant();
  testEtudiantArtLettre();   
}


//********************************************************************************
// Loop (est appelé en boucle pour l'exécution du programme)
//********************************************************************************
void loop() {

  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));   //Changer état de la DEL

  delay(1000);                                            //Attendre une seconde
}


//********************************************************************************
// fonction testEtudiant permet de créer un étudiant et de valider le 
// fonctionnement de la classe Etudiant.
//********************************************************************************
void testEtudiant(void)
{
  int numeroMatriculeTmp;
  int moyenneTmp;

  Etudiant owen;
  owen.setMatricule(2288053);
  owen.setMoyenne(80);

  numeroMatriculeTmp = owen.getMatricule();
  moyenneTmp = owen.getMoyenne(); 
  printf("Owen, matricule # %d, moyenne %d\n", numeroMatriculeTmp, moyenneTmp);
}


void testEtudiantAdmin(void) 
{
  int numeroMatriculeTmp;
  float nbrSessionTmp;

  EtudiantAdmin Jedi;
  Jedi.setMatricule(5007007);
  Jedi.setcountSession1(69);

  numeroMatriculeTmp = Jedi.getMatricule();
  nbrSessionTmp = Jedi.getcountSession1();
  printf("Jeff, matricule # %d, nbr de sessions %d\n", numeroMatriculeTmp, nbrSessionTmp);
}

void testEtudiantArtLettre(void) 
{
  int numeroMatriculeTmp;
  int moyenneTmp;
  int nbrLivresLusTmp;

  EtudiantArtLettre sonia;
  sonia.setMatricule(4280043);
  sonia.setMoyenne(99);
  sonia.setNbrLivresLus(75);

  numeroMatriculeTmp = sonia.getMatricule();
  moyenneTmp = sonia.getMoyenne(); 
  nbrLivresLusTmp= sonia.getNbrLivresLus();
  printf("Sonia, matricule # %d, moyenne %d, nombres de livres lus %d\n", numeroMatriculeTmp, moyenneTmp, nbrLivresLusTmp);
}

void testEtudiantMusique(void) 
{
  int numeroMatriculeTmp;
  int nbrInstrumentsTmp;

  EtudiantMusique Cesar;
  Cesar.setMatricule(3000069);
  Cesar.setNbrInstruments(69);

  numeroMatriculeTmp = Cesar.getMatricule();
  nbrInstrumentsTmp = Cesar.getNbrInstruments();
  printf("Ceesa, matricule # %d, nbr de sessions %d\n", numeroMatriculeTmp, nbrInstrumentsTmp);
}

void testEtudiantTGE(void)
{
  int numeroMatriculeTmp;
  bool maitriseOscilloTmp;

  EtudiantTGE Marc;
  Marc.setMatricule(2228222);
  Marc.setMaitriseOscillo(1);

  numeroMatriculeTmp = Marc.getMatricule();
  maitriseOscilloTmp = Marc.getMaitrise();
  printf("Marc, matricule # %d, maitrise en binaire: %d\n", numeroMatriculeTmp, maitriseOscilloTmp);
}
