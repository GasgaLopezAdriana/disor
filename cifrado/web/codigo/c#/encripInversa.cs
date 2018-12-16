using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace encriptado
{
    class encripInversa
    {
        int[] arreglo = { 1,2,3,4};
        public encripInversa() { }
        public String encriptarInversa(String texto)
        {
            String transp = "";
            for (int itera = 0; itera < texto.Length; itera++)
            {
                transp = texto[itera] + transp;
            }
            return transp;
        }

        int[] getEstado()
        { return arreglo;}
    }
}