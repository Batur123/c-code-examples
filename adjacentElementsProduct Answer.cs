using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace qwe
{
    class Test
    {
        public int adjacentElementsProduct(int[] inputArray)
        {
            int Temp = int.MaxValue * -1;

            for (int i = 0; i < inputArray.Length; i++)
            {
                if (inputArray.Length - 1 != i)
                {
                    if (inputArray[i] * inputArray[i + 1] < 0)
                    {

                    }
                    if ((inputArray[i] * inputArray[i + 1]) > Temp)
                    {
                        Temp = inputArray[i] * inputArray[i + 1];
                    }
                }
            }

            return Temp;
        }

    }
    class Program
    {
       

        static void Main(string[] args)
        {
            int[] Array = { 3, 6, -2, -5, 7, 3 };
            Test a = new Test();
            Console.Write("Cevap: " + a.adjacentElementsProduct(Array));
            Console.ReadKey();
        }
    }
}
