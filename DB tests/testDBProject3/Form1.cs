using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace testDBProject3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'elementry_school_databaseDataSet.Classes' table. You can move, or remove it, as needed.
            this.classesTableAdapter.Fill(this.elementry_school_databaseDataSet.Classes);

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string selected = comboBox1.Text;
            switch (selected)
            {
                case "Students":
                    Students students = new Students();
                    students.Show();
                    break;



            }
            
        }

        private void button2_Click(object sender, EventArgs e)
        {

        }

        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
