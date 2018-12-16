using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace encriptado
{
    public class procDesecrip
    {
        private alfabeto alfabeto = new alfabeto();
        private int desplazamiento = 0;

        public procDesecrip()
        { }

        public char retornarCaracter(char caracter, int desplazamiento)
        {
            if (retornarPosicion(caracter) != -1)
                return retorCaracterXDesplazInverso(
                    retornarPosicion(caracter), desplazamiento);
            return caracter;
        }

        public char retorCaracterXDesplazInverso(int posicionactual, int desplazamiento)
        {
            return alfabeto.retornarCaracter((posicionactual - desplazamiento +
                alfabeto.retornarTamanio()) % alfabeto.retornarTamanio());
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