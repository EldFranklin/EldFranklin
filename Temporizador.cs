namespace StopWatch{
    class StopWatch{
        static void Main(string[]args){
           Menu();
        }
        static void Menu(){
            Console.Clear();
            Console.WriteLine("Para contar em SEGUNDOS, Por exmeplo, digite  >> 10s <<");
            Console.WriteLine("_____________________");
            Console.WriteLine("Para contar em MiNUTOS, Por exmeplo digite >> 10m <<");
            Console.WriteLine("_____________________");
            Console.WriteLine(" Para sair digite 0.");
            Console.WriteLine("_____________________");
            Console.WriteLine("Quantas unidades de tempo quer contar?");

            string tempoDado = Console.ReadLine().ToLower();
            char tipo = char.Parse(tempoDado.Substring(tempoDado.Length -1 ,1));
            int tempo = int.Parse(tempoDado.Substring(0 ,tempoDado.Length-1));
            int mult = 1;
            if(tipo == 'm'){
                mult = 60;
            }
            if(tempo == 0){
                System.Environment.Exit(0);
            }
           Preparacao(tempo * mult);
        }

        static void Preparacao(int tempo){
            Console.Clear();
            for(int i = 2; i>=0; i--){
                Console.WriteLine($"Começando em {i+1}!");
                Thread.Sleep(1000);

            }
            Comeco(tempo);
        }
        static void Comeco(int time){
            
            int contadorTempo = 0;
            while(contadorTempo != time){
                Console.Clear();
                contadorTempo++;
                Console.WriteLine(contadorTempo);
                Thread.Sleep(1000);

            }
            Console.Clear();
            Console.WriteLine("Contagem acabou");
            Thread.Sleep(2000);
        }
    }
}
