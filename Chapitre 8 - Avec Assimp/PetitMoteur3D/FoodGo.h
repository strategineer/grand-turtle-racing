#pragma once
#include "GameObject.h"

namespace PM3D
{
  class FoodGo final : public GameObject
  {
  public:
    FoodGo();
    FoodGo(float dx, float dy, float dz);
    void OnSpawn(const physx::PxTransform& pose) override;

  private:
    float dx_, dy_, dz_;
    physx::unique_ptr<physx::PxMaterial> physx_material_;
  };
}