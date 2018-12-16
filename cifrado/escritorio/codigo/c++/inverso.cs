namespace WindowsFormsApplication3
{
    internal class inverso
    {

        public string cifrar(string palabra, string resul) {
            for (int i = palabra.Length - 1; i >= 0; i--) {
                resul += palabra[i];
            }
            return resul;
        }
    }
}