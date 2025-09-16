//Crie uma classe Retangulo com atributos largura e altura. Adicione um método calcular_area()
// que retorne a área do retângulo.//Crie uma classe Funcionario com um atributo salario.
// Adicione um método aumentar_salario(percentual) que, de fato, aumente o salário do 
//funcionário de acordo com o percentual.


package LP3_JAVA;

public class Retangulo{
    int largura;
    int altura;

    public int calcular_area(int n, int m){
        int x = (n * m);
        return x;
    }
    public Retangulo (int largura, int altura){
        this.largura = largura;
        this.altura = altura;
    }
    public void exibirConta(){
        System.out.println("AREA: "+calcular_area(largura, altura));
    }
    public static void main (String []args){
        Retangulo retangulo1 = new Retangulo( 10, 10);
        Retangulo retangulo2 = new Retangulo(4, 3);

        retangulo1.exibirConta();
        retangulo2.exibirConta();
    }

}
