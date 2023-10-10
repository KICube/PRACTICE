func fill(land[][]int){
    for row := 0; row < len(land); row += 1{
        for col := 0; col < len(land[0]); col += 1{
            if(land[row][col] == -1){
                for check_r := row - 1;check_r <= row + 1;check_r += 1{
                    for check_c := col - 1; check_c <= col + 1; check_c += 1{
                        if check_c >= 0 && check_c < len(land[0]) && check_r >= 0 && check_r < len(land) && land[check_r][check_c] != -1{
                            land[check_r][check_c] += 1
                        }
                    }
                }
            }
        }
    }
}
