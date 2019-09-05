private fun readLn() = readLine()!!
private fun readInt() = readLn().toInt()
private fun readStrings() = readLn().split(" ")
private fun readInts() = readStrings().map { it.toInt() }

fun main() {
    val (n, k) = readInts()
    var a: List<Int> = readInts()
    a = a.sorted()
    if(k == 0) {
        if(a[0] == 1) println(-1)
        else println(1)
        return
    }
    if(k == n) {
        println(a[n-1])
        return
    }
    println(if(a[k-1] == a[k]) -1 else a[k-1])
}
