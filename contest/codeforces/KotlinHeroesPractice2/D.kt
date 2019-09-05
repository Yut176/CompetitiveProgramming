private fun readLn() = readLine()!!
private fun readInt() = readLn().toInt()
private fun readStrings() = readLn().split(" ")
private fun readInts() = readStrings().map { it.toInt() }
private fun readLongs() = readStrings().map { it.toLong() }

lateinit var ans: Array<Int>
var f = false

fun func(p: Int, list: List<Long>, vis: Array<Int>, depth: Int) {
    if(f) return
    if(depth == list.size - 1) {
        ans = vis

        var s = ""
        for(i in 0 until list.size) {
            for(j in 0 until list.size) {
                if(i == ans[j]) s += "${list[j]} "
            }
        }
        println(s)
        f = true
        return
    }
    val num = list[p]
    for (i in 0 until list.size) {
        if(vis[i] != -1) continue

        if (num % 3 == 0L && list[i] == num / 3) {
            vis[i] = depth + 1
            func(i, list, vis, depth + 1)
            vis[i] = -1
        }
        if (num * 2 == list[i]) {
            vis[i] = depth + 1
            func(i, list, vis, depth + 1)
            vis[i] = -1
        }
    }
}

fun main() {
    val n = readInt()
    val a = readLongs()
    val aa = Array(a.size) { -1 }
    for(i in 0 until n) {
        aa[i] = 0
        func(i, a, aa, 0)
        aa[i] = -1
    }

}
