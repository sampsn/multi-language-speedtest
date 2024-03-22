package main

import (
	"fmt"
	"time"
)

func iterative(x int) {
	for j := 0; j <= x; j++ {
		stuff := make([]int, 0, j)
		for i := 0; i < j; i++ {
			stuff = append(stuff, i)
		}
		// `stuff` slice gets dropped here at each iteration's end
	}
}

func main() {
	start := time.Now()
	iterative(500000)
	duration := time.Since(start)
	fmt.Println(duration)
}
