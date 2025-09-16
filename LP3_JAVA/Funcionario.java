package LP3_JAVA;

public class Funcionario {
    double salario;

    public Funcionario (double salario){
        this.salario = salario;
    }
    public double getSalario(){
        return salario;
    }
    public double aumentar_salario(double salario, int percentual){
        double x = salario + (salario * percentual)/100;
        return x;
    }
    public void exibir(){
        System.out.println("Novo salario: "+aumentar_salario(salario, 10));
    }
    public static void main (String[]args){
        Funcionario funcionario1 = new Funcionario(1200);

        funcionario1.exibir();
    }

}
