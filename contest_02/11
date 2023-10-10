func isValidSudoku(bord [9][9]int) bool {
	for row := 0; row < 9; row += 1 {
		sub_row := make([]bool, 9)
		for j := range sub_row {
			sub_row[j] = false
		}
		for col := 0; col < 9; col += 1 {
			if sub_row[bord[row][col]-1] == false {
				sub_row[bord[row][col]-1] = true
			} else {
				return false
			}
		}
	}
	for col := 0; col < 9; col += 1 {
		sub_col := make([]bool, 9)
		for j := range sub_col {
			sub_col[j] = false
		}
		for row := 0; row < rows; row += 1 {
			if sub_col[bord[row][col]-1] == false {
				sub_col[bord[row][col]-1] = true
			} else {
				return false
			}
		}
	}
	for row := 1; row < 9; row += 3 {
		for col := 1; col < 9; col += 3 {
			var sub_roco [3][3]bool
			for i := 0; i <= 2; i += 1 {
				for j := 0; j <= 2; j += 1 {
					sub_roco[i][j] = false
				}
			}
			for i := -1; i <= 1; i += 1 {
				for j := -1; j <= 1; j += 1 {
					num := (float64(bord[i+row][j+col]) - 1) / float64(3)
					if sub_roco[int(num)][(bord[i+row][j+col])%3] == false {
						sub_roco[int(num)][(bord[i+row][j+col])%3] = true
					} else {
						return false
					}
				}
			}
		}
	}
	return true
}
