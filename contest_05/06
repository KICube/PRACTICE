type Cat struct {
	status bool
}

type Box struct {
	cat    Cat
	opened bool
}

func (cat Cat) is_alive() bool {
	return cat.status
}

func (box Box) open() Cat {
	box.opened = false
	var cat Cat
	var stat bool = true
	if rand.Intn(2) == 1 {
		stat = false
	}
	cat.status = stat
	return cat
}
