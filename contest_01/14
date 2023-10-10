package main

import (
	"fmt"
	"strconv"
)

func main() {
	number1 := 0
	number2 := 0
	fmt.Scan(&number1, &number2)
	fmt.Print("    |")
	for count := 1; count <= number2; count += 1 {
		if count < 10 {
			fmt.Print("   ", count)
		} else {
			fmt.Print("  ", count)
		}
	}
	fmt.Print("\n")
	fmt.Print("   --")
	for count := 1; count <= number2; count += 1 {
		fmt.Print("----")
	}
	fmt.Print("\n")
	spacelen := 4
	for count := 1; count <= number1; count += 1 {
		if count < 10 {
			fmt.Print("   ", count, "|")
		} else {
			fmt.Print("  ", count, "|")
		}
		for result := 1; result <= number2; result += 1 {
			currlen := (spacelen - len(strconv.Itoa(count*result)))
			for c := 1; c <= currlen; c += 1 {
				fmt.Print(" ")
			}
			fmt.Print(count * result)
		}
		fmt.Print("\n")
	}
}
