package main
import (
	"fmt"
	"math"
)

type titik struct {
	x int
	y int
}

type lingkaran struct {
	pusat titik
	r int
}

func jarak(p, q titik) float64 {
	return math.Sqrt(float64((p.x-q.x)*(p.x-q.x) + (p.y-q.y)*(p.y-q.y)))
}

func didalam(c lingkaran, p titik) bool {
	return jarak(c.pusat, p) <= float64(c.r)
}

func main() {
	var l [2]lingkaran
	var p titik

	for i := 0; i < 2; i++ {
		fmt.Scan(&l[i].pusat.x, &l[i].pusat.y, &l[i].r)
	}

	fmt.Scan(&p.x, &p.y)

	in1 := didalam(l[0], p)
	in2 := didalam(l[1], p)

	if in1 && in2 {
		fmt.Println("Titik di dalam lingkaran 1 dan 2")
	} else if in1 {
		fmt.Println("Titik di dalam lingkaran 1")
	} else if in2 {
		fmt.Println("Titik di dalam lingkaran 2")
	} else {
		fmt.Println("Titik di luar lingkaran 1 dan 2")
	}
}