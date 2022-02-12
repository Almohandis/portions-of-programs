namespace testDBProject5
{
    partial class ClassNameR
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
            Microsoft.Reporting.WinForms.ReportDataSource reportDataSource1 = new Microsoft.Reporting.WinForms.ReportDataSource();
            this.label1 = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.reportViewer1 = new Microsoft.Reporting.WinForms.ReportViewer();
            this.Elementry_school_databaseDataSet = new testDBProject5.Elementry_school_databaseDataSet();
            this.RepByClassNameBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.RepByClassNameTableAdapter = new testDBProject5.Elementry_school_databaseDataSetTableAdapters.RepByClassNameTableAdapter();
            ((System.ComponentModel.ISupportInitialize)(this.Elementry_school_databaseDataSet)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.RepByClassNameBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.BackColor = System.Drawing.Color.Transparent;
            this.label1.Font = new System.Drawing.Font("Times New Roman", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(455, 414);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(110, 19);
            this.label1.TabIndex = 8;
            this.label1.Text = "Enter class name";
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("Times New Roman", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button1.Location = new System.Drawing.Point(677, 408);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(95, 31);
            this.button1.TabIndex = 7;
            this.button1.Text = "Submit";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(571, 414);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(100, 20);
            this.textBox1.TabIndex = 6;
            // 
            // reportViewer1
            // 
            reportDataSource1.Name = "DataSet1";
            reportDataSource1.Value = this.RepByClassNameBindingSource;
            this.reportViewer1.LocalReport.DataSources.Add(reportDataSource1);
            this.reportViewer1.LocalReport.ReportEmbeddedResource = "testDBProject5.RByClassName.rdlc";
            this.reportViewer1.Location = new System.Drawing.Point(12, 12);
            this.reportViewer1.Name = "reportViewer1";
            this.reportViewer1.ServerReport.BearerToken = null;
            this.reportViewer1.Size = new System.Drawing.Size(760, 390);
            this.reportViewer1.TabIndex = 5;
            // 
            // Elementry_school_databaseDataSet
            // 
            this.Elementry_school_databaseDataSet.DataSetName = "Elementry_school_databaseDataSet";
            this.Elementry_school_databaseDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // RepByClassNameBindingSource
            // 
            this.RepByClassNameBindingSource.DataMember = "RepByClassName";
            this.RepByClassNameBindingSource.DataSource = this.Elementry_school_databaseDataSet;
            // 
            // RepByClassNameTableAdapter
            // 
            this.RepByClassNameTableAdapter.ClearBeforeFill = true;
            // 
            // ClassNameR
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = global::testDBProject5.Properties.Resources.backgroundMainForm;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(784, 451);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.reportViewer1);
            this.Location = new System.Drawing.Point(300, 150);
            this.Name = "ClassNameR";
            this.StartPosition = System.Windows.Forms.FormStartPosition.Manual;
            this.Text = "ClassNameR";
            this.Load += new System.EventHandler(this.ClassNameR_Load);
            ((System.ComponentModel.ISupportInitialize)(this.Elementry_school_databaseDataSet)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.RepByClassNameBindingSource)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TextBox textBox1;
        private Microsoft.Reporting.WinForms.ReportViewer reportViewer1;
        private System.Windows.Forms.BindingSource RepByClassNameBindingSource;
        private Elementry_school_databaseDataSet Elementry_school_databaseDataSet;
        private Elementry_school_databaseDataSetTableAdapters.RepByClassNameTableAdapter RepByClassNameTableAdapter;
    }
}