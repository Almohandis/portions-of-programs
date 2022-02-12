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
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void mainToolStripMenuItem_Click(object sender, EventArgs e)
        {

        }

        private void studentToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Student student = new Student();
            student.Show();

        }

        private void studentSubjectReportToolStripMenuItem_Click(object sender, EventArgs e)
        {
            StuSubReportForm stuSubReportForm = new StuSubReportForm();
            stuSubReportForm.Show();
        }
    }
}
