#include<bits/stdc++.h>
using namespace std;

// **********  graph implementation using array of vectors ************

class graph{
    public: 

    int v; // will hold the no. of vertices
    vector<int> *adj; // A pointer of type Vector

    graph(int v){
        this->v=v;
        adj=new vector<int>[v]; // an array of vector is created dynamically
    }
    void add_edge(int e1, int e2, bool bidir=true){
        adj[e1].push_back(e2);
        if(bidir){
            adj[e2].push_back(e1);
        }
    }

    void print(){ 
        for(int i=0; i<v; i++){
            cout<<i<<"-->";
            for(auto el: adj[i]){
                cout<<el<<", ";
            }
            cout<<endl;
        }
    }

};


// **********  graph implementation using array of lists ************

class graphL{
    public: 

    int v; // will hold the no. of vertices
    list<int> *adj; // A pointer of type list

    graphL(int v){
        this->v=v;
        adj=new list<int>[v]; // An array of lists is created dynamically
    }

    void add_edge(int e1, int e2, bool bidir=true){
        adj[e1].push_back(e2);
        if(bidir){
            adj[e2].push_back(e1);
        }
    }

    void print(){ 
        for(int i=0; i<v; i++){
            cout<<i<<"-->";
            for(auto el: adj[i]){
                cout<<el<<", ";
            }
            cout<<endl;
        }
    }

};



int main(){
    
    graph g1(6);
    g1.add_edge(0,1);
    g1.add_edge(0,2);
    g1.add_edge(1,3);
    g1.add_edge(1,4);
    g1.add_edge(2,3);
    g1.add_edge(4,5);
    g1.add_edge(3,5);
cout<<"Graph using Array of Vectors is: \n";
    g1.print();

    cout<<endl;

    graphL g2(6);
    g2.add_edge(0,1);
    g2.add_edge(0,2);
    g2.add_edge(1,3);
    g2.add_edge(1,4);
    g2.add_edge(2,3);
    g2.add_edge(4,5);
    g2.add_edge(3,5);
cout<<"Graph using Array of Lists is: \n";
    g2.print();


    return 0; 
}