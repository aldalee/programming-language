package class04_collections

import java.util

/**
 * 数组
 * @author HuanyuLee
 */
object Code01_Array {
    // Java Code
    val listJ = new util.ArrayList[String]()
    listJ.addAll(util.Arrays.asList("Java", "Scala", "Python", "Golang"))
    println(s"listJ = ${listJ}")

    def main(args: Array[String]): Unit = {
        // Scala自己的Collections
        val arr = Array(1, 2, 3, "4", true, '5')
        println(arr.mkString("Array(", ", ", ")"))

        // 因为Scala是基于JVM的，因此推荐加上泛型 [T]
        val array = Array[String]("Java", "Scala", "Python", "Golang")
        println(s"array(0) = ${array(0)}")

        // val不可变，描述的是val指定的引用的值（值：字面值、地址）
        // Scala中数组取值用小括号()，不同于Java中的方括号[]
        // 索引从0开始
        array(0) = "PHP"
        println(array.mkString("Array(", ", ", ")"))
        array.foreach(println)

        //Array提供了函数ofDim来定义二维和三维数组
        val myMatrix = Array.ofDim[Int](3, 4)
        val myCube = Array.ofDim[String](3, 2, 4)

        //不定长数组
        import scala.collection.mutable.ArrayBuffer
        val mutableArr = ArrayBuffer[Int](10, 20, 30)
        mutableArr += 40
        mutableArr.insert(2, 60)
        mutableArr -= 40
        var temp = mutableArr.remove(2)
    }
}