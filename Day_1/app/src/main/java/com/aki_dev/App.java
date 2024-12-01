/*
 * This source file was generated by the Gradle 'init' task
 */
package com.aki_dev;

import javax.management.openmbean.ArrayType;
import java.io.File;
import java.lang.reflect.Array;
import java.util.*;

public class App {
  public static void main(String[] args) {
    ArrayList<Integer> listOne = new ArrayList<>();
    ArrayList<Integer> listTwo = new ArrayList<>();
    int result = 0;

    try(Scanner scn = new Scanner(new File("aoc-1.txt"))) {
      while (scn.hasNextLine()) {
        String[] split = scn.nextLine().split(" {2}");
        listOne.add(Integer.parseInt(split[0]));
        listTwo.add(Integer.parseInt(split[1].stripLeading()));
      }
    } catch (Exception e) {
      throw new RuntimeException(e);
    }

    Collections.sort(listOne);
    Collections.sort(listTwo);

    for (int i = 0; i < listOne.size(); i++) {
      result += Math.abs(listOne.get(i) - listTwo.get(i));
    }

    System.out.println("Result is: ✨ " + result + " ✨");

  }
}
