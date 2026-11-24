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

// Function: sub_00168E20
// Address: 0x168e20 - 0x1690c0
void sub_00168E20_0x168e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168E20_0x168e20");
#endif

    switch (ctx->pc) {
        case 0x168f10u: goto label_168f10;
        case 0x168f30u: goto label_168f30;
        case 0x168f98u: goto label_168f98;
        case 0x169058u: goto label_169058;
        default: break;
    }

    ctx->pc = 0x168e20u;

    // 0x168e20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x168e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x168e24: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x168e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x168e28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x168e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x168e2c: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x168e2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x168e30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x168e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x168e34: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x168e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x168e38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x168e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x168e3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x168e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x168e40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x168e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x168e44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x168e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x168e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x168e4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x168e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x168e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x168e54: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x168E54u;
    {
        const bool branch_taken_0x168e54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E54u;
        // 0x168e58: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e54) {
            ctx->pc = 0x168EE8u;
            goto label_168ee8;
        }
    }
    ctx->pc = 0x168E5Cu;
    // 0x168e5c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x168e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x168e60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x168e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x168e64: 0x24635280  addiu       $v1, $v1, 0x5280
    ctx->pc = 0x168e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21120));
    // 0x168e68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x168e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168e6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x168e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168e70: 0x400008  jr          $v0
    ctx->pc = 0x168E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168E78u: goto label_168e78;
            case 0x168E88u: goto label_168e88;
            case 0x168E98u: goto label_168e98;
            case 0x168EA8u: goto label_168ea8;
            case 0x168EB8u: goto label_168eb8;
            case 0x168EC8u: goto label_168ec8;
            case 0x168ED8u: goto label_168ed8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168E70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x168E78u;
label_168e78:
    // 0x168e78: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x168e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x168e7c: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x168e7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x168e80: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x168E80u;
    {
        const bool branch_taken_0x168e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E80u;
        // 0x168e84: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e80) {
            ctx->pc = 0x168EF0u;
            goto label_168ef0;
        }
    }
    ctx->pc = 0x168E88u;
label_168e88:
    // 0x168e88: 0x24100050  addiu       $s0, $zero, 0x50
    ctx->pc = 0x168e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x168e8c: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x168e8cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x168e90: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x168E90u;
    {
        const bool branch_taken_0x168e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E90u;
        // 0x168e94: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e90) {
            ctx->pc = 0x168EF0u;
            goto label_168ef0;
        }
    }
    ctx->pc = 0x168E98u;
label_168e98:
    // 0x168e98: 0x24100070  addiu       $s0, $zero, 0x70
    ctx->pc = 0x168e98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x168e9c: 0x2415000a  addiu       $s5, $zero, 0xA
    ctx->pc = 0x168e9cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x168ea0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x168EA0u;
    {
        const bool branch_taken_0x168ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EA0u;
        // 0x168ea4: 0x24140005  addiu       $s4, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ea0) {
            ctx->pc = 0x168EF0u;
            goto label_168ef0;
        }
    }
    ctx->pc = 0x168EA8u;
label_168ea8:
    // 0x168ea8: 0x241000b0  addiu       $s0, $zero, 0xB0
    ctx->pc = 0x168ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x168eac: 0x24150011  addiu       $s5, $zero, 0x11
    ctx->pc = 0x168eacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x168eb0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x168EB0u;
    {
        const bool branch_taken_0x168eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EB0u;
        // 0x168eb4: 0x24140009  addiu       $s4, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168eb0) {
            ctx->pc = 0x168EF0u;
            goto label_168ef0;
        }
    }
    ctx->pc = 0x168EB8u;
label_168eb8:
    // 0x168eb8: 0x24100040  addiu       $s0, $zero, 0x40
    ctx->pc = 0x168eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x168ebc: 0x2415000b  addiu       $s5, $zero, 0xB
    ctx->pc = 0x168ebcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x168ec0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x168EC0u;
    {
        const bool branch_taken_0x168ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EC0u;
        // 0x168ec4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ec0) {
            ctx->pc = 0x168EF0u;
            goto label_168ef0;
        }
    }
    ctx->pc = 0x168EC8u;
