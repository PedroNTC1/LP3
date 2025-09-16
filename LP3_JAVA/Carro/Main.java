package LP3_JAVA.Carro;

public class Main {
    
    public static void main (String [] args){

        Carro carro1 = new Carro("x1", "bmw", 2025);
        Carro carro2 = new Carro("cruze", "chevrolet", 2025);
        Carro carro3 = new Carro("hillux", "toyta", 2025);

        carro1.exibir_info();
        carro2.exibir_info();
        carro3.exibir_info();

    }
}
