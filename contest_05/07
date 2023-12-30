type Water struct {
	temperature int
	status      bool
}

type Teapot struct {
	water *Water
}

func (teapot Teapot) is_boiling() bool {
	return teapot.water.status
}

func (teapot Teapot) heat_up(temp int) {
	teapot.water.temperature += temp
	if teapot.water.temperature >= 100 {
		teapot.water.status = true
	}
}

func NewWater(temp int) Water {
	var water Water
	water.temperature = temp
	if temp >= 100 {
		water.status = true
	} else {
		water.status = false
	}
	return water
}

func NewTeapot(water1 Water) Teapot {
	var teapot Teapot
	teapot.water = &water1
	return teapot
}