label_168ec8:
    // 0x168ec8: 0x24100050  addiu       $s0, $zero, 0x50
    ctx->pc = 0x168ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x168ecc: 0x2415000b  addiu       $s5, $zero, 0xB
    ctx->pc = 0x168eccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x168ed0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x168ED0u;
    {
        const bool branch_taken_0x168ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168ED0u;
        // 0x168ed4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ed0) {
            ctx->pc = 0x168EF0u;
            goto label_168ef0;
        }
    }
    ctx->pc = 0x168ED8u;
label_168ed8:
    // 0x168ed8: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x168ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x168edc: 0x2415000b  addiu       $s5, $zero, 0xB
    ctx->pc = 0x168edcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x168ee0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x168EE0u;
    {
        const bool branch_taken_0x168ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EE0u;
        // 0x168ee4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ee0) {
            ctx->pc = 0x168EF0u;
            goto label_168ef0;
        }
    }
    ctx->pc = 0x168EE8u;
label_168ee8:
    // 0x168ee8: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x168EE8u;
    {
        const bool branch_taken_0x168ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EE8u;
        // 0x168eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ee8) {
            ctx->pc = 0x169098u;
            goto label_169098;
        }
    }
    ctx->pc = 0x168EF0u;
label_168ef0:
    // 0x168ef0: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x168ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x168ef4: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x168ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x168ef8: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x168ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x168efc: 0x24846ae8  addiu       $a0, $a0, 0x6AE8
    ctx->pc = 0x168efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27368));
    // 0x168f00: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x168f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x168f04: 0x24560010  addiu       $s6, $v0, 0x10
    ctx->pc = 0x168f04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x168f08: 0xc04bf78  jal         func_12FDE0
    ctx->pc = 0x168F08u;
    SET_GPR_U32(ctx, 31, 0x168F10u);
    ctx->pc = 0x168F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F08u;
    // 0x168f0c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDE0u, 0x168F08u, 0x168F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F10u;
label_168f10:
    // 0x168f10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168F10u;
    {
        const bool branch_taken_0x168f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F10u;
        // 0x168f14: 0xae620034  sw          $v0, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f10) {
            ctx->pc = 0x168F20u;
            goto label_168f20;
        }
    }
    ctx->pc = 0x168F18u;
    // 0x168f18: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x168F18u;
    {
        const bool branch_taken_0x168f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F18u;
        // 0x168f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f18) {
            ctx->pc = 0x169098u;
            goto label_169098;
        }
    }
    ctx->pc = 0x168F20u;
label_168f20:
    // 0x168f20: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x168f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x168f24: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x168f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f28: 0xc049590  jal         func_125640
    ctx->pc = 0x168F28u;
    SET_GPR_U32(ctx, 31, 0x168F30u);
    ctx->pc = 0x168F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F28u;
    // 0x168f2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125640u, 0x168F28u, 0x168F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F30u;
