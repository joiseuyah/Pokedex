#include <iostream>
#include <string>
#include <iomanip>
#include <istream>
using namespace std;
//-VOIDS-
void menu();//general menu

void registm();//menu for registering pk's
//containers for registering pk's
void regist1();
void regist2();
void regist3();
void regist4();
void regist5();
void regist6();

void viewm();//menu for viewing pk's
//containers of the registered pk's
void view1();
void view2();
void view3();
void view4();
void view5();
void view6();
void contin();

//VAR CHOICES
int chm;//menu
int chrm;//register menu
int chrv;//view menu
int chb;//go back menu

//-STRUCTURE-
struct Pk
{
    string name;
    string type;
    string moves;
    string loc;
    string desc;
    int level;
};

//containers for the four moves
struct Moves1
{
    string m1;
    string m2;
    string m3;
    string m4;
};

struct Moves2
{
    string m1;
    string m2;
    string m3;
    string m4;
};

struct Moves3
{
    string m1;
    string m2;
    string m3;
    string m4;
};

struct Moves4
{
    string m1;
    string m2;
    string m3;
    string m4;
};

struct Moves5
{
    string m1;
    string m2;
    string m3;
    string m4;
};

struct Moves6
{
    string m1;
    string m2;
    string m3;
    string m4;
};

Pk n1r, n2r, n3r, n4r, n5r, n6r;
Moves1 ma;
Moves2 mb;
Moves3 mc; 
Moves4 md;
Moves5 me;
Moves6 mf;

void menu()
{
    cout << "===============================\n";
    cout << "-------WELCOME TO POKeDEX------\n";
    cout << "             -MENU-            \n";
    cout << "-------------------------------\n";
    cout << " [1] REGISTER POKEMON          \n";
    cout << " [2] VIEW REGISTERED POKEMON   \n";
    cout << " [3] EXIT                      \n";
    cout << "===============================\n";

    cin >> chm;

    switch (chm)
    {
        case 1: registm();

        case 2: viewm();

        case 3: exit;
    }

}

void registm()
{
    
    cout << "===============================\n";
    cout << "      -REGISTER POKEMON-       \n";
    cout << "-------------------------------\n";
    cout << " [1]" << n1r.name << endl;
    cout << " [2]" << n2r.name << endl;
    cout << " [3]" << n3r.name << endl;
    cout << " [4]" << n4r.name << endl;
    cout << " [5]" << n5r.name << endl;
    cout << " [6]" << n6r.name << endl;
    cout << " [7] Go back?\n";
    cout << "===============================\n";

    cin >> chrm;

    switch(chrm)
    {
        case 1: regist1();
        case 2: regist2();
        case 3: regist3();
        case 4: regist4();
        case 5: regist5();
        case 6: regist6();
        case 7: menu();
    }
}

void regist1()
{
    cout << "===============================\n";
    cout << "      -REGISTER POKEMON-       \n";
    cout << "-------------------------------\n";
    cout << "Enter name: ";
    cin >> n1r.name;
    cout << "Enter type: ";
    cin >> n1r.type;
    cout << "Enter level: ";
    cin >> n1r.level;
    cout << "Enter moves: \n";
    cin.ignore(1000, '\n');
    cin >> ma.m1;
    cin.ignore(1000, '\n');
    cin >> ma.m2;
    cin.ignore(1000, '\n');
    cin >> ma.m3;
    cin.ignore(1000, '\n');
    cin >> ma.m4;
    cout << "Enter location: \n";
    cin.ignore(1000, '\n');
    cin >> n1r.loc;
    cout << "Enter description: \n";
    cin.ignore(1000, '\n');
    cin >> n1r.desc;
    cin.ignore(1000, '\n');

    return registm();    
}

void regist2()
{
    cout << "===============================\n";
    cout << "      -REGISTER POKEMON-       \n";
    cout << "-------------------------------\n";
    cout << "Enter name: ";
    cin >> n2r.name;
    cout << "Enter type: ";
    cin >> n2r.type;
    cout << "Enter level: ";
    cin >> n2r.level;
    cout << "Enter moves: \n";
    cin.ignore(1000, '\n');
    cin >> mb.m1;
    cin.ignore(1000, '\n');
    cin >> mb.m2;
    cin.ignore(1000, '\n');
    cin >> mb.m3;
    cin.ignore(1000, '\n');
    cin >> mb.m4;
    cout << "Enter location: \n";
    cin.ignore(1000, '\n');
    cin >> n2r.loc;
    cout << "Enter description: \n";
    cin.ignore(1000, '\n');
    cin >> n2r.desc;
     cin.ignore(1000, '\n');

    return registm();
}

