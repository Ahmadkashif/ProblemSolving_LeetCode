class Solution {
    public String interpret(String command) {
                 char[] arr = command.toCharArray();
        StringBuilder sb = new StringBuilder();
        for(int i=0;i<arr.length;i++){
            if(arr[i]=='(' && arr[i+1]==')'){
                sb.append('o');
            }
            else if(arr[i]=='(' && arr[i+1]=='a' && arr[i+2]=='l'&& arr[i+3]==')'){
                sb.append("al");
            }
            else if (arr[i]=='G')
                sb.append("G");
        }
        return sb.toString();    }
}