label_168f30:
    // 0x168f30: 0xa275004e  sb          $s5, 0x4E($s3)
    ctx->pc = 0x168f30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 78), (uint8_t)GPR_U32(ctx, 21));
    // 0x168f34: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x168f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x168f38: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x168f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x168f3c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x168f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x168f40: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x168f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x168f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168f48: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x168f48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x168f4c: 0xa0b20000  sb          $s2, 0x0($a1)
    ctx->pc = 0x168f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x168f50: 0xa0b40001  sb          $s4, 0x1($a1)
    ctx->pc = 0x168f50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x168f54: 0xa4b10002  sh          $s1, 0x2($a1)
    ctx->pc = 0x168f54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x168f58: 0xacb00004  sw          $s0, 0x4($a1)
    ctx->pc = 0x168f58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    // 0x168f5c: 0xa4a4000a  sh          $a0, 0xA($a1)
    ctx->pc = 0x168f5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x168f60: 0xa4a40008  sh          $a0, 0x8($a1)
    ctx->pc = 0x168f60u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x168f64: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x168f64u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x168f68: 0xa4a3000e  sh          $v1, 0xE($a1)
    ctx->pc = 0x168f68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x168f6c: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x168f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x168f70: 0xa4a40010  sh          $a0, 0x10($a1)
    ctx->pc = 0x168f70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x168f74: 0x24ad0010  addiu       $t5, $a1, 0x10
    ctx->pc = 0x168f74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x168f78: 0xa4a20012  sh          $v0, 0x12($a1)
    ctx->pc = 0x168f78u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x168f7c: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x168f7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x168f80: 0x1420003f  bnez        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x168F80u;
    {
        const bool branch_taken_0x168f80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x168F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F80u;
        // 0x168f84: 0xa4a00014  sh          $zero, 0x14($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f80) {
            ctx->pc = 0x169080u;
            goto label_169080;
        }
    }
    ctx->pc = 0x168F88u;
    // 0x168f88: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x168f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x168f8c: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x168f8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x168f90: 0x1420002d  bnez        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x168F90u;
    {
        const bool branch_taken_0x168f90 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x168F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F90u;
        // 0x168f94: 0x246cfff8  addiu       $t4, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f90) {
            ctx->pc = 0x169048u;
            goto label_169048;
        }
    }
    ctx->pc = 0x168F98u;
label_168f98:
    // 0x168f98: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x168f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x168f9c: 0xa5a40000  sh          $a0, 0x0($t5)
    ctx->pc = 0x168f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x168fa0: 0x244b0002  addiu       $t3, $v0, 0x2
    ctx->pc = 0x168fa0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x168fa4: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x168fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x168fa8: 0x244a0003  addiu       $t2, $v0, 0x3
    ctx->pc = 0x168fa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x168fac: 0xa5a40002  sh          $a0, 0x2($t5)
    ctx->pc = 0x168facu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x168fb0: 0x24490004  addiu       $t1, $v0, 0x4
    ctx->pc = 0x168fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x168fb4: 0xa5a20004  sh          $v0, 0x4($t5)
    ctx->pc = 0x168fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x168fb8: 0x24480005  addiu       $t0, $v0, 0x5
    ctx->pc = 0x168fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x168fbc: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x168fbcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x168fc0: 0x24470006  addiu       $a3, $v0, 0x6
    ctx->pc = 0x168fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x168fc4: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x168fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x168fc8: 0x24460007  addiu       $a2, $v0, 0x7
    ctx->pc = 0x168fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x168fcc: 0xa5ab0002  sh          $t3, 0x2($t5)
    ctx->pc = 0x168fccu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 11));
    // 0x168fd0: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x168fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x168fd4: 0xa5a40004  sh          $a0, 0x4($t5)
    ctx->pc = 0x168fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x168fd8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x168fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x168fdc: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x168fdcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x168fe0: 0xa5a40000  sh          $a0, 0x0($t5)
    ctx->pc = 0x168fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x168fe4: 0xa5aa0002  sh          $t2, 0x2($t5)
    ctx->pc = 0x168fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x168fe8: 0x4c202a  slt         $a0, $v0, $t4
    ctx->pc = 0x168fe8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x168fec: 0xa5ab0004  sh          $t3, 0x4($t5)
    ctx->pc = 0x168fecu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4), (uint16_t)GPR_U32(ctx, 11));
    // 0x168ff0: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x168ff0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x168ff4: 0xa5ab0000  sh          $t3, 0x0($t5)
    ctx->pc = 0x168ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x168ff8: 0xa5a90002  sh          $t1, 0x2($t5)
    ctx->pc = 0x168ff8u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 9));
    // 0x168ffc: 0xa5aa0004  sh          $t2, 0x4($t5)
    ctx->pc = 0x168ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4), (uint16_t)GPR_U32(ctx, 10));
    // 0x169000: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x169000u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x169004: 0xa5aa0000  sh          $t2, 0x0($t5)
    ctx->pc = 0x169004u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x169008: 0xa5a80002  sh          $t0, 0x2($t5)
    ctx->pc = 0x169008u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x16900c: 0xa5a90004  sh          $t1, 0x4($t5)
    ctx->pc = 0x16900cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x169010: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x169010u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x169014: 0xa5a90000  sh          $t1, 0x0($t5)
    ctx->pc = 0x169014u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x169018: 0xa5a70002  sh          $a3, 0x2($t5)
    ctx->pc = 0x169018u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x16901c: 0xa5a80004  sh          $t0, 0x4($t5)
    ctx->pc = 0x16901cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x169020: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x169020u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x169024: 0xa5a80000  sh          $t0, 0x0($t5)
    ctx->pc = 0x169024u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x169028: 0xa5a60002  sh          $a2, 0x2($t5)
    ctx->pc = 0x169028u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x16902c: 0xa5a70004  sh          $a3, 0x4($t5)
    ctx->pc = 0x16902cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x169030: 0x1b06821  addu        $t5, $t5, $s0
    ctx->pc = 0x169030u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
    // 0x169034: 0xa5a70000  sh          $a3, 0x0($t5)
    ctx->pc = 0x169034u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x169038: 0xa5a50002  sh          $a1, 0x2($t5)
    ctx->pc = 0x169038u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x16903c: 0xa5a60004  sh          $a2, 0x4($t5)
    ctx->pc = 0x16903cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x169040: 0x1480ffd5  bnez        $a0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x169040u;
    {
        const bool branch_taken_0x169040 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x169044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169040u;
        // 0x169044: 0x1b06821  addu        $t5, $t5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169040) {
            ctx->pc = 0x168F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168f98;
        }
    }
    ctx->pc = 0x169048u;
