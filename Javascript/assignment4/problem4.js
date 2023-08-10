function findAddress(obj) {
    for(const key in obj) {
        if(obj[key] === undefined || obj[key] === "") {
            obj[key] = "__";
        }
    }

    const objectValues = Object.values(obj);
    const convertedValues = objectValues.join(",");

    return convertedValues;
}

const person = {
    prop1: "value1",
    prop2: undefined,
    prop3: "value3"
};

console.log(findAddress(person));


