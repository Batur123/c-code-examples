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
https://www.hackerrank.com/challenges/diagonal-difference
Solution of the" Diagonal Difference" problem.
Written by Batuhan Özkoç
*/


/*
Input:
3
11 2 -4
4 5 6 
10 8 -12
Output:
15


Buradaki işlemde matrisin ilk önce kaça kaçlık olacağını üstte belirtiyoruz. Girilen 3 değeri matrisin 3x3 olduğunu belirler.
Daha sonra ise Matrisin elemanları(00,01,02,10,11,12,20,21,22)  olan 11,2,-4,4,5,6,10,8,12 sayılarını giriyoruz.
Sonrasında ise matrisin Köşegen Farklarını hesaplıyor.

*/
class Result
{

    public static int TempSum=0;
    public static int SumX=0,SumY=0;

    /*
     * Complete the 'diagonalDifference' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts 2D_INTEGER_ARRAY arr as parameter.
     */

    public static int diagonalDifference(List<List<int>> arr)
    {
      


       for(int x=0,y=arr.Count-1; x < arr.Count ; x++,y--)
       {
           SumX += arr[x][x];
           SumY += arr[x][y];
          
          
       }

        int Temp = SumY-SumX;
        if(Temp < 0)
        {
          Temp = Temp * -1;
          return Temp;
        }
        else
        { 
          return Temp;
        }

    }

}

class Solution
{
    public static void Main(string[] args)
    {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int n = Convert.ToInt32(Console.ReadLine().Trim());

        List<List<int>> arr = new List<List<int>>();

        for (int i = 0; i < n; i++)
        {
            arr.Add(Console.ReadLine().TrimEnd().Split(' ').ToList().Select(arrTemp => Convert.ToInt32(arrTemp)).ToList());
        }

        int result = Result.diagonalDifference(arr);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
