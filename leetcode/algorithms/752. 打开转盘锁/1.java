class Solution {
  // 将S[j] 向上拨动一次
  String plusOne(String s,int j){
      char[] ch = s.toCharArray();
      if(ch[j]=='9'){
          ch[j] = '0';
      }else{
          ch[j] +=1;
      }
      return new String(ch);
  }
  // 将S[j] 向下拨动一次
  String minusOne(String s,int j){
      char[] ch = s.toCharArray();
      if(ch[j]=='0'){
          ch[j] = '9';
      }else{
          ch[j] -=1;
      }
      return new String(ch);
  }
  public int openLock(String[] deadends, String target) {
      // 记录需要跳过的死亡密码
      Set<String> deads = new HashSet<>();
      for(String s:deadends) deads.add(s);
      // 记录已经穷过得密码,防止走回头路
      Set<String> visited = new HashSet<>();
      Queue<String> q = new LinkedList<>();
      int step = 0;
      q.offer("0000");
      visited.add("0000");
      while(!q.isEmpty()){
          int size = q.size();
          // 扩散
          for(int i=0;i<size;i++){
              String cur = q.poll();
              // 判断是否到达中点
              if(deads.contains(cur)){
                  continue;
              }
              if(cur.equals(target)){
                  return step;
              }
              // 将相邻界点加入队列
              for(int j=0;j<4;j++){
                  String up = plusOne(cur,j);
                  if(!visited.contains(up)){
                      q.offer(up);
                      visited.add(up);
                  }
                  String down = minusOne(cur,j);
                  if(!visited.contains(down)){
                      q.offer(down);
                      visited.add(down);
                  }
              }
          }
          // 增加步数
          step++;
      }
      return -1;
  }
}