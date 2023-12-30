func shift(data[] int,steps int){
    var new_data[10] int
    for idx,_ := range data{
        new_data[idx] = data[(1000000000 - steps + idx) % 10]
    }
    for idx,_ := range data{
        data[idx] = new_data[idx]
    }
}
