import (
	"strconv"
)

func isLucky(number string) bool {
	summ1 := 0
	summ2 := 0
	for i := 3; i < 6; i += 1 {
		add1, _ := strconv.Atoi(string(number[i-3]))
		add2, _ := strconv.Atoi(string(number[i]))
		summ1 += add1
		summ2 += add2
	}
	if summ1 == summ2 {
		return true
	} else {
		return false
	}
}
