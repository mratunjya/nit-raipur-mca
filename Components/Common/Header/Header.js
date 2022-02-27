import { HeaderTag } from './HeaderStyle'

function Header(props) {
    return (
        <HeaderTag>
            {props.header}
        </HeaderTag>
    )
}
export default Header