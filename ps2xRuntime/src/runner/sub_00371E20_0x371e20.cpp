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

// Function: sub_00371E20
// Address: 0x371e20 - 0x371fa0
void sub_00371E20_0x371e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371E20_0x371e20");
#endif

    switch (ctx->pc) {
        case 0x371e80u: goto label_371e80;
        case 0x371ea0u: goto label_371ea0;
        case 0x371f08u: goto label_371f08;
        case 0x371f30u: goto label_371f30;
        case 0x371f58u: goto label_371f58;
        case 0x371f74u: goto label_371f74;
        default: break;
    }

    ctx->pc = 0x371e20u;

    // 0x371e20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x371e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x371e24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x371e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x371e28: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x371e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x371e2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x371e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x371e30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x371e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x371e34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x371e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x371e38: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x371e38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371e3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x371e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x371e40: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x371e40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371e44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x371e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x371e48: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x371e48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371e4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x371e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x371e50: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x371e50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371e54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x371e58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x371e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x371e5c: 0x948301ae  lhu         $v1, 0x1AE($a0)
    ctx->pc = 0x371e5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 430)));
    // 0x371e60: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x371E60u;
    {
        const bool branch_taken_0x371e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x371E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E60u;
        // 0x371e64: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e60) {
            ctx->pc = 0x371E88u;
            goto label_371e88;
        }
    }
    ctx->pc = 0x371E68u;
    // 0x371e68: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x371e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x371e6c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x371e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x371e70: 0x34570037  ori         $s7, $v0, 0x37
    ctx->pc = 0x371e70u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55);
    // 0x371e74: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x371e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x371e78: 0xc0bd2d4  jal         func_2F4B50
    ctx->pc = 0x371E78u;
    SET_GPR_U32(ctx, 31, 0x371E80u);
    ctx->pc = 0x371E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E78u;
    // 0x371e7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B50u, 0x371E78u, 0x371E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E80u;
label_371e80:
    // 0x371e80: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x371E80u;
    {
        const bool branch_taken_0x371e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E80u;
        // 0x371e84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e80) {
            ctx->pc = 0x371F30u;
            goto label_371f30;
        }
    }
    ctx->pc = 0x371E88u;
label_371e88:
    // 0x371e88: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x371e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x371e8c: 0x3c04008e  lui         $a0, 0x8E
    ctx->pc = 0x371e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)142 << 16));
    // 0x371e90: 0x3457003a  ori         $s7, $v0, 0x3A
    ctx->pc = 0x371e90u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58);
    // 0x371e94: 0x2484bb30  addiu       $a0, $a0, -0x44D0
    ctx->pc = 0x371e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949680));
    // 0x371e98: 0xc0bd2d4  jal         func_2F4B50
    ctx->pc = 0x371E98u;
    SET_GPR_U32(ctx, 31, 0x371EA0u);
    ctx->pc = 0x371E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E98u;
    // 0x371e9c: 0x6411000a  daddiu      $s1, $zero, 0xA (Delay Slot)
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4B50u, 0x371E98u, 0x371EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371EA0u;
label_371ea0:
    // 0x371ea0: 0x8ec301b8  lw          $v1, 0x1B8($s6)
    ctx->pc = 0x371ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x371ea4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x371ea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x371ea8: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x371EA8u;
    {
        const bool branch_taken_0x371ea8 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x371ea8) {
            ctx->pc = 0x371EB8u;
            goto label_371eb8;
        }
    }
    ctx->pc = 0x371EB0u;
    // 0x371eb0: 0x64110002  daddiu      $s1, $zero, 0x2
    ctx->pc = 0x371eb0u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x371eb4: 0x0  nop
    ctx->pc = 0x371eb4u;
    // NOP
