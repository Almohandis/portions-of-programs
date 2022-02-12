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
    public partial class Students : Form
    {

        SqlConnection SqlConnection = new SqlConnection("Data Source=DESKTOP-TJT3S84\\JIMMY;Initial Catalog=\"Elementry school database\";Integrated Security=True");
        SqlDataAdapter SqlDataAdapter;
        DataTable DataTable = new DataTable();
        SqlCommandBuilder sqlCommandBuilder;

        public Students()
        {
            InitializeComponent();
            SqlDataAdapter = new SqlDataAdapter("select * from Students", SqlConnection);
            SqlDataAdapter.Fill(DataTable);
            dataGridView1.DataSource = DataTable;
        }

        private void Students_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'elementry_school_databaseDataSet.Students' table. You can move, or remove it, as needed.
            this.studentsTableAdapter.Fill(this.elementry_school_databaseDataSet.Students);

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            sqlCommandBuilder = new SqlCommandBuilder(SqlDataAdapter);
            SqlDataAdapter.Update(DataTable);
            MessageBox.Show("Done!", "Success", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }
    }
}
