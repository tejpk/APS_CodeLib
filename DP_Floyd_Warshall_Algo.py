V = 4
INF = 99999
def floydWarshall(graph): 
	dist = map(lambda i : map(lambda j : j , i) , graph) 
	for k in range(V): 
		for i in range(V): 
			for j in range(V): 
				dist[i][j] = min(dist[i][j] , dist[i][k]+ dist[k][j] ) 
	printSolution(dist) 

def printSolution(dist):
	for i in range(V): 
		for j in range(V): 
			if(dist[i][j] == INF): 
				print("INF") 
			else: 
				print(dist[i][j])
			if j == V-1: 
				print( "" )
graph = [[0,5,INF,10], 
			[INF,0,3,INF], 
			[INF, INF, 0, 1], 
			[INF, INF, INF, 0] 
		] 
floydWarshall(graph)
