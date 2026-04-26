package main
import (
	"fmt"
	"math"
)

func main() {
	var n int
	var a [100]int

	fmt.Scan(&n)

	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
	}

	for i := 0; i < n; i++ {
		fmt.Print(a[i], " ")
	}
	fmt.Println()

	for i := 1; i < n; i += 2 {
		fmt.Print(a[i], " ")
	}
	fmt.Println()

	for i := 0; i < n; i += 2 {
		fmt.Print(a[i], " ")
	}
	fmt.Println()

	var x int
	fmt.Scan(&x)

	for i := 0; i < n; i++ {
		if i%x == 0 {
			fmt.Print(a[i], " ")
		}
	}
	fmt.Println()

	var idx int
	fmt.Scan(&idx)

	for i := idx; i < n-1; i++ {
		a[i] = a[i+1]
	}
	n--

	for i := 0; i < n; i++ {
		fmt.Print(a[i], " ")
	}
	fmt.Println()

	jumlah := 0
	for i := 0; i < n; i++ {
		jumlah += a[i]
	}

	rata := float64(jumlah) / float64(n)
	fmt.Printf("%.2f\n", rata)

	var total float64
	for i := 0; i < n; i++ {
		total += math.Pow(float64(a[i])-rata, 2)
	}

	sd := math.Sqrt(total / float64(n))
	fmt.Printf("%.2f\n", sd)

	var cari, frek int
	fmt.Scan(&cari)

	for i := 0; i < n; i++ {
		if a[i] == cari {
			frek++
		}
	}

	fmt.Println(frek)
}