#include<iostream>
#include<random>
#include<string>
#include<ctime>
    using namespace std;
        int main(){
           int Human_health = 1000;
           int Monster_health = 2000;
            int human_damage = 500;
            int monster_damage = 600;
            float attack_result;
            float defense_result;
           string human_name;
           float human_fightchance=0.3;
           float human_defensechance=0.5; 
        default_random_engine randomRoll(time(0)) ;
        uniform_real_distribution<float>attackroll(0.0f , 1.0f);
        uniform_real_distribution<float>defenseroll(0.0f,1.0f);
    cout<<"Your name is :"<<endl;
    cin>>human_name;
    cout<<human_name<<" "<<"is the new contender"<<endl;
    while(Human_health>0 && Monster_health>0){
        cout<<"You choose to fight or not"<<endl;
        cout<<"1.Fight"<<endl;
        cout<<"2.Defense"<<endl;
        cout<<"1 or 2 "<<endl;
    int player_choice;
    cin>>player_choice;
    //player choice to fight 
    if(player_choice==1){
        attack_result=attackroll(randomRoll);
        if(attack_result<=human_fightchance){
            cout<<"Attack succesfully"<<endl;
            cout<<"You fight with "<<human_damage<<endl;
            Monster_health-=human_damage;
            cout<<"Monster have "<<Monster_health<<"left"<<endl;
        if(Monster_health<=0){
            cout<<"You win"<<endl;
            break;
        }
        }
        else {
            cout<<"You miss"<<endl;
            cout<<"Monster health : "<<Monster_health<<endl;
        }
        
    }
    //Human choose to defense 
    if(player_choice==2){
        defense_result=defenseroll(randomRoll);
        if(defense_result<=human_defensechance){
            cout<<"Player defense with "<<Human_health;
            cout<<"Dodge successfully"<<endl;
        }
        else {
            cout<<"Monster attack "<<monster_damage;
            Human_health-=monster_damage;
            cout<<"Player have "<<Human_health<<" Left"<<endl;
        }
        if(Human_health<=0){
            cout<<"You lose "<<endl;
            break;
        }
        
    }

    
    }
}

