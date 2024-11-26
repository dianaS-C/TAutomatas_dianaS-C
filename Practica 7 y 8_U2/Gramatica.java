/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Gramatica;

import javax.swing.JTextArea;

/**
 *
 * @author diana
 */
public class Gramatica {
    public Gramatica() {
    }
    
    public boolean validarCadena(String s){
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)>'9' || s.charAt(i)<'0'){
                return false;
            }
        }
        return true;
    }
    
    public boolean validarCadena2(String s){
        if(s.startsWith("+") || s.startsWith("-")){
            for(int i=1;i<s.length();i++){
                if(s.charAt(i)>'9' || s.charAt(i)<'0'){
                    return false;
                }
            }
            return true;
        }else{
            for(int i=0;i<s.length();i++){
                if(s.charAt(i)>'9' || s.charAt(i)<'0'){
                    return false;
                }
            }
            return true;
        }
        
    }
    
    
    public void showGramatica(JTextArea tA, String s){
        tA.append("DR\n");
        for(int i=0; i<s.length();i++){
            if(i==s.length()-1){
                tA.append(s+"R\n"+s);
            }else{
                tA.append(s.substring(0,i+1)+"R\n"+s.substring(0,i+1)+"DR\n");
            }
        }
    }
    
    public void showGramatica2(JTextArea tA, String s){
        tA.append("F\nEs\nSE\n");
        if(s.startsWith("+") || s.startsWith("-")){
            tA.append(s.charAt(0)+"E\n"+s.charAt(0)+"DR\n");
            for(int i=1; i<s.length();i++){
                if(i==s.length()-1){
                    tA.append(s+"R\n"+s);
                }else{
                    tA.append(s.substring(0,i+1)+"R\n"+s.substring(0,i+1)+"DR\n");
                }
            }
        }else if(s.charAt(0)<='9' && s.charAt(0)>='0'){
            tA.append("E\n" + "DR\n");
            for(int i=0; i<s.length();i++){
            if(i==s.length()-1){
                tA.append(s+"R\n"+s);
            }else{
                tA.append(s.substring(0,i+1)+"R\n"+s.substring(0,i+1)+"DR\n");
            }
        }
            
        }
    }
}
