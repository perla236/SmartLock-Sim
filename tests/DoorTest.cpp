#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../include/DoorController.h"

class MockDoor : public IDoorHardware {
public:
    MOCK_METHOD(void, unlock, (), (override));
    MOCK_METHOD(void, lock, (), (override));
};

TEST(DoorControllerTest, UnlockWhenPinIsCorrect) {
    MockDoor myMockDoor;
    DoorController controller(myMockDoor);

    EXPECT_CALL(myMockDoor, unlock()).Times(1);

    controller.enterPin("2026");
}

TEST(DoorControllerTest, StayLockedWhenPinIsWrong) {
    MockDoor myMockDoor;
    DoorController controller(myMockDoor);

    EXPECT_CALL(myMockDoor, unlock()).Times(0);

    controller.enterPin("0000");
}