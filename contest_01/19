package main

import (
  "bufio"
  "os"
  "fmt"
  "strings"
  "sort"
)

func main(){
    scanner := bufio.NewScanner(os.Stdin)
    scanner.Scan()
    line := scanner.Text()
    symbols := strings.Split(line," ")
    var finalsymbols []string
    for idx1,element1 := range symbols {
    	if element1 == "end"{
        	break
        }
        var count int = 0
        for idx2,element2 := range symbols {
        	if element2 == "end"{
        		break
        	}
            if element2 == element1 && idx2 >= idx1 {
                count += 1
                if count >= 2{
                    var exist bool = false
                    for _,finalelement := range finalsymbols{
                        if finalelement == element1{
                            exist = true
                        }
                    }
                    if exist == false{
                        finalsymbols = append(finalsymbols,element1)
                    }
                    break
                }
            }
        }
    }
    sort.Strings(finalsymbols)
    for _,element := range finalsymbols {
        fmt.Print(element, " ")
    }
}
