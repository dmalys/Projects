package main.mechanicspackage;

import java.util.Random;

public class Obstacles {
    private int noway;
    int getnoway(){
        return  noway;
    }
    public void BigRock(){
        Random generatorobst = new Random();
        switch (generatorobst.nextInt(3)){
            case 0:
                noway=1;            //blokada na 1
                break;
            case 1:
                noway=2;            //blokada na 2
                break;
            case 2:
                noway=3;            //blokada na 3
                break;
        }
    }
    public Obstacles(int noway) {
        this.noway = noway;
    }
}