package main

import (
	"fmt"
	"sort"
)

func main() {
	var num1 int
	var num2 int
	var num3 int
	fmt.Scan(&num1)
	fmt.Scan(&num2)
	fmt.Scan(&num3)
	numbers := []int{}
	numbers = append(numbers, num1)
	numbers = append(numbers, num2)
	numbers = append(numbers, num3)
	sort.Ints(numbers)
	fmt.Println(numbers[len(numbers)-1])
}
