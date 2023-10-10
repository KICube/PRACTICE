package main

import (
	"fmt"
	"math"
)

func main() {
	banknotes := [5]float64{5000, 1000, 500, 200, 100}
	var money float64
	fmt.Scan(&money)
	for _,banbanknote := range banknotes{
		fmt.Print(int(math.Floor(money /banbanknote)), " ")
		money -= math.Floor(money /banbanknote)*banbanknote
	}
}
