/*************************************************************************
							main  -  description
-------------------
début                : 11/01/2016
copyright            : (C) 2016 par Baha & Pericas-Moya
*************************************************************************/

//---------- Réalisation de <main> (fichier main.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>

using namespace std;

//------------------------------------------------------ Include personnel
#include "Application.h"

//------------------------------------------------------------- Constantes


//------------------------------------------------------------- Fonction principale

int main ( int arcg, char ** argv )
{
	Application app;
	return app.Run( );
}