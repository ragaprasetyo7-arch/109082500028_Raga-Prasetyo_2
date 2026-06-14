package main
import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	for k := 0; k < n; k++ {
		var m int
		fmt.Scan(&m)

		arr := make([]int, m)

		for i := 0; i < m; i++ {
			fmt.Scan(&arr[i])
		}

		for i := 0; i < m-1; i++ {
			minIdx := i

			for j := i + 1; j < m; j++ {
				if arr[j] < arr[minIdx] {
					minIdx = j
				}
			}

			arr[i], arr[minIdx] = arr[minIdx], arr[i]
		}

		for i := 0; i < m; i++ {
			if i > 0 {
				fmt.Print(" ")
			}
			fmt.Print(arr[i])
		}
		fmt.Println()
	}
}