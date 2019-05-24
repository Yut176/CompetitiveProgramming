private fun readLn() = readLine()!!
private fun readInt() = readLn().toInt()
private fun readStrings() = readLn().split(" ")
private fun readInts() = readStrings().map { it.toInt() }

fun main() {
    var n = readInt()
    var s = readLn().toCharArray()
    val a = Array(26) { 0 }
    if (n == 1) {
        println("Yes")
        return
    }
    s.forEach {
        a[it-'a']++
    }
    var cnt = 0
    a.forEach {
        if(it >= 2) cnt++
    }
    if(cnt == 0) {
        println("No")
    }else{
        println("Yes")
    }
}
