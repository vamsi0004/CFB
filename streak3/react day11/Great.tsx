type GreatProps={
    name:String
    messageCount:number
    isLoggedIn:boolean
}
export const Great = (props:GreatProps) => {
  return (
    <div>
        {
            props.isLoggedIn?`welcome ${props.name}! you hava ${props.messageCount} unread message` : 'welcome Guest'
        }
      <h2>welcome {props.name}! you have {props.messageCount} unread messages</h2>
    </div>
  )
}

