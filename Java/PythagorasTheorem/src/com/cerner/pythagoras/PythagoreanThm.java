package com.cerner.pythagoras;
public class PythagoreanThm {
    public static int base;
    public static int  height;
    public static double getHypotenus(){
       return  Math.sqrt((Math.pow(PythagoreanThm.base, 2) + Math.pow(PythagoreanThm.height, 2)));

    }
}
