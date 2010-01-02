/*
 * qgram.java
 * Joe Smith
 * Advanced Programming - Interterm 2010
 * Erik Linstead
 * Chapman University
 * Code Released under GPLv2
 */

import java.util.HashSet;

public class qgram {
	public static void main(String[] args)
	{
		int total_unique_grams = 0, matches = 0;
		int gram_length = Integer.parseInt(args[0]);

		// Parsing the info and generating the string
		String word_one = format_string(gram_length, args[1]);
		String word_two = format_string(gram_length, args[2]);

		// Both of these include the length with the #'s and %'s
		int word_one_length = word_one.length();
		int word_two_length = word_two.length();

		String[] one_grams = break_into_grams(gram_length, word_one);
		String[] two_grams = break_into_grams(gram_length, word_two);

		// Create a set to store the grams and ensure uniqueness
		HashSet set_of_grams = new HashSet();

		// The initial adding of the words to the set
		for (int j = 0; j < word_one_length - gram_length + 1; ++j)
		{
			set_of_grams.add(one_grams[j]);
		}

		// Move through each gram created from word two
		for (int k = 0; k < word_two_length - gram_length + 1; ++k)
		{
			if (!set_of_grams.add(two_grams[k]))
			{
				// We didn't add something, so the gram was already contained in the set
				matches += 1;
			}
		}

		System.out.println("The total matches are: " + matches);
		System.out.println("Unique grams are: " + set_of_grams.size());
	}

	public static String[] break_into_grams(int gram_length, String word)
	{
		// The String array containing the list of all grams
		String[] word_grams = new String[word.length() + gram_length - 1];
		// What is used to build each individual gram
		String gram = "";

		// Create each gram
		for (int i = 0; i< word.length() - gram_length + 1; ++i)
		{
			// Create each letter in each gram
			for (int j = 0; j < gram_length; ++j)
			{
				gram += word.charAt(i+j);
			}

			word_grams[i] = gram;
			gram = "";
		}

		return word_grams;
	}

	public static String format_string(int gram_length, String word)
	{
		for (int i = 1; i < gram_length; ++i)
		{
			word = "#" + word + "%";
		}
		return word;
	}
}
