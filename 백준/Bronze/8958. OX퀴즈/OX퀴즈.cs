using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            int a = int.Parse(Console.ReadLine());
            int i,j,count;
            
            int[] re = new int[a];

            for (i = 0; i < a; i++)
            {
                count=0;
                re[i]=0;
                string b = Console.ReadLine();
                
                for (j = 0; j<b.Length; j++)
                {
                    if (b[j] == 'O')
                    {
                        count++;
                        re[i] += count; ;

                    }
                    else
                    {
                        count = 0;
                    }
                }
            }
            for (i = 0; i < a; i++)
            {
                Console.WriteLine(re[i]);
            }

            
    
        }
    }
}
