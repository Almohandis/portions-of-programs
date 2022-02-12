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
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string selected = comboBox1.Text;
            switch (selected)
            {
                case "Students":
                    Students students = new Students();
                    students.Show();
                    break;
                case "Subjects":
                    Subjects subjects = new Subjects();
                    subjects.Show();
                    break;
                case "Classes":
                    Classes classes = new Classes();
                    classes.Show();
                    break;
                case "Student subjects":
                    StudentSubjects studentSubjects = new StudentSubjects();
                    studentSubjects.Show();
                    break;
                default:
                    MessageBox.Show("Please choose a table", "Note", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
                    break;
            }
            
        }

        private void button2_Click(object sender, EventArgs e)
        {
            
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void comboBox3_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click_1(object sender, EventArgs e)
        {
            string selected = comboBox2.Text;
            switch (selected)
            {
                case "Subjects taken by a student":
                    StuSubName stuSubName = new StuSubName();
                    stuSubName.Show();
                    break;
                case "Teachers in the school":
                    teachersQuery teachersQuery = new teachersQuery();
                    teachersQuery.Show();
                    break;
                case "Total number of students":
                    TotalStuQuery totalStuQuery = new TotalStuQuery();
                    totalStuQuery.Show();
                    break;
                default:
                    MessageBox.Show("Please choose a query", "Note", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
                    break;
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            string selected = comboBox3.Text;
            switch (selected)
            {
                case "Subject name":
                    SubNameR subNameR = new SubNameR();
                    subNameR.Show();
                    break;
                case "Class name":
                    ClassNameR classNameR = new ClassNameR();
                    classNameR.Show();
                    break;
                case "Number of students in class":
                    TotalStuInClassName totalStuInClassNameR = new TotalStuInClassName();
                    totalStuInClassNameR.Show();
                    break;
                case "Grade":
                    StuGradeR stuGradeR = new StuGradeR();
                    stuGradeR.Show();
                    break;
                default:
                    MessageBox.Show("Please choose a report", "Note", MessageBoxButtons.OK, MessageBoxIcon.Exclamation);
                    break;

            }
            
        }
    }
}
