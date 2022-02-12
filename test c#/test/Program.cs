using System;

namespace test
{
    class Program
    {
        class st:stu
        {
            int y;
           public st(int y,int xx):base(xx)
            {
                Console.WriteLine(99);
                this.y = y;
                Console.WriteLine(this.y);
            }
            st(int x):base(x)
            {
                Console.WriteLine(x);
            }
        }
        class stu
        {
            public stu(int d)
            {
                Console.WriteLine(55);
            }
        }

        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
            st ss = new st(6,8);
            //stu ss2 = new st();
            //st ss3 = new (st)stu();
            //stu ss4 = new st(8) { x = 7 };

        }   
    }
}
