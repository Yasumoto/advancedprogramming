/*
 * qgram.java
 * Joe Smith
 * Advanced Programming - Interterm 2010
 * Erik Linstead
 * Chapman University
 * Code Released under GPLv2
 */

public class qgram {
	public static void main(String[] args)
	{
		int gram_length = Integer.parseInt(args[0]);
		String word_one = "##" + args[1] + "%%";
		String word_two = "##" + args[2] + "%%";
		System.out.println(word_one);

		String[] one_grams = break_into_grams(gram_length, word_one);
		for (int i = 0; i < word_one.length() - 2; ++i)
		{
			System.out.println(one_grams[i]);
		}
	}

	public static String[] break_into_grams(int gram_length, String word)
	{
		// The String array containing the list of all grams
		String[] word_grams = new String[word.length()];
		// What is used to build each individual gram
		String gram = "";

		// Create each gram
		for (int i = 0; i< word.length() - 2; ++i)
		{
			System.out.println("This is gram number: " + i);
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
}
