class Solution {
    public int countCoveredBuildings(int n, int[][] buildings) {

     int[] maxr = new int[n + 1];
     int[] minr = new int[n + 1];
     int[] maxc = new int[n + 1];
     int[] minc = new int[n + 1];

    Arrays.fill(minr, Integer.MAX_VALUE);
    Arrays.fill(minc, Integer.MAX_VALUE);

    for( int[] b : buildings){
        int x = b[0];
        int y = b[1];

        maxr[y] = Math.max(x, maxr[y]);
        minr[y] = Math.min(x, minr[y]);
        maxc[x] = Math.max(y, maxc[x]);
        minc[x] = Math.min(y, minc[x]);
    }
    
    int cnt = 0;

    for(int []  b : buildings){
        int x = b[0];
        int y = b[1];

        if( (x > minr[y] && x < maxr[y]) && (y > minc[x] && y < maxc[x])){
            cnt++;
        } 
    }

    return cnt;
    }
}