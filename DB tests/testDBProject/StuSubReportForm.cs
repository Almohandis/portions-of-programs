using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace testDBProject
{
    public partial class StuSubReportForm : Form
    {
        public StuSubReportForm()
        {
            InitializeComponent();
        }

        private void StuSubReportForm_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'Elementry_school_databaseDataSet.StuSubReport' table. You can move, or remove it, as needed.
            
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.StuSubReportTableAdapter.Fill(this.Elementry_school_databaseDataSet.StuSubReport, textBox1.Text);

            this.reportViewer1.RefreshReport();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void reportViewer1_Load(object sender, EventArgs e)
        {

        }
    }
}
