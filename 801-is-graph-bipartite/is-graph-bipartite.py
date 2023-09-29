class Solution:
    def isBipartite(self, g: List[List[int]]) -> bool:
        n = len(g)
        color = [-1]*n
        def dfs(node):
            for neigh in g[node]:
                if color[neigh] == -1:
                    color[neigh] = 1-color[node]
                    if not dfs(neigh):
                        return False
                elif color[neigh]==color[node]:
                    return False
            return True

        for i in range(n):
            if color[i] == -1:
                color[i]=1
                if not (dfs(i)):
                    return False
        return True

        # def bipartite_dfs(node, g, color):
        #     for neighbor in g[node]:
        #         if color[neighbor] == -1:
        #             color[neighbor] = 1 - color[node]
        #             if not bipartite_dfs(neighbor, g, color):
        #                 return False
        #         elif color[neighbor] == color[node]:
        #             return False
        #     return True

        # for i in range(n):
        #     if color[i] == -1:
        #         color[i] = 1
        #         if not bipartite_dfs(i, g, color):
        #             return False
        # return True
        
                    
            
