using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace encriptado
{
        class alfabeto
        {
            public char[] caracteres = new char[27] {'a' ,'b','c' ,'d','e','f','g',
                'h','i' , 'j' , 'k','l' ,'m','n','ñ','o','p' ,'q' ,
        'r','s','t' ,'u','w','v', 'x' ,'y' ,'z' };

            public alfabeto() { }

            public char retornarCaracter(int posicion)
            {
                return caracteres[posicion];
            }

            public int retornarTamanio()
            {
                return caracteres.Length;
            }

            public bool existe(char letra, int posicion = 0)
            {
                for (; posicion < caracteres.Length; posicion++)
                    if (caracteres[posicion] == letra)
                        return true;
                return false;
            }
            string imprimir()
            {
                string caract = "";
                for (int incre = 0; incre < caracteres.Length; incre++)
                {
                    caract = caract + caracteres[incre];
                }
                return caract;
            }

        }


    }
