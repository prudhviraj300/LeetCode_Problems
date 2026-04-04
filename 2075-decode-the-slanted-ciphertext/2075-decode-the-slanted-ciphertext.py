class Solution:
    def decodeCiphertext(self, encodedText: str, rows: int) -> str:
        if encodedText == "":
            return ""
        
        cols = int(len(encodedText) / rows)

        mat = [[None]*cols for _ in range(rows)]
        idx = 0
        for i in range (rows):
            for j in range(cols):
                mat[i][j] = encodedText[idx]
                idx = idx + 1
        
        res = []

        idx = 0

        for i in range(cols):
            r,c = 0,i
            while (r < rows and c < cols):
                res.append(mat[r][c])
                r = r + 1
                c = c + 1
        
        return "".join(res).rstrip()