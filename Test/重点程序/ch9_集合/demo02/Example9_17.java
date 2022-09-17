package Java.Test.重点程序.ch9_集合.demo02;

import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.TreeMap;

public class Example9_17 {

    public static void main(String[] args) {
        Person person1 = new Person("马先生", 220181);
        Person person2 = new Person("李先生", 220193);
        Person person3 = new Person("王小姐", 220186);
        Map<Number, Person> map = new HashMap<Number, Person>();
        map.put(person1.getId_card(), person1);
        map.put(person2.getId_card(), person2);
        map.put(person3.getId_card(), person3);
        System.out.println("由HashMap类实现的Map集合，无序：");
        for (Iterator<Number> it = map.keySet().iterator(); it.hasNext();) {
            Person person = map.get(it.next());
            System.out.println(person.getId_card() + " " + person.getName());
        }
        System.out.println("由TreeMap类实现的Map集合，键对象升序：");
        TreeMap<Number, Person> treeMap = new TreeMap<Number, Person>();
        treeMap.putAll(map);
        for (Iterator<Number> it = treeMap.keySet().iterator(); it.hasNext();) {
            Person person = treeMap.get(it.next());
            System.out.println(person.getId_card() + " " + person.getName());
        }
        System.out.println("由TreeMap类实现的Map集合，键对象降序：");
        TreeMap<Number, Person> treeMap2 = new TreeMap<Number, Person>(
                Collections.reverseOrder()); // 初始化为反转排序
        treeMap2.putAll(map);
        for (Iterator it = treeMap2.keySet().iterator(); it.hasNext();) {
            Person person = (Person) treeMap2.get(it.next());
            System.out.println(person.getId_card() + " " + person.getName());
        }
    }

}

