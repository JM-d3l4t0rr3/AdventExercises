//day 1

const wrapping = (gifts:string[]) => gifts.map(item => {
    return `${"*".repeat(item.length + 2)}\n*${item}*\n${"*".repeat(item.length + 2)}`;
});

//day 2 

const countHours = (year:number, holidays:string[]) => { 
    let sum = 0;
    holidays.forEach((value) =>{
        let day:number = new Date(`${value}/${year}`).getDay();
        sum +=   day === 0 || day === 6  ? 0 : 2; 
    })
    return sum;
}

//day 3

const distributeGifts = (packOfGifts:string[], reindeers:string[]) => {
    let peso:number = packOfGifts.reduce((acc,currentValue:string) => {
        return acc + currentValue.length},0);
    let capacidad:number = reindeers.reduce((acc,currentValue:string) => {
        return acc + currentValue.length * 2 },0);

    return Math.floor(capacidad/peso);
}

const distributeGifts2 = (packOfGifts:string[], reindeers:string[]) => {
    let peso:number = packOfGifts.join("").length;
    let capacidad:number = reindeers.join("").length * 2;
    return Math.floor(capacidad/peso);
}