label_169048:
    // 0x169048: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x169048u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16904c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x16904Cu;
    {
        const bool branch_taken_0x16904c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16904c) {
            ctx->pc = 0x169080u;
            goto label_169080;
        }
    }
    ctx->pc = 0x169054u;
    // 0x169054: 0x0  nop
    ctx->pc = 0x169054u;
    // NOP
label_169058:
    // 0x169058: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x169058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16905c: 0xa5a40000  sh          $a0, 0x0($t5)
    ctx->pc = 0x16905cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x169060: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x169060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169064: 0xa5a40002  sh          $a0, 0x2($t5)
    ctx->pc = 0x169064u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x169068: 0xa5a20004  sh          $v0, 0x4($t5)
    ctx->pc = 0x169068u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x16906c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16906cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x169070: 0x43202a  slt         $a0, $v0, $v1
    ctx->pc = 0x169070u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x169074: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x169074u;
    {
        const bool branch_taken_0x169074 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x169078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169074u;
        // 0x169078: 0x1b06821  addu        $t5, $t5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169074) {
            ctx->pc = 0x169058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169058;
        }
    }
    ctx->pc = 0x16907Cu;
    // 0x16907c: 0x0  nop
    ctx->pc = 0x16907cu;
    // NOP
label_169080:
    // 0x169080: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x169080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x169084: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x169084u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x169088: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x169088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16908c: 0xa5a20002  sh          $v0, 0x2($t5)
    ctx->pc = 0x16908cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x169090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169094: 0xa5a30004  sh          $v1, 0x4($t5)
    ctx->pc = 0x169094u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4), (uint16_t)GPR_U32(ctx, 3));
label_169098:
    // 0x169098: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x169098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16909c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16909cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1690a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1690a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1690a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1690a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1690a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1690a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1690ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1690acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1690b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1690b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1690b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1690b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1690b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1690B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1690BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1690B8u;
        // 0x1690bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1690B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1690C0u;
}
