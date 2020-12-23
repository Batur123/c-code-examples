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

// Problem Explanation: https://www.hackerrank.com/challenges/plus-minus/problem
class Solution {

    // Complete the plusMinus function below.
    static void plusMinus(int[] arr)
    {
        
        float positive=0,negative=0,zero=0;


            for(int x=0; x< arr.Count(); x++)
            {
                   if(arr[x] < 0)
                   {
                         positive++;
                   }
                   else if(arr[x] == 0)
                   {
                         zero++; 
                   }
                   else if(arr[x] > 0)
                   {
                         negative++;
                   }
            }

            positive = positive / arr.Count();
            negative = negative / arr.Count();
            zero = zero / arr.Count();

            Console.WriteLine(negative +"\n"+ positive+ "\n"+ zero);

    }

    static void Main(string[] args) {
        int n = Convert.ToInt32(Console.ReadLine());

        int[] arr = Array.ConvertAll(Console.ReadLine().Split(' '), arrTemp => Convert.ToInt32(arrTemp))
        ;
        plusMinus(arr);
    }
}
