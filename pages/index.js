import Head from 'next/head'
import Footer from '../Components/Common/Footer/Footer'
import Header from '../Components/Common/Header/Header'

export default function Home() {
  return (
    <>
      <Head>
        <title>Unofficially maintained for NIT Raipur: MCA</title>
        <meta name="description" content="NIT Raipur MCA 2021 - 2024" />
        <link rel="icon" href="/favicon.ico" />
      </Head>
      <Header header="NIT Raipur MCA 2021 - 2024" />
      <main>
        <h1>Landing Page</h1>
      </main>
      <Footer />
    </>
  )
}
