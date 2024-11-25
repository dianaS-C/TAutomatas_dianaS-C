/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package teoriaC;

/**
 *
 * @author diana
 */
public class Main {
    public static void main(String[] args){
        Expresion cadena= new Expresion();
        System.out.println(cadena.esValidaExpresion1(" "));
        System.out.println(cadena.esValidaExpresion2("001010100100j"));
        System.out.println(cadena.esValidaExpresion3("7167187357688172"));
    }
}
