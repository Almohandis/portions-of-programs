using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using addStu.ViewModels;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;
using Microsoft.Extensions.Logging;

namespace addStu.Pages
{
    public class IndexModel : PageModel
    {
        [BindProperty] public Student student { get; set; } 

        //public Random deletion { get; set; }

        //public int name { get; set; }

        public void OnGet()
        {
        }

        public void OnPostOld()
        {
            //Student.counter++;
            student.Status = "Old";
            Student.listee.Add(student);
        }
        public void OnPostNew(Student stu)
        {
            //Student.counter++;
            student.Status = "New";
            Student.listee.Add(student);
            Student.listee.Remove(stu);
        }
        //public void OnPostDeleting(string Name)
        //{
        //    name = int.Parse(Name);
        //    //OnGet();
        //}
    }
}