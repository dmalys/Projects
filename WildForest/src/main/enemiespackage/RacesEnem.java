package main.enemiespackage;

public class RacesEnem {
    public int ehealth;
    int estamina;
    int eatack;
    int edefence;
    public String erace;
    public int getEhealth(){
        return ehealth;
    }
    int getEstamina(){
        return estamina;
    }
    int getEatack(){
        return eatack;
    }
    public int getEdefence(){
        return edefence;
    }
    public void Goblin(){
        eatack=5;
        edefence=5;
        erace="Goblin";
        ehealth=70;
        estamina=20;
    }
    public void Orc(){
        eatack=20;
        edefence=5;
        erace="Orc";
        ehealth=100;
        estamina=30;
    }
    public void Troll(){
        eatack=15;
        edefence=0;
        erace="Troll";
        ehealth=80;
        estamina=20;
    }

    public RacesEnem(int ehealth, int estamina, int eatack, int edefence, String erace) {
        this.ehealth = ehealth;
        this.estamina = estamina;
        this.eatack = eatack;
        this.edefence = edefence;
        this.erace = erace;
    }
}
