#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E5ED0
// Address: 0x2e5ed0 - 0x2e6080
void sub_002E5ED0_0x2e5ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5ED0_0x2e5ed0");
#endif

    switch (ctx->pc) {
        case 0x2e5f2cu: goto label_2e5f2c;
        case 0x2e5f44u: goto label_2e5f44;
        case 0x2e5f4cu: goto label_2e5f4c;
        case 0x2e5f6cu: goto label_2e5f6c;
        case 0x2e5f98u: goto label_2e5f98;
        case 0x2e5fc4u: goto label_2e5fc4;
        case 0x2e5fecu: goto label_2e5fec;
        case 0x2e6020u: goto label_2e6020;
        case 0x2e6034u: goto label_2e6034;
        case 0x2e6048u: goto label_2e6048;
        default: break;
    }

    ctx->pc = 0x2e5ed0u;

    // 0x2e5ed0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2e5ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2e5ed4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e5ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2e5ed8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2e5ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2e5edc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e5edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2e5ee0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e5ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e5ee4: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x2e5ee4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ee8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e5ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e5eec: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2e5eecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ef0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e5ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e5ef4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e5ef4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ef8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e5ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e5efc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e5efcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f00: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e5f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e5f04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e5f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e5f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e5f0c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e5f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e5f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e5f14: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e5f14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e5f18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e5f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e5f1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e5f20: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2e5f20u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2e5f24: 0xc0745d0  jal         func_1D1740
    ctx->pc = 0x2E5F24u;
    SET_GPR_U32(ctx, 31, 0x2E5F2Cu);
    ctx->pc = 0x2E5F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F24u;
    // 0x2e5f28: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1740u, 0x2E5F24u, 0x2E5F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F2Cu;
label_2e5f2c:
    // 0x2e5f2c: 0x3c04008c  lui         $a0, 0x8C
    ctx->pc = 0x2e5f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)140 << 16));
    // 0x2e5f30: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e5f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f34: 0x2484f5f0  addiu       $a0, $a0, -0xA10
    ctx->pc = 0x2e5f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964720));
    // 0x2e5f38: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x2e5f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x2e5f3c: 0xc0966d8  jal         func_259B60
    ctx->pc = 0x2E5F3Cu;
    SET_GPR_U32(ctx, 31, 0x2E5F44u);
    ctx->pc = 0x2E5F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F3Cu;
    // 0x2e5f40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259B60u, 0x2E5F3Cu, 0x2E5F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F44u;
label_2e5f44:
    // 0x2e5f44: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x2E5F44u;
    SET_GPR_U32(ctx, 31, 0x2E5F4Cu);
    ctx->pc = 0x2E5F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F44u;
    // 0x2e5f48: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x2E5F44u, 0x2E5F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F4Cu;
label_2e5f4c:
    // 0x2e5f4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e5f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e5f50: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x2e5f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2e5f54: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e5f54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e5f58: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2e5f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x2e5f5c: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x2e5f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x2e5f60: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2e5f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2e5f64: 0xc0765e8  jal         func_1D97A0
    ctx->pc = 0x2E5F64u;
    SET_GPR_U32(ctx, 31, 0x2E5F6Cu);
    ctx->pc = 0x2E5F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F64u;
    // 0x2e5f68: 0x62f025  or          $fp, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D97A0u, 0x2E5F64u, 0x2E5F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F6Cu;
label_2e5f6c:
    // 0x2e5f6c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2e5f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e5f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5f74: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2e5f74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2e5f78: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2e5f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2e5f7c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x2e5f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x2e5f80: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e5f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e5f84: 0x3c31825  or          $v1, $fp, $v1
    ctx->pc = 0x2e5f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) | GPR_U64(ctx, 3));
    // 0x2e5f88: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e5f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e5f8c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x2e5f8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e5f90: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2E5F90u;
    SET_GPR_U32(ctx, 31, 0x2E5F98u);
    ctx->pc = 0x2E5F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5F90u;
    // 0x2e5f94: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2E5F90u, 0x2E5F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5F98u;
