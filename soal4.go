package main
import (
	"fmt"
)

const NMAX int = 127

type tabel [NMAX]rune

func isiArray(t *tabel, n *int) {
	var char rune
	*n = 0
	for {
		fmt.Scanf("%c", &char)
		if char == '.' || *n >= NMAX {
			break
		}
		if char != ' ' && char != '\n' && char != '\r' {
			t[*n] = char
			*n++
		}
	}
}

func cetakArray(t tabel, n int) {
	for i := 0; i < n; i++ {
		fmt.Printf("%c ", t[i])
	}
	fmt.Println()
}

func balikanArray(t *tabel, n int) {
	for i := 0; i < n/2; i++ {
		temp := t[i]
		t[i] = t[n-1-i]
		t[n-1-i] = temp
	}
}

func palindrom(t tabel, n int) bool {
	tTemp := t
	balikanArray(&tTemp, n)
	
	for i := 0; i < n; i++ {
		if t[i] != tTemp[i] {
			return false
		}
	}
	return true
}

func main() {
	var tab tabel
	var m int

	fmt.Println("Masukkan teks (akhiri dengan titik):")
	isiArray(&tab, &m)

	tabAsli := tab
	mAsli := m

	balikanArray(&tab, m)
	fmt.Print("Reverse teks : ")
	cetakArray(tab, m)

	isPalindrom := palindrom(tabAsli, mAsli)
	fmt.Printf("Palindrom ? %t\n", isPalindrom)
}