open React;
open Next;

[@react.component]
let default = () => {
  <div>
    <Head>
      <title> "Welcome"->string </title>
    </Head>
    "Welcome to Next"->string
  </div>;
};