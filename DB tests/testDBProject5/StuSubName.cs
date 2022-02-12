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
    public partial class StuSubName : Form
    {
        SqlConnection sqlConnection = new SqlConnection(@"Data Source=DESKTOP-TJT3S84\JIMMY;Initial Catalog=Elementry school database;Integrated Security=True");
        SqlDataAdapter sqlDataAdapter;
        DataTable dataTable = new DataTable();
       

        public StuSubName()
        {
            InitializeComponent();
            sqlDataAdapter = new SqlDataAdapter("select student_name, Subject_name from Students, Subjects, Student_subjects where Students.Student_ID = Student_subjects.Student_number and Subjects.Subject_name = Student_subjects.Student_subject", sqlConnection);
            sqlDataAdapter.Fill(dataTable);
            dataGridView1.DataSource = dataTable;
        }

        private void StuSubName_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'elementry_school_databaseDataSet.Classes' table. You can move, or remove it, as needed.
            this.classesTableAdapter.Fill(this.elementry_school_databaseDataSet.Classes);

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