label_371eb8:
    // 0x371eb8: 0x3c013b9a  lui         $at, 0x3B9A
    ctx->pc = 0x371eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15258 << 16));
    // 0x371ebc: 0x3421ca00  ori         $at, $at, 0xCA00
    ctx->pc = 0x371ebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51712);
    // 0x371ec0: 0x241082a  slt         $at, $s2, $at
    ctx->pc = 0x371ec0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x371ec4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x371EC4u;
    {
        const bool branch_taken_0x371ec4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x371EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EC4u;
        // 0x371ec8: 0x3c023b9a  lui         $v0, 0x3B9A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15258 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371ec4) {
            ctx->pc = 0x371ED8u;
            goto label_371ed8;
        }
    }
    ctx->pc = 0x371ECCu;
    // 0x371ecc: 0x64110002  daddiu      $s1, $zero, 0x2
    ctx->pc = 0x371eccu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
    // 0x371ed0: 0x3452c9ff  ori         $s2, $v0, 0xC9FF
    ctx->pc = 0x371ed0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51711);
    // 0x371ed4: 0x0  nop
    ctx->pc = 0x371ed4u;
    // NOP
label_371ed8:
    // 0x371ed8: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x371ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x371edc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x371edcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x371ee0: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x371ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x371ee4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x371ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x371ee8: 0x32a5ffff  andi        $a1, $s5, 0xFFFF
    ctx->pc = 0x371ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x371eec: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x371eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x371ef0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x371ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x371ef4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x371ef4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371ef8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x371ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x371efc: 0x25291948  addiu       $t1, $t1, 0x1948
    ctx->pc = 0x371efcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6472));
    // 0x371f00: 0xc095f88  jal         func_257E20
    ctx->pc = 0x371F00u;
    SET_GPR_U32(ctx, 31, 0x371F08u);
    ctx->pc = 0x371F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371F00u;
    // 0x371f04: 0x344a003b  ori         $t2, $v0, 0x3B (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59);
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x371F00u, 0x371F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371F08u;
label_371f08:
    // 0x371f08: 0x8ec801b8  lw          $t0, 0x1B8($s6)
    ctx->pc = 0x371f08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 440)));
    // 0x371f0c: 0x5010002  bgez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x371F0Cu;
    {
        const bool branch_taken_0x371f0c = (GPR_S64(ctx, 8) >= 0);
        if (branch_taken_0x371f0c) {
            ctx->pc = 0x371F18u;
            goto label_371f18;
        }
    }
    ctx->pc = 0x371F14u;
    // 0x371f14: 0x84023  negu        $t0, $t0
    ctx->pc = 0x371f14u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_371f18:
    // 0x371f18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x371f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x371f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x371f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f24: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x371f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x371f28: 0xc0ed738  jal         func_3B5CE0
    ctx->pc = 0x371F28u;
    SET_GPR_U32(ctx, 31, 0x371F30u);
    ctx->pc = 0x371F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371F28u;
    // 0x371f2c: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5CE0u, 0x371F28u, 0x371F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371F30u;
label_371f30:
    // 0x371f30: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x371f30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x371f34: 0x3c090068  lui         $t1, 0x68
    ctx->pc = 0x371f34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)104 << 16));
    // 0x371f38: 0x32a5ffff  andi        $a1, $s5, 0xFFFF
    ctx->pc = 0x371f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x371f3c: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x371f3cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f40: 0x3266ffff  andi        $a2, $s3, 0xFFFF
    ctx->pc = 0x371f40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x371f44: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x371f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x371f48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x371f48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f4c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x371f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x371f50: 0xc095f88  jal         func_257E20
    ctx->pc = 0x371F50u;
    SET_GPR_U32(ctx, 31, 0x371F58u);
    ctx->pc = 0x371F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371F50u;
    // 0x371f54: 0x25291948  addiu       $t1, $t1, 0x1948 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257E20u, 0x371F50u, 0x371F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371F58u;
label_371f58:
    // 0x371f58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x371f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x371f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x371f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f64: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x371f64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371f68: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x371f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x371f6c: 0xc0ed738  jal         func_3B5CE0
    ctx->pc = 0x371F6Cu;
    SET_GPR_U32(ctx, 31, 0x371F74u);
    ctx->pc = 0x371F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371F6Cu;
    // 0x371f70: 0x2409ffff  addiu       $t1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5CE0u, 0x371F6Cu, 0x371F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371F74u;
label_371f74:
    // 0x371f74: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x371f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x371f78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x371f78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x371f7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x371f7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x371f80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x371f80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x371f84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x371f84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x371f88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x371f88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x371f8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x371f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371f90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371f94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x371f94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371f98: 0x3e00008  jr          $ra
    ctx->pc = 0x371F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371F98u;
        // 0x371f9c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371FA0u;
}
