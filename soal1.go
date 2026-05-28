package main
import "fmt"

func main() {
	var N int
	var berat [1000]float64
	var min, max float64

	fmt.Print("Masukkan jumlah anak kelinci: ")
	fmt.Scan(&N)

	for i := 0; i < N; i++ {
		fmt.Printf("Masukkan berat kelinci ke-%d: ", i+1)
		fmt.Scan(&berat[i])

		if i == 0 {
			min = berat[i]
			max = berat[i]
		} else {
			if berat[i] < min {
				min = berat[i]
			}
			if berat[i] > max {
				max = berat[i]
			}
		}
	}

	fmt.Printf("Berat kelinci terkecil: %.2f\n", min)
	fmt.Printf("Berat kelinci terbesar: %.2f\n", max)
}