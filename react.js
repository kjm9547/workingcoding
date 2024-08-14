const React = (function () {
  let hooks = [];
  let idx = 0;

  function useState(initVal) {
    const _idx = idx; //생성된 state의 인덱스 번호 스테이트가 생성되는 순서로 인덱스가 지정
    const state = hooks[idx] || initVal; //setState함수가 호출되면 hooks[]인덱스에 값이 저장됨으로 set이 호출된 시점 이후로는 hooks[idx]의 값으로 할당됨
    const setState = (newVal) => {
      hooks[_idx] = newVal;
    };
    idx++; //useState가 실행될때마다 index 추가
    return [state, setState];
  }

  function render(Component) {
    idx = 0; //렌더링이 될때마다 초기화 해줘야지 스테이트에 순차적으로 동일하게 접근이 가능하다
    const C = Component();
    C.render();
    return C;
  }
  function useEffect(callback, dependencies) {
    const oldDeps = hooks[idx];
    let hasChanged = true;
    // 현재 위치에 저장되어 있는 값이 기존의 dependency이다
    // 최초 실행 시에는 이 값은 undefined일 것이다

    // oldDependencies가 존재한다면 현재 받은 dependencies와 비교
    if (oldDeps) {
      // Array.some 함수를 사용하여 조건을 만족하는 값이 존재하는지 확인
      hasChanged = dependencies.some(
        // 조건: 하나라도 동일하지 않은 값이 있는지
        (dep, i) => !Object.is(dep, oldDeps[i])
      );
    }

    // 최초 실행, 또는 dependencies 중 변경된 값이 있다면 callback 실행
    if (hasChanged) {
      callback();
      // 현재의 dependency를 다시 현재 위치에 저장
      hooks[idx] = dependencies;
      console.log("hooks", hooks);

      idx++; //useEffect가 여러번 실행 되었을때 다음 인덱스로 이동하기 위함
    }
  }

  return { useState, render, useEffect };
})();

function Component() {
  const [count, setCount] = React.useState(1);
  const [text, setText] = React.useState("apple");
  React.useEffect(() => {
    setText("asdf");
    setCount(3);
  }, [count, text]);
  return {
    render: () => console.log(count, text),
    click: () => setCount(count + 1),
    type: (word) => setText(word),
  };
}

var App = React.render(Component); // {count: 1, text: "apple")
App.click(); // Component의 click함수 실행되어 setCount(count+1) 실행 -> React안의 state값이 변경
var App = React.render(Component); // {count: 2, text: "apple"}
App.type("pear");
var App = React.render(Component); // {count: 2, text: "pear"}

//값이 업데이트 될 때마다 React에서 rende함수를 호출
// 값이 업데이트 되면 업데이트 된 값을 페이지에 붙여주고
// 업데이트 될 때 Component가 재호출 리렌더링 됨으로 useEffect 발생
// 이떄 useEffect 내부에서 이전 데이터와 현재 데이터 비교하여 같으면 콜백함수 실행
// 빈 배열을 넣게 되면 처음을 제외하곤 항상 false나오게 됨으로 최초 렌더링시에만 콜백
// 의존 데이터를 넣게 되면 해당 데이터와 이전 데이터가 동일 하지 않은 데이터가 있다면 true를 반환
// 따라서 콜백이 실행된다.

//리액트는 컴포넌트가 생성되고 업데이트 되면 렌더링이 이루어지고 레더링시 해당 컴포넌트를 호출한다
//따라서 재호출이 됨에 따라 컴포넌트의 hooks가 실행되고 실행됨에 따라 hooks 내부에서는
//이전의 상태와 현재의 상태를 비교하여 변화가 있으면 상태를 업데이트하고 재렌더링을 한다.
