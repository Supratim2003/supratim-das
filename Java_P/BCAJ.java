import java.applet.*;
import java.awt.*;
public class BCAJ extends Applet {
    Label l1,l2,l3;
    TextField t1,t2;
    Button b1,b2,b3,b4;
    public void init(){
        l1=new Label("enter the 1st number");
        l2=new Label("enter the 2nd number");
        l3=new Label();
        t1=new TextField("");
        t2=new TextField("");
        b1=new Button("+");
        b2=new Button("-");
        b3=new Button("*");
        b4=new Button("/");
        add(l1);
        add(l2);
        add(l3);
        add(t1);
        add(t2);
        add(b1);
        add(b2);
        add(b3);
        add(b4);
        setLayout(null);
        l1.setBounds(50,50,100,40);
        t1.setBounds(170,50,100,40);
        l2.setBounds(50,120,100,40);
        t2.setBounds(170,120,100,40);
        b1.setBounds(70,180,100,40);
        b2.setBounds(90,180,100,40);
        b3.setBounds(110,180,60,40);
        b4.setBounds(130,180,60,40);
        l3.setBounds(100,200,100,40);

    }
}
/*<applet code="BCAJ"height="500"width="500"></applet>*/