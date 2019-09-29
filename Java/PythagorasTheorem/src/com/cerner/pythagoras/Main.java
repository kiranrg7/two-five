// cerner_2^5_2019
// Pythagoras therom formula to calculate hypotenus of the triangle

package com.cerner.pythagoras;
import com.cerner.pythagoras.PythagoreanThm;

import java.io.DataInputStream;
import java.io.IOException;
class main{
    public static void main(String[] args) {
        DataInputStream dis = new DataInputStream(System.in);
        System.out.println("Enter the base and heigh value");
        try {
            PythagoreanThm.base  = Integer.parseInt(dis.readLine());
            PythagoreanThm.height = Integer.parseInt(dis.readLine());
            System.out.println("Hypotenus = "+PythagoreanThm.getHypotenus());

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}