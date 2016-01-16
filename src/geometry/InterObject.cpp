/*************************************************************************
                           InterObject  -  description
                             -------------------
    début                : 11/01/2016
    copyright            : (C) 2016 par Baha & Pericas-Moya
*************************************************************************/

//---------- Réalisation de la classe <InterObject> (fichier InterObject.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "InterObject.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types privés


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Méthodes publiques
bool InterObject::Contains(Point point)
// Algorithme :
//
{
	return false;
} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
InterObject & InterObject::operator = ( const InterObject & unInterObject )
// Algorithme :	Si on n'est pas en train de faire unInterObject = unInterObject, on "copie" tout les champs :
//				on les modifie pour qu'ils soient comme ceux de unInterObject
{
	if (this != &unInterObject)
	{
	}
	return *this;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
InterObject::InterObject ( const InterObject & unInterObject )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <InterObject>" << endl;
#endif
} //----- Fin de InterObject (constructeur de copie)


InterObject::InterObject ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <InterObject>" << endl;
#endif
} //----- Fin de InterObject


InterObject::~InterObject ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <InterObject>" << endl;
#endif
} //----- Fin de ~InterObject


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

//------------------------------------------------------- Méthodes privées
