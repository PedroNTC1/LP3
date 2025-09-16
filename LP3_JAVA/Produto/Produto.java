package LP3_JAVA.Produto;

public class Produto {
    private double preco;

    // Construtor para inicializar o preço, isso permitir passar atributo na hr da criaçao, ao inves de criar um produto e depois passar o valor
    public Produto(double preco) {
        this.preco = preco;
    }

    // Método para aplicar o desconto, retornando o novo preço sem alterar o atributo 'preco'
    public double aplicarDesconto(double percentual) {
        return preco - (preco * percentual / 100);
    }

    // Método para obter o preço atual, pois ela está encapsulada (private)
    public double getPreco() {
        return preco;
    }
}