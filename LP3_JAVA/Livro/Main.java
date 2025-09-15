package LP3_JAVA.Livro;

public class Main {
    
    public static void main (String[] args){

        Livro livro1 = new Livro("Game of throns", "Paulo", 1995 );
        Livro livro2 = new Livro("A culpa é das estrelas", "Larissa", 1955 );
        Livro livro3 = new Livro("1985", "George", 1985 );

        Livro[] Biblioteca = {livro1, livro2, livro3};

        for (int i= 0; i < 3 ; i++){
            Biblioteca[i].exibirDados();
        }
        
    }


}
