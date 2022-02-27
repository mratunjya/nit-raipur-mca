import styled from "styled-components";

export const FooterTag = styled.footer`
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