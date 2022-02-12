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
    public partial class teachersQuery : Form
    {
        SqlConnection sqlConnection = new SqlConnection(@"Data Source=DESKTOP-TJT3S84\JIMMY;Initial Catalog=Elementry school database;Integrated Security=True");
        SqlDataAdapter sqlDataAdapter;
        DataTable dataTable = new DataTable();
        
        public teachersQuery()
        {
            InitializeComponent();
            sqlDataAdapter = new SqlDataAdapter("select Subject_teacher from Subjects", sqlConnection);
            sqlDataAdapter.Fill(dataTable);
            dataGridView1.DataSource = dataTable;
        }

        private void teachersQuery_Load(object sender, EventArgs e)
        {

        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
