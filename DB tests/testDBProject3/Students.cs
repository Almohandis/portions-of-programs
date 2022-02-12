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

namespace testDBProject3
{
    public partial class Students : Form
    {
        SqlConnection sqlConnection = new SqlConnection("Data Source=DESKTOP-TJT3S84\\JIMMY;Initial Catalog=\"Elementry school database\";Integrated Security=True");
        SqlDataAdapter sqlDataAdapter;
        DataTable dataTable = new DataTable();
        SqlCommandBuilder sqlCommandBuilder;
        public Students()
        {
            InitializeComponent();
            sqlDataAdapter = new SqlDataAdapter("select * from Students", sqlConnection);
            sqlDataAdapter.Fill(dataTable);
            dataGridView1.DataSource = dataTable;
        }

        private void Students_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'elementry_school_databaseDataSet.Students' table. You can move, or remove it, as needed.
            this.studentsTableAdapter.Fill(this.elementry_school_databaseDataSet.Students);

        }

        private void dataGridView3_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            sqlCommandBuilder = new SqlCommandBuilder(sqlDataAdapter);
            sqlDataAdapter.Update(dataTable);
            MessageBox.Show("Done!", "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);

        }
    }
}
