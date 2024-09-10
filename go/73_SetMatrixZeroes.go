import "fmt"


func setZeroes(matrix [][]int)  {

    // countCoordinates := 0
    coordinates := [][]int{}
    // first will need to traverse the entire matrix
    for i := 0; i < len(matrix); i++ {
        for j := 0; j < len(matrix[i]); j++ {
            if matrix[i][j] == 0 {

                // {row , col}
                _coordinate := []int{i,j}

                // [{row, col}]
                coordinates = append(coordinates, _coordinate)
            }
        }
    }

    // add zeros to coordinates
    for index:= 0; index < len(coordinates); index++ {
        i := coordinates[index][0]
        j := coordinates[index][1]

        // fix the row, equate columns to zero
        for cols:= 0; cols < len(matrix[i]); cols++ {
            matrix[i][cols] = 0
        }
    
        // fix the column, equate rows to zero
        for rows:= 0; rows< len(matrix); rows++ {
            matrix[rows][j] = 0
        }

    }

}