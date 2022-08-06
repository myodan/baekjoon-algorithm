package main

import "fmt"

func main() {
	var year int
	_, err := fmt.Scanln(&year)
	if err != nil {
		panic(err)
	}
	fmt.Print(year - 543)
}
