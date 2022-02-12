using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace testDBProject5
{
    public partial class StudentSubjects : Form
    {
        SqlConnection SqlConnection = new SqlConnection(@"Data Source=DESKTOP-TJT3S84\JIMMY;Initial Catalog=Elementry school database;Integrated Security=True");
        SqlDataAdapter SqlDataAdapter;
        DataTable DataTable = new DataTable();
        SqlCommandBuilder SqlCommandBuilder;
        public StudentSubjects()
        {
            InitializeComponent();
            SqlDataAdapter = new SqlDataAdapter("Select * from Student_subjects", SqlConnection);
            SqlDataAdapter.Fill(DataTable);
            dataGridView1.DataSource = DataTable;
        }

        private void StudentSubjects_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'elementry_school_databaseDataSet.Student_subjects' table. You can move, or remove it, as needed.
            this.student_subjectsTableAdapter.Fill(this.elementry_school_databaseDataSet.Student_subjects);

        }

        private void button1_Click(object sender, EventArgs e)
        {
            SqlCommandBuilder = new SqlCommandBuilder(SqlDataAdapter);
            SqlDataAdapter.Update(DataTable);
            MessageBox.Show("Done!", "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
    }
}
