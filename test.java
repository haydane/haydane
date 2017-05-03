import java.awt.*;
import java.awt.event.*;
public class test{
	public static void main(String[] args) {
			Frame frm=new Frame("Hello World");
			frm.setLocation(500,300);
			frm.setSize(500,300);
			frm.setLayout(null);
			TextField txt1=new TextField();
			TextField txt2=new TextField();
			Button btn1 = new Button("enter");
			btn1.setBounds(140,230,80,30);
			txt1.setBounds(140,150,150,30);
			txt2.setBounds(140,190,150,30);
			btn1.addActionListener(new ActionListener(){
					public void actionPerformed(ActionEvent e){
						txt2.setText(txt1.getText());
						//System.exit(0);	
					}
			});
			frm.add(txt1);
			frm.add(txt2);
			frm.add(btn1);
			frm.setVisible(true);
	}
}