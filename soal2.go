package main
import "fmt"

func main() {
	var x int
	var masuk, sah int
	var suara [21]int

	for {
		fmt.Scan(&x)
		masuk++

		if x == 0 {
			break
		}

		if x >= 1 && x <= 20 {
			sah++
			suara[x]++
		}
	}

	ketua := 1
	for i := 2; i <= 20; i++ {
		if suara[i] > suara[ketua] {
			ketua = i
		}
	}

	wakil := -1
	for i := 1; i <= 20; i++ {
		if i != ketua {
			if wakil == -1 ||
				suara[i] > suara[wakil] ||
				(suara[i] == suara[wakil] && i < wakil) {
				wakil = i
			}
		}
	}

	fmt.Println("Suara masuk:", masuk)
	fmt.Println("Suara sah:", sah)
	fmt.Println("Ketua RT:", ketua)
	fmt.Println("Wakil ketua:", wakil)
}