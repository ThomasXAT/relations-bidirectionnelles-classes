/**
 * @file Individu.h
 * @author Lopistéguy
 * @brief Spécifie une classe Individu en relation réciproque avec sa Voiture.
 * @details Ce fichier implante un Individu défini par un nom prénom. 
 * 
 * La classe définit également la Voiture conduite l'Individu.
 * @version 1.0
 * @date 2022-10-19
 */

#ifndef INDIVIDU_H
#define INDIVIDU_H

using namespace std;

#include "Voiture.h" 
#include <iostream>

class Voiture; 

/**
 * @brief Représente un Individu.
 * @warning Actuellement, un Individu est associé à au plus une Voiture
 * @deprecated Utiliser la classe Personne
 */
class Individu
{
    // ATTRIBUTS
  public:
     /**
     * @brief Le nom de l'individu
     */
    string nom;        
    /**
     * @brief Le prénom de l'individu
     */
    string prenom;  
    /**
     * @brief Lien avec la voiture de l'individu
     */
    Voiture *maVoiture; 

    // MÉTHODES
  public:
    /**
     * @brief Construit un nouvel objet Individu à partir de son nom et prénom
     * 
     */
    Individu(string = "", string = "");
    // destructeur
    ~Individu();

    /**
     * @brief Retourne l'identité de l'Individu
     * 
     * @return une chaîne de caractères sous la forme "nom prénom"
     * @bug un espace de trop entre le nom et le prénom
     * @todo ajouter un paramètre pour choisir si on retourne une chaîne du type "nom prenom" ou "prenom nom"
     */
    string toString();        // Affiche l'identité de l'individu
    string toStringAndLink(); // Affiche l'identité de l'individu et de sa voiture s'il en a une

    // Méthodes spécifiques
    void majMaVoiture(Voiture* voiture);

    /**
     * @brief Définit la Voiture conduite par l'Individu
     * 
     * @param [in] voiture un pointeur vers l'objet Voiture conduit par l'Individu
     */
    void setMaVoiture(Voiture* voiture);
    void supprimerLien();
};

#endif // INDIVIDU_H