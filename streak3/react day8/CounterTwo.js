import React,{useReducer} from 'react'

const intialState={
    firstcounter:0,
    secondcounter:10
}
const reducer=(state,action)=>{
    switch(action.type){
        case 'increment':
            return {...state,firstcounter:state.firstcounter+action.value}
        case 'decrement':
            return {...state,firstcounter:state.firstcounter-action.value}
        case 'increment2':
            return {...state,secondcounter:state.secondcounter+action.value}
        case 'decrement2':
            return {...state,secondcounter:state.secondcounter-action.value}
        case 'reset':
            return intialState
        default :
            return state
    }
}

function CounterTwo() {

   const [count,dispatch]= useReducer(reducer,intialState)

  return (
    <div>
        <div>firstcount - {count.firstcounter}</div>
        <div>secondcount -{count.secondcounter}</div>
        <button onClick={() =>dispatch({type: 'increment',value: 1})}>Increment</button>
        <button onClick={() =>dispatch({type: 'decrement',value: 1})}>Decrement</button>
        <button onClick={() =>dispatch({type: 'increment',value: 5})}>Increment 5</button>
        <button onClick={() =>dispatch({type: 'decrement',value: 5})}>Decrement 5</button>
        <button onClick={() =>dispatch({type: 'reset'})}>reset</button>
        <div>
            <button onClick={() =>dispatch({type: 'increment2',value: 1})}>Increment counter 2</button>
            <button onClick={() =>dispatch({type: 'decrement2',value: 1})}>Decrement counter 2</button>
        </div>
    </div>
)
}

export default CounterTwo