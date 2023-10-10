package main

import (
	"fmt"
)

func main() {
	numofdays := 0
	fmt.Scan(&numofdays)
	days := []float64{}
	for day := 1; day <= numofdays; day += 1 {
		var value float64
		fmt.Scan(&value)
		days = append(days, value)
	}
	fmt.Print(days[0], " ")
	if len(days) > 2 {
		for count := 0; count < len(days)-2; count += 1 {
			fmt.Print((days[count]+days[count+1]+days[count+2])/3.0, " ")
		}
	}
	fmt.Print(days[numofdays-1])
}
