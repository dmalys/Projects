package main.enemiespackage;

public class ClassesEnem {
    private RacesEnem racesEnem;
    public String classenem;
    public void Roguel(){
        classenem="Roguel";
        racesEnem.estamina=racesEnem.getEstamina()+10;
        racesEnem.eatack=racesEnem.getEatack()+5;
        racesEnem.edefence=racesEnem.getEdefence()+10;
    }
    public void Barborian(){
        classenem="Barborian";
        racesEnem.estamina=racesEnem.getEstamina()+10;
        racesEnem.eatack=racesEnem.getEatack()+10;
    }
    public void Sheep(){
        classenem="Sheep";
        racesEnem.estamina=racesEnem.getEstamina()+5;
        racesEnem.eatack=racesEnem.getEatack()+5;
        racesEnem.edefence=racesEnem.getEdefence()+5;
    }

    public ClassesEnem(RacesEnem racesEnem, String classenem) {
        this.racesEnem = racesEnem;
        this.classenem = classenem;
    }
}
