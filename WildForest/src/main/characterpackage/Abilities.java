package main.characterpackage;

import main.enemiespackage.*;
import java.util.Scanner;

public class Abilities {
    private Races races;
    private RacesEnem racesEnem;
    private Classes classes;
    public int damage;
    private void Fireball() {
        if(races.getStamina() >= 20){
            damage = 50 + races.getAtack() - racesEnem.getEdefence();
            races.stamina = races.getStamina() - 20;
            }
    else {
            System.out.println("You don't have enough stamina.");
            abilitytouse();
        }
        }
    private void Icelance(){
        if(races.getStamina()>=10){
        damage=40+races.getAtack()-racesEnem.getEdefence();
        races.stamina=races.getStamina()-10;}
        else {
            System.out.println("You don't have enough stamina.");
            abilitytouse();
        }
    }
    private void Missle(){
        damage=30+races.getAtack()-racesEnem.getEdefence();
    }
    private void Doubleatack(){
        if(races.getStamina()>=5){
        damage=50+races.getAtack()-racesEnem.getEdefence();
        races.stamina=races.getStamina()-5;}
        else {
            System.out.println("You don't have enough stamina.");
            abilitytouse();
        }
    }
    private void Bite(){
        if(races.getStamina()>=10){
        damage=30+races.getAtack()-racesEnem.getEdefence();
        races.stamina=races.getStamina()-10;
        races.health = races.getHealth() +10;}
        else {
            System.out.println("You don't have enough stamina.");
            abilitytouse();
        }
    }
    private void Charge(){
        if(races.getStamina()>=10){
        damage=50+races.getAtack()-racesEnem.getEdefence();
        races.stamina=races.getStamina()-10;
        races.defence=races.getDefence() +10;}
        else {
            System.out.println("You don't have enough stamina.");
            abilitytouse();
        }
    }
    private void Atack(){
        damage=30+races.getAtack()-racesEnem.getEdefence();
    }
    private void Atackwshield(){
        if(races.getStamina()>=10){
        damage=20+races.getAtack()-racesEnem.getEdefence();
        races.stamina=races.getStamina()-10;
        races.defence=races.getDefence()+20;}
        else {
            System.out.println("You don't have enough stamina.");
            abilitytouse();
        }
    }
    private void Shieldbash(){
        if(races.getStamina()>=10){
        damage=10+races.getAtack()-racesEnem.getEdefence();
        races.stamina=races.getStamina()-10;
        races.defence=races.getDefence()+40;}
        else {
            System.out.println("You don't have enough stamina.");
            abilitytouse();
        }
    }
    private void Stab(){
        if(races.getStamina()>=10){
        damage=15+races.getAtack()-racesEnem.getEdefence();
        races.stamina=races.getStamina()-10;
    }
    else {
            System.out.println("You don't have enough stamina.");
            abilitytouse();
        }
    }
    private void Dodge(){
        if(races.getStamina()>=10){
        races.defence=races.getDefence()+50;
        races.stamina=races.getStamina()-10;
    }
    else {
            System.out.println("You don't have enough stamina.");
            abilitytouse();
        }
    }
    public void classabilities(){                             // do wypisywania na ekranie jaki czar potem po wybraniu odwolac sie do wyzej
        String abilities;
        if(classes.classs.equals("Mage")){
            abilities="1.Fireball 2.Icelance 3.Missle";
            System.out.println(abilities);
        }
        if(classes.classs.equals("Barbarian")){
            abilities="1.Double Atack 2.Bite 3.Charge";
            System.out.println(abilities);
        }
        if(classes.classs.equals("Knight")){
            abilities="1.Atack 2.Atack w/shield 3.Shield bash";
            System.out.println(abilities);
        }
        if(classes.classs.equals("Rogue")){
            abilities="1.Stab 2.Double Atack 3.Dodge";
            System.out.println(abilities);
        }}

        public void abilitytouse() {
                System.out.println("Write number of action you would like to use:");
                Scanner wejscie4 = new Scanner(System.in);
                int ability=wejscie4.nextInt();
                if (classes.classs.equals("Mage")) {
                    switch (ability) {
                        case 1:
                            Fireball();
                            System.out.println("You have dealt:" + damage + "damage.");
                            break;
                        case 2:
                            Icelance();
                            System.out.println("You have dealt:" + damage + "damage.");
                            break;
                        case 3:
                            Missle();
                            System.out.println("You have dealt:" + damage + "damage.");
                            break;
                        default:
                            System.out.println("Wrong number.");
                            abilitytouse();
                    }
                }
                if (classes.classs.equals("Barbarian")) {
                    switch (ability) {
                        case 1:
                            Doubleatack();
                            System.out.println("You have dealt:" + damage + "damage.");
                            break;
                        case 2:
                            Bite();
                            System.out.println("You have dealt:" + damage + "damage.");
                            break;
                        case 3:
                            Charge();
                            System.out.println("You have dealt:" + damage + "damage.");
                            break;
                        default:
                            System.out.println("Wrong number.");
                            abilitytouse();
                    }
                }
                if (classes.classs.equals("Knight")) {
                    switch (ability) {
                        case 1:
                            Atack();
                            System.out.println("You have dealt:" + damage + "damage.");
                            break;
                        case 2:
                            Atackwshield();
                            System.out.println("You have dealt:" + damage + "damage.");
                            break;
                        case 3:
                            Shieldbash();
                            System.out.println("You have dealt:" + damage + "damage.");
                            break;
                        default:
                            System.out.println("Wrong number.");
                            abilitytouse();
                    }
                }
                if (classes.classs.equals("Rogue")) {
                    switch (ability) {
                        case 1:
                            Stab();
                            System.out.println("You have dealt:" + damage + "damage.");
                            break;
                        case 2:
                            Doubleatack();
                            System.out.println("You have dealt:" + damage + "damage.");
                            break;
                        case 3:
                            Dodge();
                            System.out.println("You have dealt:" + damage + "damage.");
                            break;
                        default:
                            System.out.println("Wrong number.");
                            abilitytouse();
                    }
                }
        }
    public Abilities(Races races, RacesEnem racesEnem, Classes classes, int damage) {
        this.races = races;
        this.racesEnem = racesEnem;
        this.classes = classes;
        this.damage = damage;
    }
}

