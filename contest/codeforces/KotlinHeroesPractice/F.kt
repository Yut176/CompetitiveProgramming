import java.lang.Integer.max

private fun readLn() = readLine()!!
private fun readInt() = readLn().toInt()
private fun readStrings() = readLn().split(" ")
private fun readInts() = readStrings().map { it.toInt() }

fun sub() {
    val n = readInt()
    val a = mutableListOf<Triple<Int, Int, Int>>()
    repeat(n) {
        val (l, r) = readInts()
        a.add(Triple(l, r, it))
    }
    a.sortWith(compareBy({it.first}, {it.second}))
    var mx = a[0].second
    var ok = false
    val ans = Array(n) { 0 }
    for (j in 1 until a.size) {
        if (mx < a[j].first) {
            for (k in 0 until n) {
                if (k < j) ans[a[k].third] = 2
                else ans[a[k].third] = 1
            }
            ok = true
            break
        }
        mx = max(mx, a[j].second)
    }
    if (!ok) {
        println(-1)
        return
    }

    println(ans.joinToString(" "))

}

fun main() {
    val t = readInt()
    repeat(t) {
        sub()
    }
}
