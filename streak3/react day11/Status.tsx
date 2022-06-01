type StatusProps={
    status:'loading'| 'suecces'|'error'
}

export const Status=(props:StatusProps)=>{
    let messageCount
    if(props.status==='loading'){
        message='loading....'
    }
    else if(props.status=='success'){
        message='Data fetched successfully!'
    }
}



export const Status=()=>{
    return(
        <div>
            <h2>loading....</h2>
            <h2>data fetched successfully!</h2>
            <h2>Error fetched data</h2>
        </div>
    )
    return(
        <div>
            <h2>status- {message}</h2>
        </div>
    )
}
