
using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

namespace encriptado
{ 
    public partial class WebForm1 : System.Web.UI.Page
    {
        private procEncripta proEncrip;
        private encripInversa encrInversa;
        protected void Page_Load(object sender, EventArgs e)
        {
            //TextBTexto.Attributes.Add("onKeyPress", "Enter('" + TextBTexto.ClientID + "',click)");
            //this.Button1.Attributes.Add("OnClick", "javascript:return fnAceptar();");
            String displayControlName = "spanCounter";
            TextBTexto.Attributes.Add("onkeyup", displayControlName +
                ".innerText=this.value.length;");
            proEncrip = new procEncripta();
            encrInversa = new encripInversa();

        }
        
        protected void TextBTexto_TextChanged(object sender, EventArgs e)
        {
                string sa = "";
               
            int despl = 0;
                if (ListBCesar.SelectedIndex.ToString() != "")
                    despl = Convert.ToInt32(ListBCesar.SelectedIndex.ToString());
                /*Texto Cifrado*/
                for (int itera = 0; itera < TextBTexto.Text.Length; itera++)
                {
                    sa = sa + proEncrip.retornarCaracter(TextBTexto.Text[itera], despl);
                }

                TexBCesar.Text = sa;
           
           TexBInver.Text = encrInversa.encriptarInversa(TextBTexto.Text);
        }


        protected void ListBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
           

        }
    }
}