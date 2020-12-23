using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

/*
https://www.hackerrank.com/challenges/compare-the-triplets/problem
Solution of the" Compare the Triplets" problem.
Written by Batuhan Özkoç
*/

namespace ConsoleApp1
{
    //Uygulama
    
    
    //Example Input:
    //17 28 30
    //99 16 8
    //Output:
    //2 1
    class Program
    {
        static List<int> compareTriplets(List<int> a, List<int> b)
        {

 
            int x=0, y=0;

            for (int num3 = 0; num3 < a.Count; num3++)
            {
                if (a[num3] > b[num3])
                {

                    x++;
                    
                }
                else if (a[num3] == b[num3])
                {
                    //nobody receives a point.
                    
                }
                else if (a[num3] < b[num3])
                {
 
                    y++;

                }
            
                

            }

            b.Clear();
            b.Add(x);
            b.Add(y);
            return b;
        }


        static void Main(string[] args)
        {



            TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

            List<int> a = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(aTemp => Convert.ToInt32(aTemp)).ToList();

            List<int> b = Console.ReadLine().TrimEnd().Split(' ').ToList().Select(bTemp => Convert.ToInt32(bTemp)).ToList();

            List<int> result = compareTriplets(a, b);

            textWriter.WriteLine(String.Join(" ", result));

            textWriter.Flush();
            textWriter.Close();



        }

    }
}
