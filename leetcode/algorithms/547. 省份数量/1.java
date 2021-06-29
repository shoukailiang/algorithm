// 深度优先遍历
class Solution {
    public static void dfs(int[][] isConnected,boolean[] visited,int len,int i ){
        for(int j=0;j<len;j++){
            if(isConnected[i][j]==1&&!visited[j]&&i!=j){
                visited[j] = true;
                dfs(isConnected,visited,len,j);
            }
        }
    }
    public int findCircleNum(int[][] isConnected) {
        int city = 0;
        int len = isConnected.length;
        // 每个节点
        boolean visited[] = new boolean[len];
        for(int i=0;i<len;i++){
            if(!visited[i]){
                dfs(isConnected,visited,len,i);
                city++;
            }
        }
        return city;
    }
}