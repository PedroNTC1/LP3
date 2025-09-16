package LP3_JAVA.Carro;

public class Carro {
    String modelo, marca;
    int ano; 

    public Carro (String modelo, String marca, int ano){
    this.modelo = modelo;
    this.marca = marca;
    this.ano = ano;
    }

    public void exibir_info(){
    System.out.println("modelo: "+modelo+ "marca: "+marca+ "ano: "+ano);
    }
}