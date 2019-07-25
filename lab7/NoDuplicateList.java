import java.util.*;

class NoDuplicateList {

    Collection names = new ArrayList();
    boolean add(String newName) {

        if(names.contains(newName)) {
            System.out.println("ERROR: NAME ALREADY IN LIST");
            return false;
        } else {
            names.add(newName);
            System.out.println("NAME " + newName + " ADDED");
        }
        return true;
    }
}
