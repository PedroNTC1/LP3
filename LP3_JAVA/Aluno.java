package LP3_JAVA;

public class Aluno {
    String nome;
    int matricula;

    public Aluno(String nome, int matricula){
        this.nome = nome;
        this.matricula = matricula;
    }
    public void apresentar(){
        System.out.println("Nome: "+nome+"\nMatricula: "+matricula);
    }
    public String getNome(){
        return nome;
    }
    public int getMatricula(){
        return matricula;
    }
    public static void main(String [] args){
        Aluno aluno1 = new Aluno ("Pedro", 202420115);
        Aluno aluno2 = new Aluno ("Gabriel", 202420109);

        aluno1.apresentar();
        aluno2.apresentar();
    }
}

