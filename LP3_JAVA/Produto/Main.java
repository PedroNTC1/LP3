package LP3_JAVA.Produto;

public class Main {
     public static void main(String[] args) {
        // Criando um objeto Produto com preço inicial de 100
        Produto produto = new Produto(100.0);
        
        // Exibindo o preço inicial(usando get para pegar o valor)
        System.out.println("Preço inicial: R$ " + produto.getPreco());
        
        // Aplicando um desconto de 10%
        double novoPreco = produto.aplicarDesconto(10);
        
        // Exibindo o novo preço com o desconto
        System.out.println("Novo preço após 10% de desconto: R$ " + novoPreco);
        
        // Verificando que o preço do objeto original não foi alterado
        System.out.println("Preço do objeto após o desconto: R$ " + produto.getPreco());
    }
}
