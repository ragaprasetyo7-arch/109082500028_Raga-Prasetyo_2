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
	var data []int

	for {
		var x int
		fmt.Scan(&x)

		if x == -5313 {
			break
		}

		if x == 0 {

			temp := make([]int, len(data))
			copy(temp, data)

			selectionSort(temp)

			n := len(temp)

			if n%2 == 1 {
				fmt.Println(temp[n/2])
			} else {
				median := (temp[n/2-1] + temp[n/2]) / 2
				fmt.Println(median)
			}

		} else {
			data = append(data, x)
		}
	}
}