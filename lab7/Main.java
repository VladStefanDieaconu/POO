
import java.util.*;

public class Main {

    public static void main(String[] args) {
        NoDuplicateList myList = new NoDuplicateList();
        boolean added;
        added = myList.add("Andrei");
        added = myList.add("Ion");
        added = myList.add("Dan");
        added = myList.add("Andrei");
        added = myList.add("Razvan");

        MySet mySet = new MySet();

        mySet.add(new Student("Danut", 10f));
        mySet.add(new Student("Andrei", 9f));
        mySet.add(new Student("Alex", 1f));
        mySet.add(new Student("Razvan", 7f));

        Set<Student> set = new LinkedHashSet<>();

        set.add(new Student("Danut", 10f));
        set.add(new Student("Andrei", 9f));
        set.add(new Student("Alex", 1f));
        set.add(new Student("Razvan", 7f));

        for (Student student : set) {
            System.out.println((Object)student.equals(student));
        }

        Gradebook gradebook = new Gradebook(new GpaComparator());
        gradebook.add(new Student("Danut", 10f));
        gradebook.add(new Student("Andrei", 9f));
        gradebook.add(new Student("Alex", 10f));
        gradebook.add(new Student("Razvan", 10f));

        for (Map.Entry<Integer, List<Student>> medie : gradebook.entrySet()) {
            System.out.println(medie.getKey());
        }

        for (Map.Entry<Integer, List<Student>> medie : gradebook.entrySet()) {
            System.out.println(medie.getKey());
            Collections.sort(medie.getValue());
            for (Student student : medie.getValue()) {
                System.out.println(student.nume);
            }
        }
    }
}
