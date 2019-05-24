private fun readLn() = readLine()!!
private fun readInt() = readLn().toInt()
private fun readStrings() = readLn().split(" ")
private fun readInts() = readStrings().map { it.toInt() }

fun main() {
    val t = readInt()
    for (i in 0 until t) {
        val s = readLn().toCharArray()
        s.sort()
        println(when (s.first() == s.last()) {
            true -> -1
            false -> String(s)
        })
    }

}
