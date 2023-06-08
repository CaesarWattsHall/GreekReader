// By: Caesar R. Watts-Hall
// Date: June 08, 2023

using System;

namespace GreekAlphabetReader
{
    class Program
    {
        static void Main(string[] args)
        {
            string greekAlphabet = "ΑαΒβΓγΔδΕεΖζΗηΘθΙιΚκΛλΜμΝνΞξΟοΠπΡρΣσςΤτΥυΦφΧχΨψΩω";
            for (int i = 0; i < greekAlphabet.Length; i += 2)
            {
                Console.WriteLine(greekAlphabet[i] + " " + greekAlphabet[i + 1]);
            }
        }
    }
}
