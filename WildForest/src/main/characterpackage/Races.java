package main.characterpackage;

public class Races {
    public int health;
    public int stamina;
    public int atack;
    int defence;
    String race;
    public int getHealth(){  return health; }
    public int getStamina(){
        return stamina;
    }
    public int getAtack(){
        return atack;
    }
    public int getDefence(){
        return defence;
    }
    void Elf(){
        atack += 20;
        defence += 10;
        race="Elf";
        health += 150;
        stamina += 50;
        System.out.println("You have chosen Elf race.");
    }
    void Human(){
        atack+=30;
        defence+=10;
        race="Human";
        health+=250;
        stamina+=40;
        System.out.println("You have chosen Human race.");
    }
    void Dwarve(){
        atack+=40;
        defence+=10;
        race="Dwarve";
        health+=300;
        stamina+=50;
        System.out.println("You have chosen Dwarve race.");
    }

    public Races(int health, int stamina, int atack, int defence, String race) {
        this.health = health;
        this.stamina = stamina;
        this.atack = atack;
        this.defence = defence;
        this.race = race;
    }
}
