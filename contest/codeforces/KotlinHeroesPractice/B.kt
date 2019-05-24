import kotlin.math.min

private fun readLn() = readLine()!!
private fun readInt() = readLn().toInt()
private fun readStrings() = readLn().split(" ")
private fun readInts() = readStrings().map { it.toInt() }

fun main() {
    var (y, b, r) = readInts()
    y += 1
    r -= 1
    println(min(min(y, b), r) * 3)
}
