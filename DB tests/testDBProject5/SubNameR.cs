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
    public partial class SubNameR : Form
    {
        public SubNameR()
        {
            InitializeComponent();
        }

        private void SubNameR_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'Elementry_school_databaseDataSet.RepBySubName' table. You can move, or remove it, as needed.
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string selected = textBox1.Text;
            if (selected != "")
            {
                this.RepBySubNameTableAdapter.Fill(this.Elementry_school_databaseDataSet.RepBySubName, textBox1.Text);

                this.reportViewer1.RefreshReport();
            }
        }
    }
}
