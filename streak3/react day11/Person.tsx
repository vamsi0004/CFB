type PersonName={
    name:{
        first:string
        last:string

    }
}

export const Person=()=>{
    return  <div>{props.name.first} {props.name.last}</div>
}