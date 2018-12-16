using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
namespace encriptado
{
    public class procEncripta
    {

        public procEncripta()
        { }

        private alfabeto alfabeto = new alfabeto();


        public char retornarCaracter(char caracter, int desplazamiento)
        {
            if (retornarPosicion(caracter) != -1)
                return retorCaracterXDesplaz(retornarPosicion(caracter), desplazamiento);
            return caracter;
        }

        public char retorCaracterXDesplaz(int posicionactual, int desplazamiento)
        {
            return alfabeto.retornarCaracter((posicionactual +
                desplazamiento) % alfabeto.retornarTamanio());

        }

        public int retornarPosicion(char caracter)
        {
            for (int incre = 0; incre < alfabeto.retornarTamanio(); incre++)
            {
                if (alfabeto.retornarCaracter(incre) == caracter)
                    return incre;
            }
            return -1;
        }
    }
}
