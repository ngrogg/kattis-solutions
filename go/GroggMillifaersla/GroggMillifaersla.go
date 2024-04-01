package main

// Import statements
import (
	"fmt"
	"log"
)

// Empty main, just runs function
func main() {
	runProgram()
}

// Function to run program
func runProgram() {
	// Declare variables for the three values
	var monnei, fjee, dolla int

	// Read in values for the three variables
	_, errMonnei := fmt.Scan(&monnei)
	if errMonnei != nil {
		log.Fatal(errMonnei)
	}

	_, errFjee := fmt.Scan(&fjee)
	if errFjee != nil {
		log.Fatal(errFjee)
	}

	_, errDolla := fmt.Scan(&dolla)
	if errDolla != nil {
		log.Fatal(errDolla)
	}

	// Assume Monnei smallest by default
	smallestFee := monnei
	smallestName := "Monnei"

	// Compare smallestFee w/ fjee
	if fjee < smallestFee {
		smallestFee = fjee
		smallestName = "Fjee"
	}

	// Compare smallestFee w/ dolla
	if dolla < smallestFee {
		smallestFee = dolla
		smallestName = "Dolladollabilljoll"
	}

	// Print smallestName variable
	fmt.Printf("%s\n", smallestName)

}
