#include<iostream>
#include<vector>

using namespace std;

class Graph{
	int numVertices;
	vector<vector<bool>> adjMatrix;
	public:
		Graph(int V): numVertices(V), adjMatrix(V, vector<bool>(V, false)) {}
		
		void addEdge(int i, int j) {
			adjMatrix[i][j]=true;
		}
		void warshell() {
			vector<vector<bool>>reachabilityMatrix = adjMatrix;
			for(int k=0; k<numVertices; k++) {
				for(int i=0; i<numVertices; i++) {
					for(int j=0; j<numVertices; j++) {
						reachabilityMatrix[i][j]=reachabilityMatrix[i][j] || (reachabilityMatrix[i][k]&&reachabilityMatrix[k][j]);
					}
				}
			}
			printMatrix(reachabilityMatrix);
		}
		void printMatrix(const vector<vector<bool>>&matrix) {
			for(int i=0;i<numVertices;i++) {
				for(int j=0;j<numVertices;j++) {
					cout<<matrix[i][j]<<" ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 0);
	
	cout<<"Reachability Matrix: "<<endl;
	g.warshell();
	return 0;
}