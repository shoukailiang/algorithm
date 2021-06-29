// bfs
class Solution {
    public int findCircleNum(int[][] isConnected) {
        int city = 0;
        Queue<Integer> queue = new LinkedList<Integer>();
        int len = isConnected.length;
        // 每个节点
        boolean visited[] = new boolean[len];
        for(int i=0;i<len;i++){
            if(!visited[i]){
               queue.offer(i);
               while(!queue.isEmpty()){
                   int k = queue.poll();
                   visited[k] = true;
                   // 找他的周围一圈
                   for(int j=0;j<len;j++){
                        if(isConnected[k][j]==1&&!visited[j]&&i!=j){
                            queue.offer(j);
                        }
                    }
               }
               city++;
            }
        }
        return city;
    }
}