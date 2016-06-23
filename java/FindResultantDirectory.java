public class FindResultantDirectory {

	private static String findResultingDirectory(String currentDirectory,
			String sequenceOfOperations) {

		String splitDirectories[] = sequenceOfOperations.split("/");

		for (int i = 0; i < splitDirectories.length; i++) {
			if (splitDirectories[i].equals("..")) {
				currentDirectory = currentDirectory.substring(0,
						currentDirectory.length() - 2);
			} else {
				currentDirectory = currentDirectory + "/" + splitDirectories[i];
			}
		}

		return currentDirectory;
	}

	public static void main(String[] args) {
		System.out.println(findResultingDirectory("a/b", "c/../d/e/../f"));
	}
}