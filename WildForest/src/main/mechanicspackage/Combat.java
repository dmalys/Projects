package main.mechanicspackage;

import main.characterpackage.*;
import main.enemiespackage.*;

import java.util.Random;


public class Combat {
    private AbilitiesEnem abilitiesEnem;
    private ClassesEnem classesEnem;
    private RacesEnem racesEnem;
    private Abilities abilities;
    private Races races;
    private Counting counting;

    public void Whowithwho(){                                  //  MAKING ENEMIES
        Random generatorEnem = new Random();
        Random generatorClas = new Random();
        int number1 = generatorEnem.nextInt(3);
        int number2 = generatorClas.nextInt(3);
        switch (number1){
            case 0:
                racesEnem.Goblin();
                break;
            case 1:
                racesEnem.Orc();
                break;
            case 2:
                racesEnem.Troll();
                break;
        }
        switch (number2){
            case 0:
                classesEnem.Roguel();
                break;
            case 1:
                classesEnem.Barborian();
                break;
            case 2:
                classesEnem.Sheep();
                break;
        }
        System.out.println("You were ambushed by:"+racesEnem.erace+" "+classesEnem.classenem+"!");
    }
    public void ThatsHowWeFight(){                                 // STARTING FIGHT
        abilities.classabilities();
        abilities.abilitytouse();
        racesEnem.ehealth=racesEnem.getEhealth()-abilities.damage;
        if(racesEnem.getEhealth()<=0){
            System.out.println("Your enemy is dead!");
        }
        else {
            abilitiesEnem.AbilityEnemtouse();
            races.health=races.getHealth()-abilitiesEnem.damageEnem;
            ThatsHowWeFight();
        }
        abilities.damage=0;
        abilitiesEnem.damageEnem=0;
        counting.makeitrain();
        System.out.println("You take a breath regaining some of your stamina.");
        races.stamina=races.getStamina()+5;
    }

    public Combat(AbilitiesEnem abilitiesEnem, ClassesEnem classesEnem, RacesEnem racesEnem, Abilities abilities, Races races, Counting counting) {
        this.abilitiesEnem = abilitiesEnem;
        this.classesEnem = classesEnem;
        this.racesEnem = racesEnem;
        this.abilities = abilities;
        this.races = races;
        this.counting = counting;
    }
}
