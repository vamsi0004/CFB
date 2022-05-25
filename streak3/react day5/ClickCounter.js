import React, { Component } from 'react'
import UpdatedComponent from './WithCounter'

export class ClickCounter extends Component {
  render() {
      const {count} =this.state
    return (
      <button onClick={this.incrementCount}> {this.props.name} Clicked {count} times</button>
    )
  }
}

export default ClickCounter