namespace testDBProject5
{
    partial class StudentSubjects
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.button1 = new System.Windows.Forms.Button();
            this.label1 = new System.Windows.Forms.Label();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.studentnumberDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.studentsubjectDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.studentsubjectsBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.elementry_school_databaseDataSet = new testDBProject5.Elementry_school_databaseDataSet();
            this.student_subjectsTableAdapter = new testDBProject5.Elementry_school_databaseDataSetTableAdapters.Student_subjectsTableAdapter();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.studentsubjectsBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.elementry_school_databaseDataSet)).BeginInit();
            this.SuspendLayout();
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("Times New Roman", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button1.Location = new System.Drawing.Point(677, 395);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(95, 44);
            this.button1.TabIndex = 6;
            this.button1.Text = "Submit";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.Transparent;
            this.label1.Font = new System.Drawing.Font("Times New Roman", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(331, 10);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(141, 19);
            this.label1.TabIndex = 5;
            this.label1.Text = "Student subjects table";
            // 
            // dataGridView1
            // 
            this.dataGridView1.AutoGenerateColumns = false;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.studentnumberDataGridViewTextBoxColumn,
            this.studentsubjectDataGridViewTextBoxColumn});
            this.dataGridView1.DataSource = this.studentsubjectsBindingSource;
            this.dataGridView1.Location = new System.Drawing.Point(12, 32);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.Size = new System.Drawing.Size(760, 358);
            this.dataGridView1.TabIndex = 4;
            // 
            // studentnumberDataGridViewTextBoxColumn
            // 
            this.studentnumberDataGridViewTextBoxColumn.DataPropertyName = "Student_number";
            this.studentnumberDataGridViewTextBoxColumn.HeaderText = "Student_number";
            this.studentnumberDataGridViewTextBoxColumn.Name = "studentnumberDataGridViewTextBoxColumn";
            // 
            // studentsubjectDataGridViewTextBoxColumn
            // 
            this.studentsubjectDataGridViewTextBoxColumn.DataPropertyName = "Student_subject";
            this.studentsubjectDataGridViewTextBoxColumn.HeaderText = "Student_subject";
            this.studentsubjectDataGridViewTextBoxColumn.Name = "studentsubjectDataGridViewTextBoxColumn";
            // 
            // studentsubjectsBindingSource
            // 
            this.studentsubjectsBindingSource.DataMember = "Student_subjects";
            this.studentsubjectsBindingSource.DataSource = this.elementry_school_databaseDataSet;
            // 
            // elementry_school_databaseDataSet
            // 
            this.elementry_school_databaseDataSet.DataSetName = "Elementry_school_databaseDataSet";
            this.elementry_school_databaseDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // student_subjectsTableAdapter
            // 
            this.student_subjectsTableAdapter.ClearBeforeFill = true;
            // 
            // StudentSubjects
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = global::testDBProject5.Properties.Resources.backgroundMainForm;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(784, 451);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.dataGridView1);
            this.Location = new System.Drawing.Point(300, 150);
            this.Name = "StudentSubjects";
            this.StartPosition = System.Windows.Forms.FormStartPosition.Manual;
            this.Text = "Student Subjects";
            this.Load += new System.EventHandler(this.StudentSubjects_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.studentsubjectsBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.elementry_school_databaseDataSet)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.DataGridView dataGridView1;
        private Elementry_school_databaseDataSet elementry_school_databaseDataSet;
        private System.Windows.Forms.BindingSource studentsubjectsBindingSource;
        private Elementry_school_databaseDataSetTableAdapters.Student_subjectsTableAdapter student_subjectsTableAdapter;
        private System.Windows.Forms.DataGridViewTextBoxColumn studentnumberDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn studentsubjectDataGridViewTextBoxColumn;
    }
}