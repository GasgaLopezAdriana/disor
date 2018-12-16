namespace WindowsFormsApplication3
{
    internal class descifrado
    {
        private int buscarCaracterEnAlfabeto(char c, string alfabeto)
        {
            for (int i = 0; i < alfabeto.Length; i++)
            {
                if (alfabeto[i] == c)
                    return i;
            }
            return 0;
        }


        //abcdefghijklmnñopqrstuvwxyz    27
        private char descifrarLetra(char c, string alfabeto, int desplazamiento)
        {
            int pos = buscarCaracterEnAlfabeto(c, alfabeto) - desplazamiento;
            if (pos < 0)
                pos = alfabeto.Length + pos;
            return alfabeto[pos];
        }

        public string descifrarPalabra(string result, string palabra, string alfabeto, int desplazamiento)
        {
            for (int i = 0; i < palabra.Length; i++)
            {
                result += descifrarLetra(palabra[i], alfabeto, desplazamiento);
            }
            return result;
        }
    }
}