import styled from 'styled-components';
import { FlexBox } from '../../components/Common/FlexBox';
import heart from '../../public/assets/svg/heart.svg';
import code from '../../public/assets/svg/code.svg';

const FooterTag = styled.footer`
  background-color: #fafafa;
  padding: 1rem;
  text-align: center;
  position: absolute;
  left: 0;
  bottom: 0;
  width: 100%;

  * {
    transition: all 0.3s ease;
  }

  a {
    color: #999;
    text-decoration: none;
    text-align: center;
    display: inline-block;
    &:hover {
      img {
        transform: scale(1.2);
      }
    }
  }
`;

function Footer() {
  return (
    <FooterTag>
      <a href="https://www.linkedin.com/in/mratunjya/" rel="noreferrer" target="_blank">
        <FlexBox justify="center" align="center" columnGap="7px" w="fit-content">
          Made with <img src={heart.src} alt="Love" width="24" height="24"/> and <img src={code.src} alt="Code" width="29" height="29"/> by Mratunjya Shankhdhar
        </FlexBox>
      </a>
    </FooterTag>
  )
}

export default Footer