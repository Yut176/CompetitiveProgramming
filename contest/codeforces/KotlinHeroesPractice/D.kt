private fun readLn() = readLine()!!
private fun readInt() = readLn().toInt()
private fun readStrings() = readLn().split(" ")
private fun readInts() = readStrings().map { it.toInt() }

fun main() {
    var (x, y, z) = readInts()
    var (a, b, c) = readInts()
    if (x > a) {
        println("NO")
        return
    }
    a -= x
    var sum = a + b + c
    if (y > a+b) {
        println("NO")
        return
    }
    sum -= y
    if (z > sum) {
        println("NO")
        return
    }
    println("YES")
}
