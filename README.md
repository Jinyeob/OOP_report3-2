Draw 순수가상함수를 가진 Shape 추상 클래스. paint, add, getNext, setNext함수를 가짐. Line, Circle, Rect, Triangle클래스는 Shape클래스를 상속받는 파생클래스이며 draw 순수가상함수를 구현한다. 그리고 각각 도형을 출력. UI클래스는 선택을 입력받을 함수들을 가짐. (first함수에서 호출예정.) GraphicEditor 클래스는 figure(그리기) del(삭제) show(출력) first(선택창) 함수를 가진다. main에서 first함수가 호출되면 UI클래스의 choice 함수가 호출되어 항목을 선택한다. 그리고 그 값에 따라, figure del show 함수로 값을 전달 한다.
삽입을 선택하고 임의의 도형을 선택하면 선택한 도형에 따라 객체를 생성하여 리스트 에 삽입한다. 그리고 삭제를 선택하고 삽입했던 도형을 선택하면 선택한 도형의 노드를 삭제한다. 모두 그리기를 선택하면 show 함수를 호출하여 각 도형을 방문하여 출력한다. 
