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
    public partial class TotalStuQuery : Form
    {
        SqlConnection sqlConnection = new SqlConnection(@"Data Source=DESKTOP-TJT3S84\JIMMY;Initial Catalog=Elementry school database;Integrated Security=True");
        SqlDataAdapter sqlDataAdapter;
        DataTable dataTable = new DataTable();
        public TotalStuQuery()
        {
            InitializeComponent();
            sqlDataAdapter = new SqlDataAdapter("select count(*) as[Total number of students] from Students", sqlConnection);
            sqlDataAdapter.Fill(dataTable);
            dataGridView1.DataSource = dataTable;
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }
    }
}
