using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;

namespace addStu.ViewModels
{
    public class Student
    {
        public int ID { get; set; }
        public string Name { get; set; }
        public byte Age { get; set; }
        public string Email { get; set; }
        public string Status { get; set; }
        static public List<Student> listee = new List<Student>();
        //public static int counter = 0;
    }
}