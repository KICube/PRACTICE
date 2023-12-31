package main

import (
    "fmt"
)

func main() {
    var cnt int32
    var X int32
    
    fmt.Scan(&cnt)
    fmt.Scan(&X)
    
    nums := map[int32]int32{}
    var i int32
    for i = 0; i < cnt; i ++ {
        var num int32
        fmt.Scanf("%d", &num)
        nums[num] += 1;
    }
    var res1 int32 = 0
    var res2 int32 = 0
    for ind,_ := range nums{
        if nums[X-ind] > 0{
            nums[ind] -= 1
            if nums[X-ind] >= 1{
                res1 = X-ind
                res2 = ind
                break
            }
        }
    }
    if res1 > res2{
        fmt.Println(res2,res1)
    } else {
        fmt.Println(res1,res2)
    }
}
