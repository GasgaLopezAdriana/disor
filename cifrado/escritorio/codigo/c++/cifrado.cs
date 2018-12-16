namespace WindowsFormsApplication3
{
    internal class cifrado
    {

        public int buscarCaracterEnAlfabeto(char c, string alfabeto)
        {
            for (int i = 0; i < alfabeto.Length; i++)
            {
                if (alfabeto[i] == c)
                    return i;
            }
            return 0;
        }


        //abcdefghijklmnñopqrstuvwxyz    27
        private char cifrarLetra(char c, string alfabeto, int desplazamiento)
        {
            int pos = buscarCaracterEnAlfabeto(c, alfabeto);
            if (pos > 0)
                pos = pos + desplazamiento;
            else
                return c;

            if (pos >= alfabeto.Length)
                pos = pos - alfabeto.Length;
               return alfabeto[pos];
        }

        public string cifrarPalabra(string result, string palabra, string alfabeto, int desplazamiento)
        {
            for (int i = 0; i < palabra.Length; i++)
            {    
                result += cifrarLetra(palabra[i], alfabeto, desplazamiento);
            }
            return result;
        }
    }
}