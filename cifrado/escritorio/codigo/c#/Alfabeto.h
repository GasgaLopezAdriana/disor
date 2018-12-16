#include <string>
#include <vector>
#include "Excepciones.h";
class Alfabeto
{
std::vector<char> caracteres;
public:
	Alfabeto()
	{	
		caracteres = {'a' ,'b','c' ,'d','e','f','g' ,'h','i' , 'j' ,'k','l' ,'m','n','ñ','o','p' ,'q' ,
		'r','s','t' ,'u','w','v', 'x' ,'y' ,'z'};
	}


	char retornarCaracter(int posicion){
		return caracteres[posicion];
	}

	int retornarTamanio()
	{
		return caracteres.size();
	}
	std::string imprimir()
	{
		std::string caract;
		for (int incre = 0; incre<caracteres.size(); incre++)
		{
			caract = caract + caracteres[incre];
		}
		return caract;
	}


};