#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

class energy
{
    private:
        double mass, velocity, height;
        const double grav_accn = 9.81f;
        double kinetic_energy, potential_energy;  

    public:
        void get_info();
        void show_info();
        double kin_energ();
        double pot_energ();

};

// function that takes input of all the parameters
void energy :: get_info()
{
    cout<<"\nEnter the mass in kg: ";cin>>mass;
    cout<<"\nEnter velocity in m/s: ";cin>>velocity;
    cout<<"\nEnter height in meters: ";cin>>height;

    return;
}

// function that gives output of all the desired energies
void energy::show_info()
{
    cout<<"\n\t----Displaying the basic parameters---- "<<endl;
    cout<<"The mass is: "<<mass<<" kg"<<endl;
    cout<<"The velocity is: "<<velocity<<" m/s"<<endl;
    cout<<"The height is: "<<height<<" m"<<endl;
    cout<<"\n\t----The calculation of energies----"<<endl;
    cout<<"The Kinetic energy is: "<<kin_energ()<<" Joules"<<endl;
    cout<<"The Potential energy is: "<<pot_energ()<<" Joules"<<endl;

    return;
}

// function to calculate kinetic energy
double energy::kin_energ()
{
    kinetic_energy = (0.5f*mass*(velocity*velocity));

    return kinetic_energy;
}

// function to calculate potential energy
double energy::pot_energ()
{
    potential_energy = mass*grav_accn*height;

    return potential_energy;
}

int main()
{
    // creating  class objects:
    energy en;
    en.get_info();
    en.kin_energ();
    en.pot_energ();
    en.show_info();
    return 0;

}
