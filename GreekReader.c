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

// There are several other ways to diplay the Greek Alphabet in this program!

// The 1st example, is by the usage of an "array of strings". 
// You can create an array of strings where each element represents a pair of uppercase and lowercase Greek letters. 
// You can then use a foreach loop to iterate over the elements of the array and display each pair of letters.
// 
// string[] greekAlphabet = new string[] { "Αα", "Ββ", "Γγ", "Δδ", "Εε", "Ζζ", "Ηη", "Θθ", "Ιι", "Κκ", 
// "Λλ", "Μμ", "Νν", "Ξξ", "Οο", "Ππ", "Ρρ", "Σσς", "Ττ", "Υυ", "Φφ", "Χχ", "Ψψ", "Ωω" };
// foreach (string letters in greekAlphabet)
// {
//    Console.WriteLine(letters);
// }

// or,

// by the 2nd example, is using a "two-dimensional array".
// You can create a two-dimensional array where each row represents a pair of uppercase and lowercase Greek letters. 
// You can then use nested for loops to iterate over the rows and columns of the array and display each pair of letters.
// 
// string[,] greekAlphabet = new string[,] { { "Α", "α" }, { "Β", "β" }, { "Γ", "γ" }, { "Δ", "δ" }, { "Ε", "ε" }, { "Ζ", "ζ" }, { "Η", "η" }, { "Θ", "θ" }, { "Ι", "ι" }, { "Κ", "κ" }, { "Λ", "λ" }, { "Μ", "μ" }, { "Ν", "ν" }, {  "<EUGR>","<EUGR>"}, {"<EUGR>", "<EUGR>"}, {"<EUGR>", "<EUGR>"}, {"<EUGR>", "<EUGR>"}, {"<EUGR>", "<EUGR>"}, {"<EUGR>", "<EUGR>"}, {"<EUGR>", "<EUGR>"}, {"<EUGR>", "<EUGR>"}, {"<EUGR>", "<EUGR>"}, {"<EUGR>", "<EUGR>"} };
// for (int i = 0; i < greekAlphabet.GetLength(0); i++)
// {
//  for (int j = 0; j < greekAlphabet.GetLength(1); j++)
//   {
//      Console.Write(greekAlphabet[i, j]);
//   }
//    Console.WriteLine();
// }
