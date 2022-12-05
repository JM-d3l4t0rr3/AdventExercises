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

//day 4

function fitsInOneBox (boxes:{l:number,w:number,h:number}[]) {
    return boxes.sort((box1:{l:number,w:number,h:number}, box2:{l:number,w:number,h:number}) => {
        return box1.l - box2.l && box1.w - box2.w && box1.h - box2.h 
    }).every((current:{l:number,w:number,h:number}, index:number) => {
        if (index == 0) return true
        else{
            return current.l > boxes[index-1].l &&
                    current.h > boxes[index-1].h &&
                    current.w > boxes[index-1].w
        }
    })
}


