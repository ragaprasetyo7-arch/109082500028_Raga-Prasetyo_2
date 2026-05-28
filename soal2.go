package main
import "fmt"

func main() {
	var x, y int
	var ikan [1000]float64

	fmt.Print("Masukkan jumlah ikan: ")
	fmt.Scan(&x)

	fmt.Print("Masukkan kapasitas ikan per wadah: ")
	fmt.Scan(&y)

	for i := 0; i < x; i++ {
		fmt.Printf("Masukkan berat ikan ke-%d: ", i+1)
		fmt.Scan(&ikan[i])
	}

	jumlahWadah := (x + y - 1) / y
	var totalWadah [1000]float64
	var totalSemua float64

	index := 0

	for i := 0; i < jumlahWadah; i++ {
		total := 0.0

		for j := 0; j < y && index < x; j++ {
			total += ikan[index]
			index++
		}

		totalWadah[i] = total
		totalSemua += total
	}

	fmt.Println("Total berat tiap wadah:")
	for i := 0; i < jumlahWadah; i++ {
		fmt.Printf("Wadah %d = %.2f\n", i+1, totalWadah[i])
	}

	rata := totalSemua / float64(jumlahWadah)

	fmt.Printf("Rata-rata berat tiap wadah = %.2f\n", rata)
}