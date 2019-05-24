private fun readLn() = readLine()!!
private fun readInt() = readLn().toInt()
private fun readStrings() = readLn().split(" ")
private fun readInts() = readStrings().map { it.toInt() }

fun main() {
    val t = readInt()
    val x = Array<Int>(t) { 0 }
    for(i in 0 until t) {
        x[i] = readInt()
    }
    println(x.map { it/2 }.joinToString("\n"))

}
