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
    public partial class StuGradeR : Form
    {
        public StuGradeR()
        {
            InitializeComponent();
        }

        private void StuGradeR_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'Elementry_school_databaseDataSet.RepByGrade' table. You can move, or remove it, as needed.
            
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int selected = int.Parse(textBox1.Text);
            this.RepByGradeTableAdapter.Fill(this.Elementry_school_databaseDataSet.RepByGrade, selected);
            this.reportViewer1.RefreshReport();
        }
    }
}
