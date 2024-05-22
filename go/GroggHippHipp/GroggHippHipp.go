package main

import "fmt"

/* Hipp Hipp
 * By Nicholas Grogg
 */

// Empty main, just runs function
func main() {
	runProgram()
}

// Function to run program
func runProgram() {
	// For loop to output statement
	for i := 1; i <= 20; i++ {
		fmt.Println("Hipp hipp hurra!")
	}
}
