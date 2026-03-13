package main
import "fmt"

func main() {

    var satu, dua, tiga string
    var temp string

    fmt.Print("Masukan input string: ")
    fmt.Scan(&satu)

    fmt.Print("Masukan input string: ")
    fmt.Scan(&dua)

    fmt.Print("Masukan input string: ")
    fmt.Scan(&tiga)

    fmt.Println("Output awal =", satu, dua, tiga)

    temp = satu
    satu = dua
    dua = tiga
    tiga = temp

    fmt.Println("Output akhir =", satu, dua, tiga)
}