label_2e5f98:
    // 0x2e5f98: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2e5f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e5f9c: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x2e5f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x2e5fa0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2e5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2e5fa4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2e5fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2e5fa8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2e5fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e5fac: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2e5facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2e5fb0: 0x24425ae0  addiu       $v0, $v0, 0x5AE0
    ctx->pc = 0x2e5fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23264));
    // 0x2e5fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e5fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e5fb8: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x2e5fb8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e5fbc: 0xc074648  jal         func_1D1920
    ctx->pc = 0x2E5FBCu;
    SET_GPR_U32(ctx, 31, 0x2E5FC4u);
    ctx->pc = 0x2E5FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5FBCu;
    // 0x2e5fc0: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1920u, 0x2E5FBCu, 0x2E5FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5FC4u;
label_2e5fc4:
    // 0x2e5fc4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2e5fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e5fc8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2e5fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e5fcc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2e5fccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2e5fd0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x2e5fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x2e5fd4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2e5fd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2e5fd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e5fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5fdc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e5fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e5fe0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e5fe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5fe4: 0xc074dcc  jal         func_1D3730
    ctx->pc = 0x2E5FE4u;
    SET_GPR_U32(ctx, 31, 0x2E5FECu);
    ctx->pc = 0x2E5FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5FE4u;
    // 0x2e5fe8: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3730u, 0x2E5FE4u, 0x2E5FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5FECu;
label_2e5fec:
    // 0x2e5fec: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2e5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2e5ff0: 0x3c0a002e  lui         $t2, 0x2E
    ctx->pc = 0x2e5ff0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)46 << 16));
    // 0x2e5ff4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e5ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ff8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2e5ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5ffc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2e5ffcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6000: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x2e6000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e6004: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x2e6004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x2e6008: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2e6008u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e600c: 0x254a5d80  addiu       $t2, $t2, 0x5D80
    ctx->pc = 0x2e600cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 23936));
    // 0x2e6010: 0x27ab00b8  addiu       $t3, $sp, 0xB8
    ctx->pc = 0x2e6010u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2e6014: 0xafb200b8  sw          $s2, 0xB8($sp)
    ctx->pc = 0x2e6014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 18));
    // 0x2e6018: 0xc076060  jal         func_1D8180
    ctx->pc = 0x2E6018u;
    SET_GPR_U32(ctx, 31, 0x2E6020u);
    ctx->pc = 0x2E601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6018u;
    // 0x2e601c: 0xafb600bc  sw          $s6, 0xBC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8180u, 0x2E6018u, 0x2E6020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6020u;
label_2e6020:
    // 0x2e6020: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2e6020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e6024: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E6024u;
    {
        const bool branch_taken_0x2e6024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6024u;
        // 0x2e6028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6024) {
            ctx->pc = 0x2E6048u;
            goto label_2e6048;
        }
    }
    ctx->pc = 0x2E602Cu;
    // 0x2e602c: 0xc07463c  jal         func_1D18F0
    ctx->pc = 0x2E602Cu;
    SET_GPR_U32(ctx, 31, 0x2E6034u);
    ctx->pc = 0x2E6030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E602Cu;
    // 0x2e6030: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D18F0u, 0x2E602Cu, 0x2E6034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6034u;
label_2e6034:
    // 0x2e6034: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2e6034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2e6038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e603c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e603cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6040: 0xc0745fc  jal         func_1D17F0
    ctx->pc = 0x2E6040u;
    SET_GPR_U32(ctx, 31, 0x2E6048u);
    ctx->pc = 0x2E6044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6040u;
    // 0x2e6044: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D17F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D17F0u, 0x2E6040u, 0x2E6048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6048u;
label_2e6048:
    // 0x2e6048: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e6048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e604c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2e604cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e6050: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e6050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e6054: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e6054u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e6058: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e6058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e605c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e605cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e6060: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e6060u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e6064: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e6064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6068: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e6068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e606c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e606cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6070: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e6070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6074: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e6074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6078: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6078u;
        // 0x2e607c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6080u;
}
