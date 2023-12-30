package main

import (
	"encoding/json"
	"fmt"
	"os"
)

type TaskInfo struct {
	User_id   int    `json:"user_id"`
	Id        int    `json:"id"`
	Title     string `json:"title"`
	Completed bool   `json:"completed"`
}

type ProjectInfo struct {
	Project_id int        `json:"project_id"`
	Tasks      []TaskInfo `json:"tasks"`
}

func main() {
	content, _ := os.ReadFile("data.json")

	var Projects []ProjectInfo
	json.Unmarshal(content, &Projects)

	var curr_user_id int
	fmt.Scan(&curr_user_id)

	count := 0
	for _, x := range Projects {
		if len(x.Tasks) > 0 {
			for _, y := range x.Tasks {
				if y.User_id == curr_user_id && y.Completed == true {
					count += 1
				}
			}
		}
	}
	fmt.Println(count)
}
