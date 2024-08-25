#include<iostream>
using namespace std;

class player
{
    private:
    string player1;
    string player2;
    int count1 = 0;
    int count2 = 0;
    string w,s,x;
    char alpha,bita;
    int t;


    public:
    player()
    {
        cout<<"Enter 1st player name: ";
        cin>>player1;
        cout<<"Enter 2nd player name: ";
        cin>>player2;
    }
    void gaining_points()
    {
        do
        {
            cout<<player1<<" choose your sign"<<endl;
            cout<<" q - scissor"<<endl<<" a - paper"<<endl<<" z - rock"<<endl;
            cin>>alpha;
            if(alpha == 'q')
            {
                w = "scissor";
                t = 0;
            }
            else if(alpha == 'a')
            {
                s = "paper";
                t = 0;
            }
            else if(alpha == 'z')
            {
                x = "rock";
                t = 0;

            }
            else
            {
                cout<<"invalid choice"<<endl;
                t = 1;

            }
        }
        while(t == 1);   
            
        do{
            cout<<player2<<" choose your sign"<<endl;
            cout<<" o - scissor"<<endl<<" k - paper"<<endl<<" m - rock"<<endl;
            cin>>bita;
            if(bita == 'o')
            {
                w = "scissor";
                t = 0;
            }
            else if(bita == 'k')
            {
                s = "paper";
                t = 0;
            }
            else if(bita == 'm')
            {
                x = "rock";
                t = 0;

            }
            else 
            {
                cout<<"invalis choice"<<endl;
                t = 1;
            }
        }
        while(t == 1);
        if(alpha == 'q' && bita == 'o')
        {
            cout<<player1<<" - "<<w<<endl;
            cout<<player2<<" - "<<w<<endl;
            cout<<"same sign try different"<<endl;
            gaining_points();
        }  
        else if(alpha == 'a' && bita == 'k')
        {
            cout<<player1<<" - "<<s<<endl;
            cout<<player2<<" - "<<s<<endl;
            cout<<"same sign try different"<<endl;
            gaining_points();

        }
        else if(alpha == 'z' && bita == 'm')
        {
            cout<<player1<<" - "<<x<<endl;
            cout<<player2<<" - "<<x<<endl;
            cout<<"same sign try different"<<endl;
            gaining_points();

        }

        else if(alpha == 'q' && bita == 'm')
        {
            cout<<player1<<" - "<<w<<endl;
            cout<<player2<<" - "<<x<<endl;
            count2++;
            cout<<player1<<" - "<<count1<<"        "<<player2<<" - "<<count2<<endl;
            winner();   
            
        } 

        else if(alpha == 'q' && bita == 'k')
        {
            cout<<player1<<" - "<<w<<endl;
            cout<<player2<<" - "<<s<<endl;
            count1++;
            cout<<player1<<" - "<<count1<<"        "<<player2<<" - "<<count2<<endl;
            winner();

        }

        else if(alpha == 'a' && bita == 'o')
        {
            cout<<player1<<" - "<<s<<endl;
            cout<<player2<<" - "<<w<<endl;
            count2++;
            cout<<player1<<" - "<<count1<<"        "<<player2<<" - "<<count2<<endl;
            winner();

        }
        
        else if(alpha == 'a' && bita == 'm')
        {
            cout<<player1<<" - "<<s<<endl;
            cout<<player2<<" - "<<x<<endl;
            count1++;
            cout<<player1<<" - "<<count1<<"        "<<player2<<" - "<<count2<<endl;
            winner();

        }

        

        else if(alpha == 'z' && bita == 'o')
        {
            cout<<player1<<" - "<<x<<endl;
            cout<<player2<<" - "<<w<<endl;
            count1++;
            cout<<player1<<" - "<<count1<<"        "<<player2<<" - "<<count2<<endl;
            winner();

        }

        else if(alpha == 'z' && bita == 'k')
        {
            cout<<player1<<" - "<<x<<endl;
            cout<<player2<<" - "<<s<<endl;
            count2++;
            cout<<player1<<" - "<<count1<<"        "<<player2<<" - "<<count2<<endl;
            winner();
        }

        else
        {
            cout<<"invalid choice"<<endl;

        }


    }

    void winner()
    {
        if(count1 == 5)
        {
            cout<<player1 <<" is the winner *_*"<<endl;
        }
        else if(count2 == 5)
        {
            cout<<player2 <<" is the winner *_*"<<endl;
        }
        else
        {
            gaining_points();
        }
        
    }
    
};

int main()
{
    player ob1;
    ob1.gaining_points();

}