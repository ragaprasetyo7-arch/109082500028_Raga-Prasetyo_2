package main
import "fmt"

func main() {
	var klubA, klubB string
	var hasil [100]string
	var skorA, skorB, i, n int

	fmt.Print("Klub A : ")
	fmt.Scan(&klubA)

	fmt.Print("Klub B : ")
	fmt.Scan(&klubB)

	i = 1
	n = 0

	for {
		fmt.Printf("Pertandingan %d : ", i)
		fmt.Scan(&skorA, &skorB)

		if skorA < 0 || skorB < 0 {
			break
		}

		if skorA > skorB {
			hasil[n] = klubA
			fmt.Printf("Hasil %d : %s\n", i, klubA)
		} else if skorB > skorA {
			hasil[n] = klubB
			fmt.Printf("Hasil %d : %s\n", i, klubB)
		} else {
			hasil[n] = "Draw"
			fmt.Printf("Hasil %d : Draw\n", i)
		}

		n++
		i++
	}

	fmt.Println("Pertandingan selesai")
}