void regist3()
{
    cout << "===============================\n";
    cout << "      -REGISTER POKEMON-       \n";
    cout << "-------------------------------\n";
    cout << "Enter name: ";
    cin >> n3r.name;
    cout << "Enter type: ";
    cin >> n3r.type;
    cout << "Enter level: ";
    cin >> n3r.level;
    cout << "Enter moves: \n";
    cin.ignore(1000, '\n');
    cin >> mc.m1;
    cin.ignore(1000, '\n');
    cin >> mc.m2;
    cin.ignore(1000, '\n');
    cin >> mc.m3;
    cin.ignore(1000, '\n');
    cin >> mc.m4;
    cout << "Enter location: \n";
    cin.ignore(1000, '\n');
    cin >> n3r.loc;
    cout << "Enter description: \n";
    cin.ignore(1000, '\n');
    cin >> n3r.desc;
    cin.ignore(1000, '\n');

    return registm();
}

void regist4()
{
    cout << "===============================\n";
    cout << "      -REGISTER POKEMON-       \n";
    cout << "-------------------------------\n";
    cout << "Enter name: ";
    cin >> n4r.name;
    cout << "Enter type: ";
    cin >> n4r.type;
    cout << "Enter level: ";
    cin >> n4r.level;
    cout << "Enter moves: \n";
    cin.ignore(1000, '\n');
    cin >> md.m1;
    cin.ignore(1000, '\n');
    cin >> md.m2;
    cin.ignore(1000, '\n');
    cin >> md.m3;
    cin.ignore(1000, '\n');
    cin >> md.m4;
    cout << "Enter location: \n";
    cin.ignore(1000, '\n');
    cin >> n4r.loc;
    cout << "Enter description: \n";
    cin.ignore(1000, '\n');
    cin >> n4r.desc;
    cin.ignore(1000, '\n');

    return registm();
}

void regist5()
{
    cout << "===============================\n";
    cout << "      -REGISTER POKEMON-       \n";
    cout << "-------------------------------\n";
    cout << "Enter name: ";
    cin >> n5r.name;
    cout << "Enter type: ";
    cin >> n5r.type;
    cout << "Enter level: ";
    cin >> n5r.level;
    cout << "Enter moves: \n";
    cin.ignore(1000, '\n');
    cin >> me.m1;
    cin.ignore(1000, '\n');
    cin >> me.m2;
    cin.ignore(1000, '\n');
    cin >> me.m3;
    cin.ignore(1000, '\n');
    cin >> me.m4;
    cout << "Enter location: \n";
    cin.ignore(1000, '\n');
    cin >> n5r.loc;
    cout << "Enter description: \n";
    cin.ignore(1000, '\n');
    cin >> n5r.desc;
    cin.ignore(1000, '\n');

    return registm();
}

void regist6()
{
    cout << "===============================\n";
    cout << "      -REGISTER POKEMON-       \n";
    cout << "-------------------------------\n";
    cout << "Enter name: ";
    cin >> n6r.name;
    cout << "Enter type: ";
    cin >> n6r.type;
    cout << "Enter level: ";
    cin >> n6r.level;
    cout << "Enter moves: \n";
    cin.ignore(1000, '\n');
    cin >> mf.m1;
    cin.ignore(1000, '\n');
    cin >> mf.m2;
    cin.ignore(1000, '\n');
    cin >> mf.m3;
    cin.ignore(1000, '\n');
    cin >> mf.m4;
    cout << "Enter location: \n";
    cin.ignore(1000, '\n');
    cin >> n6r.loc;
    cout << "Enter description: \n";
    cin.ignore(1000, '\n');
    cin >> n6r.desc;
    cin.ignore(1000, '\n');

    return registm();
}

