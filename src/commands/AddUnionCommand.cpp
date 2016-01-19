/*************************************************************************
                           AddUnionCommand  -  description
                             -------------------
    d�but                : 11/01/2016
	copyright            : (C) 2016 par Baha & Pericas-Moya
*************************************************************************/

//---------- R�alisation de la classe <AddUnionCommand> (fichier AddUnionCommand.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>
#include <stdexcept>

//------------------------------------------------------ Include personnel
#include "AddUnionCommand.h"
#include "../geometry/UnionObject.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types priv�s


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- M�thodes publiques
// type AddUnionCommand::M�thode ( liste de param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


int AddUnionCommand::Execute( ) const
// Algorithme :
{
	try
	{
		Object* o = figure->at( params[0] );
		return -1;
	}
	catch ( const out_of_range& e )
	{
		vector<Object*> vec;
		for (int i = 1; i < params.size(); i++)
		{
			try
			{
				Object* o = figure->at(params[i]);
				return -1;
			}
			catch ( const out_of_range& e )
			{
				vec.push_back( (*figure)[params[i]] );
			}
		}
		(*figure)[params[0]] = new UnionObject(	vec );
	}
	return 0;
}	//----- Fin de Execute

//------------------------------------------------- Surcharge d'op�rateurs
AddUnionCommand & AddUnionCommand::operator = ( const AddUnionCommand & aAddUnionCommand )
// Algorithme :	Si on n'est pas en train de faire aAddUnionCommand = aAddUnionCommand, on "copie" tout les champs :
//				on les modifie pour qu'ils soient comme ceux de aAddUnionCommand
{
	if ( this != &aAddUnionCommand )
	{
		params = aAddUnionCommand.params;
		figure = aAddUnionCommand.figure;
	}
	return *this;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
AddUnionCommand::AddUnionCommand ( const AddUnionCommand & aAddUnionCommand ) :
	AddObjectCommand ( aAddUnionCommand )
// Algorithme :
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <AddUnionCommand>" << endl;
#endif
} //----- Fin de AddUnionCommand (constructeur de copie)


AddUnionCommand::AddUnionCommand ( const StringList& params, Figure* const f ) :
	AddObjectCommand( params, f )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <AddUnionCommand>" << endl;
#endif
} //----- Fin de AddUnionCommand


AddUnionCommand::~AddUnionCommand ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <AddUnionCommand>" << endl;
#endif
} //----- Fin de ~AddUnionCommand


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- M�thodes prot�g�es

//------------------------------------------------------- M�thodes priv�es