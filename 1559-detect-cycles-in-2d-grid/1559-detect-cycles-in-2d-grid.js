/**
 * @param {number} i
 * @param {number} j
 * @param {number} pi
 * @param {number} pj
 * @param {number[][]} isVisited
 * @param {character[][]} grid
 * @param {number} r
 * @param {number} c
 * @return {boolean}
 */
function dfs(i, j, pi, pj, isVisited, grid, r, c) {
    isVisited[i][j] = 1;

    // Check UP
    if (i - 1 >= 0 && grid[i-1][j] === grid[i][j]) {
        if (isVisited[i-1][j] === 0) {
            if (dfs(i-1, j, i, j, isVisited, grid, r, c)) return true;
        } else if (pi !== i-1 || pj !== j) {
            return true;
        }
    }

    // Check RIGHT
    if (j + 1 < c && grid[i][j+1] === grid[i][j]) {
        if (isVisited[i][j+1] === 0) {
            if (dfs(i, j+1, i, j, isVisited, grid, r, c)) return true;
        } else if (pi !== i || pj !== j+1) {
            return true;
        }
    }

    // Check LEFT
    if (j - 1 >= 0 && grid[i][j-1] === grid[i][j]) {
        if (isVisited[i][j-1] === 0) {
            if (dfs(i, j-1, i, j, isVisited, grid, r, c)) return true;
        } else if (pi !== i || pj !== j-1) {
            return true;
        }
    }

    // Check DOWN
    if (i + 1 < r && grid[i+1][j] === grid[i][j]) {
        if (isVisited[i+1][j] === 0) {
            if (dfs(i+1, j, i, j, isVisited, grid, r, c)) return true;
        } else if (pi !== i+1 || pj !== j) {
            return true;
        }
    }

    return false;
}

/**
 * @param {character[][]} grid
 * @return {boolean}
 */
var containsCycle = function(grid) {
    const r = grid.length;
    const c = grid[0].length;

    var isVisited = Array.from({ length: r }, () => Array(c).fill(0));

    for (let i = 0; i < r; i++) {
        for (let j = 0; j < c; j++) {
            if (isVisited[i][j] === 0) {
                if (dfs(i, j, -1, -1, isVisited, grid, r, c)) return true;
            }
        }
    }

    return false;
};