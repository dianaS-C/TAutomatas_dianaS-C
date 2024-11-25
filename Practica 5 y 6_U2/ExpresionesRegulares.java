/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package teoriaC;

/**
 *
 * @author diana
 */
public class ExpresionesRegulares {
   
   public ExpresionesRegulares() {
    }
   public boolean esValidaExpresion1(String cadena){
        if(cadena.contains(" ")){
            return true;
        }
        if(cadena.length()==0 || cadena.startsWith("1") || (cadena.charAt(0)<'0' || cadena.charAt(0)>'1') ){
            return false;
        } 
        for(int i=1 ; i<=cadena.length()-1 ; i++){
                if(cadena.charAt(i)=='1' && cadena.charAt(i+1)=='1'){
                    return false;
                } 
                if(cadena.charAt(i)<'0' || cadena.charAt(i)>'1'){
                    return false;
                }
        }
        return true;
    } 
       
    public boolean esValidaExpresion2(String cadena){
        if(cadena.length()==0 || cadena.startsWith("1") || cadena.contains(" ") || (cadena.charAt(0)<'0' || cadena.charAt(0)>'1') ){
            return false;
        } 
        for(int i=1 ; i<=cadena.length()-1 ; i++){
                if(cadena.charAt(i)=='1' && cadena.charAt(i+1)=='1'){
                    return false;
                } 
                if(cadena.charAt(i)<'0' || cadena.charAt(i)>'1'){
                    return false;
                }
        }
        return true;
    } 
    
    public boolean esValidaExpresion3(String cadena){
        if(cadena.startsWith("+") || cadena.startsWith("-") ||  (cadena.charAt(0) >= '0' && cadena.charAt(0) <= '9')){
            for(int i=1;i<cadena.length()-1;i++){
                if(cadena.charAt(i)<'0' || cadena.charAt(i)>'9'){
                    return false;
                }
            }
            return true;
        }    
        return false;
    }    

    
}