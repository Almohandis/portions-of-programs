using System;
namespace ConsoleApp1
{
    struct point
    {
        public int x { get; set; }
        public int y { get; set; }
        
        public point GetNewPoint(point oldPoint)
        {
            point  newPoint =new point(){ x = oldPoint.x * 10, y = oldPoint.y * 20 };
            return newPoint;
        }
        public point GetNewPoint()
        {
            return new point { x = this.x * 10, y = this.y * 20 };
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[]{ 1, 3, 4, 8, 4, 2 };
            int max = arr[0];
            for(int i=1;i<arr.Length;i++)
            {
                if (arr[i] > max)
                    max = arr[i];
            }
            Console.WriteLine(max);
            Console.ReadLine();
            point myPoint = new point() { y = 10, x = 5 };
            point secPoint = new point();
            point resultPoint = secPoint.GetNewPoint();
            Console.WriteLine(resultPoint.x);
            Console.WriteLine(resultPoint.y);
            
        }
    }
}