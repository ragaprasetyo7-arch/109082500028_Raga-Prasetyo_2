package main

import "fmt"

func selectionSort(arr []int) {
	n := len(arr)

	for i := 0; i < n-1; i++ {
		minIdx := i

		for j := i + 1; j < n; j++ {
			if arr[j] < arr[minIdx] {
				minIdx = j
			}
		}

		arr[i], arr[minIdx] = arr[minIdx], arr[i]
	}
}

func main() {
	var n int
	fmt.Scan(&n)

	for daerah := 0; daerah < n; daerah++ {
		var m int
		fmt.Scan(&m)

		var ganjil []int
		var genap []int

		for i := 0; i < m; i++ {
			var rumah int
			fmt.Scan(&rumah)

			if rumah%2 == 0 {
				genap = append(genap, rumah)
			} else {
				ganjil = append(ganjil, rumah)
			}
		}

		selectionSort(ganjil)
		selectionSort(genap)

		first := true

		// Cetak ganjil ascending
		for i := 0; i < len(ganjil); i++ {
			if !first {
				fmt.Print(" ")
			}
			fmt.Print(ganjil[i])
			first = false
		}

		// Cetak genap descending
		for i := len(genap) - 1; i >= 0; i-- {
			if !first {
				fmt.Print(" ")
			}
			fmt.Print(genap[i])
			first = false
		}

		fmt.Println()
	}
}