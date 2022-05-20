import React, { Component } from "react";

class Message extends Component
{

    constructor(){
        super()
        this.state={
            message:'click on sumbit'
        }
    }
    changeMessage()
    {
        this.setState({
            message:'Thank you for submitting'
        })
    }

    render(){
        return ( 
        <div>
        <h1>
            welcome visitor
        </h1>
        <button onClick={() => this.changeMessage()}>submit</button>
        <h1>
            {this.state.message}
        </h1>
        </div>
        )
    }
}

export default Message