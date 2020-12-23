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
https://www.hackerrank.com/challenges/a-very-big-sum/problem
Solution of the "A Very Big Sum" problem.
Written by Batuhan Özkoç
*/

class Solution
{

//Uygulama
    
    
    //Example Input:
    //5
    //1000000001 1000000002 1000000003 1000000004 1000000005
    //Output:
    //5000000015
    
    // Complete the aVeryBigSum function below.
    static long aVeryBigSum(long[] ar)
    {

        long TempSum = 0;

        for (int x = 0; x < ar.Length; x++)
        {
            TempSum = TempSum + ar[x];
        }

        return TempSum;
    }

    static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int arCount = Convert.ToInt32(Console.ReadLine());

        long[] ar = Array.ConvertAll(Console.ReadLine().Split(' '), arTemp => Convert.ToInt64(arTemp))
        ;
        long result = aVeryBigSum(ar);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
