import (
	"strings"
)

var banned_sym string = "~!@#%^&* ()"

func isPalindrome(line string) bool {
	upd_line := ""
	for _, sym := range line {
		for _, ban_sym := range banned_sym {
			if sym == ban_sym {
				break
			} else if (sym != ban_sym) && (string(ban_sym) == ")") {
				upd_line = upd_line + strings.ToLower(string(sym))
				break
			}
		}
	}
	chars := strings.Split(upd_line, "")
	for i, j := 0, len(upd_line)-1; i < j; i, j = i+1, j-1 {
		if chars[i] != chars[j] {
			return false
		}
	}
	return true
}
