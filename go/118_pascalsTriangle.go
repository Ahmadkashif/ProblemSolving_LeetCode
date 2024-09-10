import "fmt"

func generate(numRows int) [][]int {

    result := [][]int{}

    if numRows > 0 {
        firstRow := []int{1}
        result = append(result, firstRow)
    }

    // every pass increases the sliding window by 1, make sure to offset the window when necessary
    _resultRow := []int {}

    firstIter := 0
    secondIter := 1

    for i:= 2; i <= numRows; i++ {
        for items:= 0; items < i ; items++ {
            if items == 0 || items == i-1 {
                _resultRow = append(_resultRow, 1)
            } else {
                _lastRow := result[len(result)-1]
                _resultRow = append(_resultRow, _lastRow[firstIter] + _lastRow[secondIter])
                firstIter++
                secondIter++
            }
        }
        result = append(result, _resultRow)
        _resultRow = []int {}
        firstIter = 0
        secondIter = 1
    }

    return result
}