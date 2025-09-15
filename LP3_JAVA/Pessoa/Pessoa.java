package LP3_JAVA.Pessoa;
// criacao da classe pessoa 
public class Pessoa {
    String nome;
    int idade;

    //construtor
    public Pessoa (String nome, int idade){
        this.nome = nome;
        this.idade = idade;
    }
    public void exibirDados(){
        System.out.println("\nnome: " + nome + "\nidade: " + idade + "\nanos: ");
    }

    public static void main (String[] args){
        Pessoa pessoa1 = new Pessoa("Ana", 25);
        Pessoa pessoa2 = new Pessoa("Carlos", 33);

        pessoa1.exibirDados();
        pessoa2.exibirDados();
    }
}


