package LP3_JAVA.Livro;

public class Livro {
    String nome;
    String autor;
    int ano;

    public Livro (String nome, String autor, int ano){
        this.nome = nome;
        this.autor = autor;
        this.ano = ano;
    }

    public void exibirDados(){
        System.out.println("\nnome: " + nome +"\nautor: " + autor + "\nano: " + ano );
    }

}