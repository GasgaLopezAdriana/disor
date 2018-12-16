namespace WindowsFormsApplication3
{
    internal class inversoGrupal
    {
        public string cifrar(string palabra, string resul)
        {
            for (int i = palabra.Length - 1; i >= 0; i--)
            {
                resul += palabra[i];
            }
            return resul;
        }       
        public string concatenarCadena(int indice,string s1, string resultado)
        {
            while (indice < s1.Length)
            {
                resultado += s1[indice];
                indice++;
            }
            return resultado;
        }
        public string cifrado(int grupo,int indice,string texto, string result) {
            if ((indice + grupo) < texto.Length)
            {
                return cifrado(grupo, indice + grupo,texto,result +""+ cifrar(texto.Substring(indice, indice + grupo),""));
            }
                return concatenarCadena(indice, texto, result);
        }
    }
}