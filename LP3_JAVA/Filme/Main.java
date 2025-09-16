package LP3_JAVA.Filme;

public class Main {
    public static void main (String [] args){

        Filme filme1 = new Filme ("Interstelar","Paulo",150 );
        Filme filme2 = new Filme ("culpa das estrelas","Paulo",100 );
        Filme filme3 = new Filme ("como treinar seu dragao","Paulo",123 );
    
        Filme[] filmes = {filme1, filme2, filme3};
        for (Filme filme: filmes){
            if(filme.getMinutos() > 120){
                System.out.println(filme.titulo);
            }

        }   
    }

   
}

