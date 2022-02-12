using System;
using System.Linq;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] arr1 = Enumerable.Range(1, 2000).ToArray();

            int[] arr2 = new int[] { 2,1, 60,5, 40,3, 10 };
            int min = arr2[0];
            for (int i = 0; i < arr2.Length; i++)
            {
                for (int ji = i + 1; ji < arr2.Length; ji++)

                    if (arr2[i] > arr2[ji])
                    {
                        int temp = arr2[i];
                        arr2[i] = arr2[ji];
                        arr2[ji] = temp;
                    }
            }
            for (int i = 0; i < arr1.Length; i++)
            {
                for (int ji = i + 1; ji < arr1.Length; ji++)

                    if (arr1[i] > arr1[ji])
                    {
                        int temp = arr1[i];
                        arr1[i] = arr1[ji];
                        arr1[ji] = temp;
                    }
            }
            int j = 0;
            for (int i = 0; i < arr1.Length; i++)
            {
                if (arr1[i] != arr2[j])
                {
                    Console.WriteLine(arr1[i]);
                    continue;
                }
                j++;
                if (j == arr2.Length) {
                    j--;
            }
            }
        }
    }
}