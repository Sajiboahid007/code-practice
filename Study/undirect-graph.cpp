#include <iostream>
#include<vector>
using namespace std;

#define vii vector< vector < int > >

int main() {
	int nodes;
	cout << "Please enter the number of nodes: \n";
    scanf("%d" , &nodes ) ;
    vector < int > col ;
    vii connections( nodes , col );
    for ( int i = 0 ; i < nodes - 1  ; i ++ )
    {
        int u , v;
        cout << "Please enter edges u and v: \n";
        scanf("%d%d" , &u , &v) ;
        connections[ u ].push_back( v ) ;
        connections[ v ].push_back( u ) ;
    }

    for(int parent = 0 ; parent < nodes; parent ++){
    	cout << "Node " << parent << "\nChilds: ";
    	for(int child = 0; child <connections[parent].size(); child++ ){
    		cout << connections[parent][child] << " ";
    	}
    	cout << endl;
    }

	return 0;
}
