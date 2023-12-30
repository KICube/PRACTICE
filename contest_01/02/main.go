package main

import (
	"fmt"
)

func main() {
	var ans11 float64
	var ans22 float64
	O2 := 0.5 * 365
	for ans1 := 1.0; ans1 > -1; ans1 += 1.0 {
		if (32.0*ans1)-O2 > 0 {
			ans11 = ans1
			break
		}
	}
	for ans2 := 1.0; ans2 > -1; ans2 += 1.0 {
		if (20.0*ans2)-O2 > 0 {
			ans22 = ans2
			break
		}
	}
	fmt.Println(O2, int(ans11), int(ans22))
}
