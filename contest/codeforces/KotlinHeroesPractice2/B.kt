private fun readLn() = readLine()!!
private fun readInt() = readLn().toInt()
private fun readStrings() = readLn().split(" ")
private fun readInts() = readStrings().map { it.toInt() }

fun main() {
    val n = readInt()
    val s: CharSequence = readLn()
    val list = mutableListOf<CharSequence>()

    for(i in 0 until n-1) {
        list.add(s.subSequence(i, i+2))
    }
    println(list.groupingBy { it }.eachCount().maxBy { it.value }?.key)
}
