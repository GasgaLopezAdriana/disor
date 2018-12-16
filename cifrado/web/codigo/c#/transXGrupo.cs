using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace encriptado
{
    public class transXGrupo
    {
        alfabeto alfabe = new alfabeto();
        public transXGrupo() { }

        string invertirWord(string word)
        {
            string frase = "";
            for (int iter = word.Length - 1; iter >= 0; iter--)
            {
                frase += word[iter];
            }
            return frase;
        }

        /*unsafe public string traspoGrupo(char letra, int grupo, int* posicion, string word, char* salida)
        {
            char c = ' ';
            if (!alfabe.existe(letra))
            {
                (*posicion) = 0;
                salida = &c;
                return word + letra;
            }
            salida += *salida + letra;
            (*posicion)++;
            if ((*posicion) == grupo)
            {
                (*posicion) = 0;
                word = word.Substring(0, word.Length - grupo + 1);
                word += invertirWord(word.Substring(word.Length - (grupo + 1), word.Length - 1));
                salida = &c;
                return word;
            }
            return word + letra;
        }*/
    }
}