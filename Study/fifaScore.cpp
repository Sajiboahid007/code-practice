#include<bits/stdc++.h>
using namespace std;

class Fifa
{
public:
    string region ,teamName;
    int cup;
    vector<string> regionNames;
};


class Team:public Fifa
{

public:
    Team()
    {
        regionNames.push_back("Latin America");
        regionNames.push_back("Europe");
        regionNames.push_back("Asia");
        regionNames.push_back("Middle East");
        regionNames.push_back("Unknown");


    }
    void Display()
    {
        cout << "Region = " << region << "\nTeam Name = " << teamName << "\nNumber of Cup = " << cup << endl;
    }
    string GetRegion()
    {
        //region show
        printf("Region Names List:\n");
        for(int i = 0 ; i < regionNames.size(); i ++)
        {
            cout << i + 1 << ". " << regionNames[i] << endl;
        }
        int choice;
        printf("Choice your region name: ");
        scanf("%d", &choice);
//searching area
        for(int i = 0 ; i < regionNames.size(); i ++)
        {
            if(choice == i + 1)
            {
                return regionNames[i];
            }
        }
    }
};
int main()
{
    vector<Team> storage;
    for(int i=0;i<1;i++)
    {
        string name;
        int numberOfCup;
        cin>>name>>numberOfCup;
        Team team;
        team.region = team.GetRegion();
        team.teamName=name;
        team.cup=numberOfCup;
        storage.push_back(team);
    }
    for(int i=0;i<storage.size();i++)
    {
        Team team=storage[i];
        team.Display();
    }
}
