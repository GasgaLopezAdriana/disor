using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication3
{
    public partial class Form1 : Form
    { inverso c = new inverso();
        cifrado c1 = new cifrado();
        inversoGrupal ig = new inversoGrupal();
       // descifrado c2 = new descifrado();
        public Form1()
        {
            Console.WriteLine(ig.cifrado(3, 0, "holc", ""));
            InitializeComponent();
        }
        

        private void textoPlano_KeyUp(object sender, KeyEventArgs e)
        {
            transposicion.Text = c.cifrar(textoPlano.Text, "");
           
            cesarbox.Text = c1.cifrarPalabra("", textoPlano.Text, "aábcdeéfghiíjklmnñoópqrstuúüvwxyz", Decimal.ToInt32(numericUpDown1.Value));
            tia.Text = ig.cifrado(Decimal.ToInt32(grupo.Value), 0, textoPlano.Text, "");
        }

        private void numericUpDown1_MouseClick(object sender, MouseEventArgs e)
        {
            cesarbox.Text = c1.cifrarPalabra("", textoPlano.Text, "aábcdeéfghiíjklmnñoópqrstuúüvwxyz", Decimal.ToInt32(numericUpDown1.Value));

        }

        private void numericUpDown1_KeyUp(object sender, KeyEventArgs e)
        {
            cesarbox.Text = c1.cifrarPalabra("", textoPlano.Text, "aábcdeéfghiíjklmnñoópqrstuúüvwxyz", Decimal.ToInt32(numericUpDown1.Value));

        }

        private void numericUpDown1_MouseCaptureChanged(object sender, EventArgs e)
        {
            cesarbox.Text = c1.cifrarPalabra("", textoPlano.Text, "aábcdeéfghiíjklmnñoópqrstuúüvwxyz", Decimal.ToInt32(numericUpDown1.Value));

        }

        private void numericUpDown1_ValueChanged(object sender, EventArgs e)
        {
            cesarbox.Text = c1.cifrarPalabra("", textoPlano.Text, "aábcdeéfghiíjklmnñoópqrstuúüvwxyz", Decimal.ToInt32(numericUpDown1.Value));
        }

        private void grupo_ValueChanged(object sender, EventArgs e)
        {
            tia.Text = ig.cifrado(Decimal.ToInt32(grupo.Value), 0, textoPlano.Text, "");

        }
    }

  
}
