#include<iostream>
#include<random>
#include<string>
#include<ctime>
    using namespace std;
        int main(){
           int player_health = 1000;
           int monster_health = 2000;
            int player_damage = 100;
            int monster_damage = 200;
            float attack_result;
            float defense_result;
           string player_name;
           float player_fightchance=0.5;
           float player_defensechance=0.4; 
        default_random_engine randomRoll(time(0)) ;
        uniform_real_distribution<float>attackroll(0.0f,1.0f);
        uniform_real_distribution<float>defenseroll(0.0f,1.0f);
    cout<<"Your name is :"<<endl;
    getline(cin,player_name);
    cout<<player_name<<" "<<"is the new contender"<<endl;
    while(player_health>0 && monster_health>0){
        cout<<"You choose to fight or not"<<endl;
        cout<<"1.Fight"<<endl;
        cout<<"2.Defense"<<endl;
        cout<<"1 or 2 "<<endl;
    int player_choice;
    cin>>player_choice;
    cout<<"Your choice is "<<player_choice<<endl;
    //player choice to fight 
    if(player_choice==1){
        attack_result=attackroll(randomRoll);
        if(attack_result<=player_fightchance){
            cout<<"Attack succesfully"<<endl;
            cout<<player_name<<" fight with "<<player_damage<<endl;
            monster_health-=player_damage;
            cout<<"Monster have "<<monster_health<<" left"<<endl;
        }
        else {
            cout<<"Monster attack "<<monster_damage<<endl;
            player_health-=monster_damage;
            cout<<"Player have "<<player_health<<" Left"<<endl;
        if(player_health<=0){
            cout<<player_name<<" lose "<<endl;
            }
        }
        if(monster_health<=0){
            cout<<"You win"<<endl;
            }
        }
        else {
            cout<<player_name<<" miss"<<endl;
            cout<<"Monster health : "<<monster_health<<" remaining"<<endl;
        }
    //player choose to defense 
    if(player_choice==2){
        defense_result=defenseroll(randomRoll);
        if(defense_result<=player_defensechance){
            cout<<player_name<<" defense with "<<player_health<<endl;
            cout<<"Dodge successfully"<<endl;
        }
        else {
            cout<<"Monster attack "<<monster_damage<<endl;
            player_health-=monster_damage;
            cout<<"Player have "<<player_health<<" Left"<<endl;
        }
        if(player_health<=0){
            cout<<"You lose "<<endl;
            
            }
        }
    }
 }


