using System;

    namespace MeuApp{
        class Program{
            static void Main(string[]args){
                var mouse = new Product(1, "Mouse Gamer", 238.4, EproductType.Product);
                var manutencaoEletrica = new Product(2, "Manutecao eletrica domestica", 300, EproductType.Services);
                Console.WriteLine(mouse.Id);

                Console.WriteLine(mouse.Name);

                Console.WriteLine(mouse.Price);

                Console.WriteLine(mouse.Type);
               
                Console.WriteLine(" ");

                Console.WriteLine(manutencaoEletrica.Id);

                Console.WriteLine(manutencaoEletrica.Name);

                Console.WriteLine(manutencaoEletrica.Price);

                Console.WriteLine(manutencaoEletrica.Type);

        }
    }

    struct Product{

        public int Id;
        public string Name;
        public double Price;

        public EproductType Type;
        public Product(int id, string name, double price, EproductType type){
            Id = id;
            Name = name;
            Price = price;
            Type = type;
        }

        public double PriceInDolar(double dolar){
            return Price * dolar;
        }
        
    }

    enum EproductType{
        Product = 1,
        Services = 2
    }
    }
