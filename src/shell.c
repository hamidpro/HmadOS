#include "../include/shell.h"

 int nb=0;
int j,last = 0;
char * history[10];

 void newCmd(char* cmd) {
history[nb]=(char *)malloc(200);
     history[last%10]=cmd;
     last++;
 }

void listHistory(){
    for(int i = last,  limit = 0; limit != nb ; i = (i -1)%nb , limit++){
         print("\n ");
         print(history[i]);
        }

}




void launch_shell(int id_shell){
    string ch=(string )malloc (200);
    string ch2=(string )malloc (200);

    int counter=0;char loginSucceful='N';



j=0;

 do{
  print("\n  >> logging  : ");
  ch=readStr(ch);
  print("\n  >> password : ");
  ch2=readStr(ch2);
    if(strcompare(ch,"root")==1 && strcompare(ch2,"root")==1 ){

                    loginSucceful='Y';
                    print("\n\n welcome user root in HmadOS\n\n ");

    }
    else{
     print("\n\n   >>  login incorrect  \n ");
    }
  }while(loginSucceful=='N');

    do{
      if(nb>=10) nb=0;
            print2(" >> root@HP :~$ ");
            ch=readStr(ch);
            newCmd(ch);

         //store the history

            if(strcompare(ch,"cmd")){
                print("\n open new shell "); id_shell++; string c=int_to_string(id_shell);print(c);
                launch_shell(id_shell);nb++;
            }
            else if (strcompare(ch,"clear")){
             nb++;  clearScreen();          }
            else if (strcompare(ch,"exit")){
                print("\n exit the current  Shell number ");
                print(int_to_string(id_shell));nb++;
            }
            else if (strcompare(ch,"help")){
                    help();nb++;
            }


            else if (strcompare(ch,"history")){
listHistory();
            }
            else if (strcompare(ch,"echo")){
                    echo();nb++;
            }
            else if (strcompare(ch,"pwd")){
                   pwd();nb++;
            }

            else if (strcompare(ch,"avg")){
                    avg();nb++;
            }
            else if (strcompare(ch,"max")){
                    max();
            }
            else if (strcompare(ch,"min")){
                    min();nb++;
            }
            else if (strcompare(ch,"upper")){
                    upper();
            }
            else if (strcompare(ch,"split")){
                    split();nb++;
            }

            //----------------------------------------------
            else if (strcompare(ch,"man echo")){
                    man_echo();nb++;
            }
            else if (strcompare(ch,"man pwd")){
                    man_pwd();nb++;
            }
            else if (strcompare(ch,"man man")){
                    man_man();nb++;
            }
            else if (strcompare(ch,"man history")){
                    man_history();nb++;
            }
            else if (strcompare(ch,"man min")){
                    man_min();nb++;
            }
            else if (strcompare(ch,"man max")){
                    man_max();nb++;
            }
            else if (strcompare(ch,"man upper")){
                    man_upper();nb++;
            }
            else if (strcompare(ch,"man split")){
                    man_split();nb++;
            }
            else if (strcompare(ch,"man avg")){
                    man_avg();nb++;
            }else{
                print("\n ");
                print(ch);
                print("   : command not found \n");
            }

            print("\n");

    }while (!strcompare(ch,"exit"));


}



//print space
      void space(){
        print("    ");
      }
      void newLine(){
        print("\n ");
      }
//show the fisrt menu
  void menu(){
  print("\n\n  ----------------------------------------------\n ");
  print("       ---------------------------------\n\n ");
  print("        Welcome into Hmad operating system \n\n ");
  print("             HmadOS 1.0 2016-2017  \n\n ");
  print("       ---------------------------------\n ");
  print("  ----------------------------------------------\n\n ");
	print("\n \n \n ");
}

 void information_os()

{

clearScreen();
menu();

  print("\n\n  ----------------------------------------------\n ");
  print("       ---------------------------------\n\n ");
  print("    Information about  Hmad operating system \n\n ");
  print("       ---------------------------------\n ");
  print("  ----------------------------------------------\n\n ");

print("  HmadOS is a simple operating system created by AIT EL CAID Hmad \n  engineering student in Computer Science \n ");

}



