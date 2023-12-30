package main

import (
	"fmt"
	"strings"
)

func main() {
	animals := [8]string{"000Кот", "001Жираф", "010Курица", "011Страус", "100Дельфин", "101Плезиозавры", "110Пингвин", "111Утка"}
	var num1, num2, num3 string
	fmt.Scan(&num1)
    fmt.Scan(&num2)
    fmt.Scan(&num3)
	answers := []string{num1, num2, num3}
	for number, answer := range answers {
		if answer == "Да" {
			answers[number] = "1"
		} else {
			answers[number] = "0"
		}
	}
	index := fmt.Sprint(answers[0], answers[1], answers[2])
	for _, animal := range animals {
		if strings.Contains(animal, index) {
			fmt.Println(strings.ReplaceAll(animal, index, ""))
		}
	}
}
