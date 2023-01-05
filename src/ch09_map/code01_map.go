package main

import "fmt"

func defMap() map[int]string {
	// 方式1
	//var a = make(map[int]string, 10)
	// 方式2
	//b := make(map[int]string)
	// 方式3
	b := map[int]string{}
	//c := map[int]string{
	//	180512201: "张三",
	//	180512203: "李四",
	//}
	return b
}

func main() {
	// 定义一个map，map集合在使用前一定要make
	var student = defMap()
	// map的key-value是无序的
	// key是不可重复，如果遇到重复，后一个value会替换前一个value
	// value可以重复的
	student[180512202] = "王婷婷"
	student[180512204] = "祁佳欣"
	student[180512206] = "李环宇"
	student[180512206] = "李寰宇"
	student[180512213] = "张融慧"

	// 遍历map
	for k, v := range student {
		fmt.Printf("学号：%v\t姓名：%v\n", k, v)
	}
	// 获取map的长度
	fmt.Println(len(student))
	// 查找map
	v, b := student[180512202]
	fmt.Println(v)
	fmt.Println(b)
	// 删除map
	delete(student, 180512213)
	fmt.Println(student)
	// key : string
	// value: map[int]string
	school := map[string]map[int]string{
		"信息学部": {
			202201: "计算机科学与技术",
			202202: "软件工程",
			202203: "数据科学与大数据技术"},
		"马克思主义学院": {
			202204: "哲学系",
			202205: "政治学系",
		},
	}
	for college, majors := range school {
		for id, major := range majors {
			fmt.Printf("院系：%v\t专业ID：%v\t专业名称：%v\n", college, id, major)
		}
	}
}