/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let current = init;

    return {
        increment: () => {
            current += 1;
            return current;
        },

        decrement: () => {
            current -= 1;
            return current;
        },

        reset: () => {
            current = init;
            return current;
        }
    };
};