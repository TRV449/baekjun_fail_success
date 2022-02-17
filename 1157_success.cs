using System;
using System.Collections;
class Program {
    static void Main(string[] args) {
      string str = Console.ReadLine();
      str = str.ToLower();

      int[] list = new int[26];
      for(int i = 0; i < 26; i++)
        list[i] = 0;
      
      for(int i = 0; i < str.Length; i++)
        list[((int)str[i] - 97)]++;

      int Max = list[0];
      int maxind = 0;
      int ifduple = 0;
      for(int i = 1; i < 26; i++){
        if(Max < list[i]){
          Max = list[i];
          maxind = i;
        }
      }
      for(int i = maxind + 1; i < 26; i++)
          if(Max == list[i])
            ifduple = 1;
      
      if(ifduple == 1)
        Console.WriteLine("?");
      else
        Console.WriteLine((char)(maxind+65));
    }
}
