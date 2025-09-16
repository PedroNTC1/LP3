package LP3_JAVA.Filme;

public class Filme {
    String titulo, diretor;
    int minutos;


    // construtor
    public Filme (String titulo, String diretor, int minutos){
        this.titulo = titulo;
        this.diretor = diretor;
        this.minutos = minutos;
    }
    public String getTitulo() {
        return titulo;
    }

    public String getDiretor() {
        return diretor;
    }

    public int getMinutos() {
        return minutos;
    }

}
