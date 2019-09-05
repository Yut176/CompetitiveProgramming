private fun readLn() = readLine()!!
private fun readInt() = readLn().toInt()
private fun readStrings() = readLn().split(" ")
private fun readInts() = readStrings().map { it.toInt() }

fun main() {
    var (a, b) = readInts()
    for(i in 0 until b) {
        if(a%10 == 0) a /= 10;
        else a--;
    }
    println(a)

}
