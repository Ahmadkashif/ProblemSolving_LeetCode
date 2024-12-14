func scoreOfString(s string) int {
    
    score := 0.0

    byteArray := []byte(s)

    for pos, char := range byteArray {
        if pos < (len(byteArray) -1 ) {
            score += math.Abs(byteArray[pos] - byteArray[pos+1])
            char += char
        } else {
            break
        }
    }

    return score
}
