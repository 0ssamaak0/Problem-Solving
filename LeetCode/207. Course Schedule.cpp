class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        // indegree array
        vector<int> indegree(numCourses, 0);
        // build the graph: adjacency matrix
        vector<vector<bool>> graph(numCourses, vector<bool>(numCourses, false));

        // for the prerequisite[a, b]: increase the indegree of a, and add an edge from b to a
        for (int i = 0; i < prerequisites.size(); i++)
        {
            int a = prerequisites[i][0];
            int b = prerequisites[i][1];
            indegree[a]++;
            graph[b][a] = true;
        }

        // DFS
        queue<int> q;

        // iterate through all vertices
        for (int i = 0; i < indegree.size(); i++)
        {
            // for a vertex with indegree = 0, push to queue
            // the second condition is for isolated nodes
            if (indegree[i] == 0 && find(graph[i].begin(), graph[i].end(), true) != graph[i].end())
            {
                q.push(i);
            }
        }

        // no vertex with indegree = 0
        while (!q.empty())
        {
            int current = q.front();
            q.pop();
            for (int i = 0; i < graph[current].size(); i++)
            {
                if (graph[current][i] == true)
                {
                    indegree[i]--;
                    if (indegree[i] == 0)
                    {
                        q.push(i);
                    }
                }
            }
        }

        // check if all vertices are visited
        for (int v : indegree)
        {
            if (v != 0)
            {
                return false;
            }
        }
        return true;
    }
};