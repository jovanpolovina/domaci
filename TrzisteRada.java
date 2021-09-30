
class Nezaposlen{
     String ime;
     String struka;
      int brojMeseci;
    Boolean zaposlen;
    static int nezapoesleni;
    public Nezaposlen(String ime, int brojMeseci){
        this.ime = ime;
        this.struka = "nekvalifikovani radnik";
        this.brojMeseci = brojMeseci;
        this.zaposlen = false;
nezapoesleni++;
    }
    public Nezaposlen(String ime, String struka, int brojMeseci){
     this.ime = ime;
     this.struka = struka;
     this.brojMeseci = brojMeseci;
     this.zaposlen = false;
     nezapoesleni++;
    }
    public void Zaposli(){
        if(this.struka.equals("programer") || this.struka.equals("informaticar") || this.brojMeseci >= 24){
            this.zaposlen = true;
            nezapoesleni--;
        }
    }
    public void ispisi(){
        System.out.println(this.ime + " \n Struka: " + this.struka + (this.zaposlen==true ? (" status: " + this.zaposlen) : ("Ceka na posao " + this.brojMeseci)));
     
    
    }
}


public class TrzisteRada{
    public static void main(String[] args){
       Nezaposlen n1 = new Nezaposlen("Pera",2);
       Nezaposlen n2 = new Nezaposlen("Jova", "programer", 1);
       Nezaposlen n3 = new Nezaposlen("Miki", 12);
       Nezaposlen n4 = new Nezaposlen("Aleksa", 3);
       n1.Zaposli();
       n2.Zaposli();
       n3.Zaposli();
       n4.Zaposli();
       n1.ispisi();
       n2.ispisi();
       n3.ispisi();
       n4.ispisi();
       System.out.println(Nezaposlen.nezapoesleni);
       
    }
}