using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace testDBProject5
{
    public partial class ClassNameR : Form
    {
        public ClassNameR()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string selectedSubject = textBox1.Text;
            if (selectedSubject != "")
            {
                this.RepByClassNameTableAdapter.Fill(this.Elementry_school_databaseDataSet.RepByClassName, textBox1.Text);
                this.reportViewer1.RefreshReport();
            }
        }

        private void ClassNameR_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'Elementry_school_databaseDataSet.RepByClassName' table. You can move, or remove it, as needed.
            

        }
    }
}
