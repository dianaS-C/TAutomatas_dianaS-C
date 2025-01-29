package Gramatica;

import javax.swing.JTextArea;

/*
 * @author Zuliani Avendaño Vera
           Alexandro Spota Cado
           Diana Stephany Cado Pitol
 */

public class Gramatica {
    
    
    
    public static String getPilaAsString(String cadena){
        String resultado="ε\n$\nEn$";
        int i;
        for(i=0; i<cadena.length(); i++){
            resultado= resultado+"\nDR$\n"+cadena.charAt(i)+"R$\n"+"R$";
        }
        return resultado+"\n$\nε";
    }
    
    public static String getEntradaAsString(String cadena){
        String resultado=cadena+"\n"+cadena;
        int i;
        int j;
        for(i=0; i<cadena.length(); i++){
            j=3;
            while(j>0){
                resultado= resultado+"\n"+cadena.substring(i);
                j--;
            }
        }
        return resultado+"\nε\nε\nε";
    }
    
    public static String getEstadoAsString(String cadena){
        String resultado="q0\nq1\nq2";
        int i;
        for(i=0; i<(3*cadena.length()); i++){
            resultado= resultado+"\nq2";
        }
        return resultado+"\nq2\nq3";
    }
    
    public static String getTransicionAsString(String cadena){
        String resultado="T(q0, ε, ε; q1, $)\nT(q1, ε, ε; q2, En)\nT(q2, ε, En; q2, DR)";
        int i;
        for(i=0; i<cadena.length(); i++){
            if(i==cadena.length()-1){
                resultado= resultado+"\nT(q2, ε, D; q2, 0...9)\nT(q2, 0...9, 0...9; q2,ε)";
            }else{
                resultado= resultado+"\nT(q2, ε, D; q2, 0...9)\nT(q2, 0...9, 0...9; q2,ε)\nT(q2, ε, R; q2, DR)";
            }
            
        }
        return resultado+"\nT(q2, ε, R; q2, ε)\nT(q2, ε, $; q3, ε)\nACEPTADO";
    }
    
        
    
}
