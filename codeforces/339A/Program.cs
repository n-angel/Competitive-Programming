using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _339A
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] bucket = new int[3] { 0, 0, 0 };
            string sum;
            int i, j;

            sum = Console.ReadLine();

            char [] sumElements = sum.ToCharArray();
            int ap = 0;

            for (i = 0; i<sum.Length; i += 2)
            {
                bucket[sum[i] - '1']++;
            }

            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < bucket[i]; j++)
                {
                    sumElements[ap] = (char)(i + '1');
                    ap += 2;
                }
            }

            Console.WriteLine(sumElements);
        }
    }
}