void viewm()
{
    cout << "===============================\n";
    cout << "   -VIEW REGISTERED POKEMON-   \n";
    cout << "-------------------------------\n";
    cout << " [1]" << n1r.name << endl;
    cout << " [2]" << n2r.name << endl;
    cout << " [3]" << n3r.name << endl;
    cout << " [4]" << n4r.name << endl;
    cout << " [5]" << n5r.name << endl;
    cout << " [6]" << n6r.name << endl;
    cout << " [7] Go back?\n";
    cout << "===============================\n";
    
    cin >> chrv;

    switch (chrv)
    {
        case 1: view1();
        case 2: view2();
        case 3: view3();
        case 4: view4();
        case 5: view5();
        case 6: view6();
        case 7: contin();
    }
}

void view1()
{
    Pk n1;
    cout << "===============================\n";
    cout << "    -VIEW REGISTERED POKEMON-  \n";
    cout << "-------------------------------\n";    
    cout << "Name: " << n1r.name << endl;
    cout << "Type: " << n1r.type << endl;
    cout << "Level: " << n1r.level << endl;
    cout << "Moves: " << ma.m1 << " " << ma.m2 << " " << ma.m3 << " " << ma.m4 << endl;
    cout << "Location: " << n1r.loc << endl;
    cout << "Description: " << n1r.desc << endl;
    return viewm();
}

void view2()
{
    Pk n2;
    cout << "===============================\n";
    cout << "    -VIEW REGISTERED POKEMON-  \n";
    cout << "-------------------------------\n";    
    cout << "Name: " << n2r.name << endl;
    cout << "Type: " << n2r.type << endl;
    cout << "Level: " << n2r.level << endl;
    cout << "Moves: " << mb.m1 << " " << mb.m2 << " " << mb.m3 << " " << mb.m4 << endl;
    cout << "Location: " << n2r.loc << endl;
    cout << "Description: " << n2r.desc << endl;
    return viewm();
}

void view3()
{
    Pk n3;
    cout << "===============================\n";
    cout << "    -VIEW REGISTERED POKEMON-  \n";
    cout << "-------------------------------\n";    
    cout << "Name: " << n3r.name << endl;
    cout << "Type: " << n3r.type << endl;
    cout << "Level: " << n3r.level << endl;
    cout << "Moves: " << mc.m1 << " " << mc.m2 << " " << mc.m3 << " " << mc.m4 << endl;\
    cout << "Location: " << n3r.loc << endl;
    cout << "Description: " << n3r.desc << endl;
    return viewm();
}

void view4()
{
    Pk n4;
    cout << "===============================\n";
    cout << "    -VIEW REGISTERED POKEMON-  \n";
    cout << "-------------------------------\n";    
    cout << "Name: " << n4r.name << endl;
    cout << "Type: " << n4r.type << endl;
    cout << "Level: " << n4r.level << endl;
    cout << "Moves: " << md.m1 << " " << md.m2 << " " << md.m3 << " " << md.m4 << endl;
    cout << "Location: " << n4r.loc << endl;
    cout << "Description: " << n4r.desc << endl;

    return viewm();
}

void view5()
{
    Pk n5;
    cout << "===============================\n";
    cout << "    -VIEW REGISTERED POKEMON-  \n";
    cout << "-------------------------------\n";    
    cout << "Name: " << n5r.name << endl;
    cout << "Type: " << n5r.type << endl;
    cout << "Level: " << n5r.level << endl;
    cout << "Moves: " << me.m1 << " " << me.m2 << " " << me.m3 << " " << me.m4 << endl;
    cout << "Location: " << n5r.loc << endl;
    cout << "Description: " << n5r.desc << endl;

    return viewm();
}

void view6()
{
    Pk n6;
    cout << "===============================\n";
    cout << "    -VIEW REGISTERED POKEMON-  \n";
    cout << "-------------------------------\n";    
    cout << "Name: " << n6r.name << endl;
    cout << "Type: " << n6r.type << endl;
    cout << "Level: " << n6r.level << endl;
    cout << "Moves: " << mf.m1 << " " << mf.m2 << " " << mf.m3 << " " << mf.m4 << endl;
    cout << "Location: " << n6r.loc << endl;
    cout << "Description: " << n6r.desc << endl;

    return viewm();
}

void contin()
{
    cout << "===============================\n";
    cout << "  -WOULD YOU LIKE TO GO BACK-  \n";
    cout << "            TO MENU?           \n";
    cout << "-------------------------------\n";
    cout << " [1] YES                       \n";
    cout << " [2] NO                        \n";
    cout << "===============================\n";

    cin >> chb;

    switch (chb)
    {
        case 1: menu();

        case 2: exit;
    }
}

int main()
{
    menu ();
}