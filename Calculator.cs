using System;

namespace Calculator
{
    class Calculator
    {
        static void Main(string[]args){
        Menu();


    }


     static void Soma()
     {
         Console.Clear();
            Console.WriteLine("Primeiro valor");

            float v1 = float.Parse(Console.ReadLine());

            Console.WriteLine("Segundo valor");

            float v2 = float.Parse(Console.ReadLine());
            
            Console.WriteLine(" ");

            Console.WriteLine($"O resultado da soma é {v1 + v2}");

            Console.ReadKey();
            Menu();
    }

    static void Sub()
    {
         Console.Clear();
            Console.WriteLine("Primeiro valor");

            float v1 = float.Parse(Console.ReadLine());

            Console.WriteLine("Segundo valor");

            float v2 = float.Parse(Console.ReadLine());
            
            Console.WriteLine(" ");

            Console.WriteLine($"O resultado da subtração é {v1 - v2}");
            Console.ReadKey();
            Menu();
    }
    
    static void Divisao(){
        Console.Clear();
            Console.WriteLine("Primeiro valor");

            float v1 = float.Parse(Console.ReadLine());

            Console.WriteLine("Segundo valor");

            float v2 = float.Parse(Console.ReadLine());
            
            Console.WriteLine(" ");

            Console.WriteLine($"O resultado da divisão é {v1 / v2}");
            Console.ReadKey();
            Menu();
    }

    static void Multiplicacao(){
        Console.Clear();
            Console.WriteLine("Primeiro valor");

            float v1 = float.Parse(Console.ReadLine());

            Console.WriteLine("Segundo valor");

            float v2 = float.Parse(Console.ReadLine());
            
            Console.WriteLine(" ");

            Console.WriteLine($"O resultado da multiplicação é {v1 * v2}");
            Console.ReadKey();
            Menu();
    }

    static void Menu(){
        Console.Clear();

        Console.WriteLine("O que deseja Calcular?");
        Console.WriteLine(" ");
        Console.WriteLine("Para fazer uma soma, digite 1:");
        Console.WriteLine(" ");
        Console.WriteLine("Para fazer uma subtração, digite 2:");
        Console.WriteLine(" ");
        Console.WriteLine("Para fazer uma divisão, digite 3:");
        Console.WriteLine(" ");
        Console.WriteLine("Para fazer uma multiplicação, digite 4:");
        Console.WriteLine(" ");
        Console.WriteLine(" ");
        Console.WriteLine("Para sair digite 0.");
        Console.WriteLine("--------------------------------------------");
        short resposta = short.Parse(Console.ReadLine());

           
        switch(resposta){
            case 1: Soma(); break;
            case 2: Sub(); break;
            case 3: Divisao(); break;
            case 4: Multiplicacao(); break;
            case 0: return ; 
            default: Menu(); break;
        }

    } 
}
}
