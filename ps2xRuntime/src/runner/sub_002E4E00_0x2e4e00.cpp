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

// Function: sub_002E4E00
// Address: 0x2e4e00 - 0x2e52ac
void sub_002E4E00_0x2e4e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4E00_0x2e4e00");
#endif

    switch (ctx->pc) {
        case 0x2e4e58u: goto label_2e4e58;
        case 0x2e4ea8u: goto label_2e4ea8;
        case 0x2e4f00u: goto label_2e4f00;
        case 0x2e4f10u: goto label_2e4f10;
        case 0x2e4f1cu: goto label_2e4f1c;
        case 0x2e4f2cu: goto label_2e4f2c;
        case 0x2e4f74u: goto label_2e4f74;
        case 0x2e4f9cu: goto label_2e4f9c;
        case 0x2e4facu: goto label_2e4fac;
        case 0x2e4fb8u: goto label_2e4fb8;
        case 0x2e4fc8u: goto label_2e4fc8;
        case 0x2e5024u: goto label_2e5024;
        case 0x2e5034u: goto label_2e5034;
        case 0x2e5040u: goto label_2e5040;
        case 0x2e5050u: goto label_2e5050;
        case 0x2e509cu: goto label_2e509c;
        case 0x2e50c0u: goto label_2e50c0;
        case 0x2e50d0u: goto label_2e50d0;
        case 0x2e50dcu: goto label_2e50dc;
        case 0x2e50ecu: goto label_2e50ec;
        case 0x2e514cu: goto label_2e514c;
        case 0x2e515cu: goto label_2e515c;
        case 0x2e5168u: goto label_2e5168;
        case 0x2e5178u: goto label_2e5178;
        case 0x2e51c4u: goto label_2e51c4;
        case 0x2e51e8u: goto label_2e51e8;
        case 0x2e51f8u: goto label_2e51f8;
        case 0x2e5204u: goto label_2e5204;
        case 0x2e5214u: goto label_2e5214;
        case 0x2e5264u: goto label_2e5264;
        default: break;
    }

    ctx->pc = 0x2e4e00u;

    // 0x2e4e00: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2e4e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2e4e04: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x2e4e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x2e4e08: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e4e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2e4e0c: 0x246368e0  addiu       $v1, $v1, 0x68E0
    ctx->pc = 0x2e4e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26848));
    // 0x2e4e10: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2e4e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2e4e14: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2e4e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2e4e18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e4e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e4e1c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2e4e1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e4e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e4e24: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2e4e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e4e28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e4e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e4e2c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2e4e2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e4e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e4e34: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e4e34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e4e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e4e3c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e4e3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4e40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e4e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e4e44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e4e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e4e48: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2e4e48u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4E68E0u));
    // 0x2e4e4c: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x2E4E4Cu;
    {
        const bool branch_taken_0x2e4e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E4Cu;
        // 0x2e4e50: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e4c) {
            ctx->pc = 0x2E5268u;
            goto label_2e5268;
        }
    }
    ctx->pc = 0x2E4E54u;
    // 0x2e4e54: 0x0  nop
    ctx->pc = 0x2e4e54u;
    // NOP
label_2e4e58:
    // 0x2e4e58: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x2e4e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2e4e5c: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x2e4e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x2e4e60: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2e4e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e4e64: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x2e4e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2e4e68: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2e4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2e4e6c: 0x90b20000  lbu         $s2, 0x0($a1)
    ctx->pc = 0x2e4e6cu;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e4e70: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x2e4e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2e4e74: 0x123140  sll         $a2, $s2, 5
    ctx->pc = 0x2e4e74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x2e4e78: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x2e4e78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e4e7c: 0x2e63021  addu        $a2, $s7, $a2
    ctx->pc = 0x2e4e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 6)));
    // 0x2e4e80: 0x24d10040  addiu       $s1, $a2, 0x40
    ctx->pc = 0x2e4e80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x2e4e84: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x2e4e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x2e4e88: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e4e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e4e8c: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x2e4e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x2e4e90: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x2e4e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2e4e94: 0x24a60040  addiu       $a2, $a1, 0x40
    ctx->pc = 0x2e4e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x2e4e98: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2e4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2e4e9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e4e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4ea0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x2E4EA0u;
    SET_GPR_U32(ctx, 31, 0x2E4EA8u);
    ctx->pc = 0x2E4EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4EA0u;
    // 0x2e4ea4: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x2E4EA0u, 0x2E4EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4EA8u;
label_2e4ea8:
    // 0x2e4ea8: 0x92c20001  lbu         $v0, 0x1($s6)
    ctx->pc = 0x2e4ea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
    // 0x2e4eac: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x2e4eacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2e4eb0: 0x102000e5  beqz        $at, . + 4 + (0xE5 << 2)
    ctx->pc = 0x2E4EB0u;
    {
        const bool branch_taken_0x2e4eb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4eb0) {
            ctx->pc = 0x2E5248u;
            goto label_2e5248;
        }
    }
    ctx->pc = 0x2E4EB8u;
    // 0x2e4eb8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2e4eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2e4ebc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e4ec0: 0x24637b10  addiu       $v1, $v1, 0x7B10
    ctx->pc = 0x2e4ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31504));
    // 0x2e4ec4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e4ec8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e4ecc: 0x400008  jr          $v0
    ctx->pc = 0x2E4ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E4ED8u: goto label_2e4ed8;
            case 0x2E4F60u: goto label_2e4f60;
            case 0x2E5000u: goto label_2e5000;
            case 0x2E5088u: goto label_2e5088;
            case 0x2E5128u: goto label_2e5128;
            case 0x2E51B0u: goto label_2e51b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4ECCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E4ED4u;
    // 0x2e4ed4: 0x0  nop
    ctx->pc = 0x2e4ed4u;
    // NOP
label_2e4ed8:
    // 0x2e4ed8: 0x920300c5  lbu         $v1, 0xC5($s0)
    ctx->pc = 0x2e4ed8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 197)));
    // 0x2e4edc: 0x8e640094  lw          $a0, 0x94($s3)
    ctx->pc = 0x2e4edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x2e4ee0: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x2e4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2e4ee4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2e4ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e4ee8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2e4ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e4eec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e4eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e4ef0: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x2e4ef0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e4ef4: 0x247e0020  addiu       $fp, $v1, 0x20
    ctx->pc = 0x2e4ef4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2e4ef8: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2E4EF8u;
    SET_GPR_U32(ctx, 31, 0x2E4F00u);
    ctx->pc = 0x2E4EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4EF8u;
    // 0x2e4efc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2E4EF8u, 0x2E4F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F00u;
label_2e4f00:
    // 0x2e4f00: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2e4f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4f04: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x2e4f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e4f08: 0xc041460  jal         func_105180
    ctx->pc = 0x2E4F08u;
    SET_GPR_U32(ctx, 31, 0x2E4F10u);
    ctx->pc = 0x2E4F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4F08u;
    // 0x2e4f0c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x2E4F08u, 0x2E4F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F10u;
label_2e4f10:
    // 0x2e4f10: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x2e4f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e4f14: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2E4F14u;
    SET_GPR_U32(ctx, 31, 0x2E4F1Cu);
    ctx->pc = 0x2E4F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4F14u;
    // 0x2e4f18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2E4F14u, 0x2E4F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F1Cu;
label_2e4f1c:
    // 0x2e4f1c: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x2e4f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2e4f20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e4f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4f24: 0xc041460  jal         func_105180
    ctx->pc = 0x2E4F24u;
    SET_GPR_U32(ctx, 31, 0x2E4F2Cu);
    ctx->pc = 0x2E4F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4F24u;
    // 0x2e4f28: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x2E4F24u, 0x2E4F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F2Cu;
label_2e4f2c:
    // 0x2e4f2c: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x2e4f2cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e4f30: 0x26830030  addiu       $v1, $s4, 0x30
    ctx->pc = 0x2e4f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x2e4f34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4f38: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2e4f38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e4f3c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e4f3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e4f40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e4f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e4f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4f48: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2e4f48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2e4f4c: 0xe683000c  swc1        $f3, 0xC($s4)
    ctx->pc = 0x2e4f4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2e4f50: 0xe682001c  swc1        $f2, 0x1C($s4)
    ctx->pc = 0x2e4f50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x2e4f54: 0xe681002c  swc1        $f1, 0x2C($s4)
    ctx->pc = 0x2e4f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
    // 0x2e4f58: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x2E4F58u;
    {
        const bool branch_taken_0x2e4f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4F58u;
        // 0x2e4f5c: 0xe680003c  swc1        $f0, 0x3C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4f58) {
            ctx->pc = 0x2E5248u;
            goto label_2e5248;
        }
    }
    ctx->pc = 0x2E4F60u;
label_2e4f60:
    // 0x2e4f60: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e4f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2e4f64: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2e4f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e4f68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e4f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e4f6c: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E4F6Cu;
    SET_GPR_U32(ctx, 31, 0x2E4F74u);
    ctx->pc = 0x2E4F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4F6Cu;
    // 0x2e4f70: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E4F6Cu, 0x2E4F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F74u;
label_2e4f74:
    // 0x2e4f74: 0x920300c5  lbu         $v1, 0xC5($s0)
    ctx->pc = 0x2e4f74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 197)));
    // 0x2e4f78: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x2e4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2e4f7c: 0x8e640094  lw          $a0, 0x94($s3)
    ctx->pc = 0x2e4f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x2e4f80: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2e4f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e4f84: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2e4f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2e4f88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2e4f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e4f8c: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x2e4f8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e4f90: 0x247e0020  addiu       $fp, $v1, 0x20
    ctx->pc = 0x2e4f90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2e4f94: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2E4F94u;
    SET_GPR_U32(ctx, 31, 0x2E4F9Cu);
    ctx->pc = 0x2E4F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4F94u;
    // 0x2e4f98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2E4F94u, 0x2E4F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4F9Cu;
label_2e4f9c:
    // 0x2e4f9c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2e4f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4fa0: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x2e4fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e4fa4: 0xc041460  jal         func_105180
    ctx->pc = 0x2E4FA4u;
    SET_GPR_U32(ctx, 31, 0x2E4FACu);
    ctx->pc = 0x2E4FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4FA4u;
    // 0x2e4fa8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x2E4FA4u, 0x2E4FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FACu;
label_2e4fac:
    // 0x2e4fac: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x2e4facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e4fb0: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2E4FB0u;
    SET_GPR_U32(ctx, 31, 0x2E4FB8u);
    ctx->pc = 0x2E4FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4FB0u;
    // 0x2e4fb4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2E4FB0u, 0x2E4FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FB8u;
label_2e4fb8:
    // 0x2e4fb8: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x2e4fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2e4fbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e4fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4fc0: 0xc041460  jal         func_105180
    ctx->pc = 0x2E4FC0u;
    SET_GPR_U32(ctx, 31, 0x2E4FC8u);
    ctx->pc = 0x2E4FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4FC0u;
    // 0x2e4fc4: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x2E4FC0u, 0x2E4FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4FC8u;
label_2e4fc8:
    // 0x2e4fc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e4fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4fcc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e4fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4fd0: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x2e4fd0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e4fd4: 0x26830030  addiu       $v1, $s4, 0x30
    ctx->pc = 0x2e4fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x2e4fd8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2e4fd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e4fdc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e4fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e4fe0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e4fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e4fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4fe8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2e4fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2e4fec: 0xe683000c  swc1        $f3, 0xC($s4)
    ctx->pc = 0x2e4fecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2e4ff0: 0xe682001c  swc1        $f2, 0x1C($s4)
    ctx->pc = 0x2e4ff0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x2e4ff4: 0xe681002c  swc1        $f1, 0x2C($s4)
    ctx->pc = 0x2e4ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
    // 0x2e4ff8: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x2E4FF8u;
    {
        const bool branch_taken_0x2e4ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4FF8u;
        // 0x2e4ffc: 0xe680003c  swc1        $f0, 0x3C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ff8) {
            ctx->pc = 0x2E5248u;
            goto label_2e5248;
        }
    }
    ctx->pc = 0x2E5000u;
label_2e5000:
    // 0x2e5000: 0x920400c5  lbu         $a0, 0xC5($s0)
    ctx->pc = 0x2e5000u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 197)));
    // 0x2e5004: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x2e5004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x2e5008: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x2e5008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2e500c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2e500cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e5010: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2e5010u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2e5014: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x2e5014u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e5018: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x2e5018u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e501c: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2E501Cu;
    SET_GPR_U32(ctx, 31, 0x2E5024u);
    ctx->pc = 0x2E5020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E501Cu;
    // 0x2e5020: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2E501Cu, 0x2E5024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5024u;
label_2e5024:
    // 0x2e5024: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2e5024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5028: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x2e5028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2e502c: 0xc041460  jal         func_105180
    ctx->pc = 0x2E502Cu;
    SET_GPR_U32(ctx, 31, 0x2E5034u);
    ctx->pc = 0x2E5030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E502Cu;
    // 0x2e5030: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x2E502Cu, 0x2E5034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5034u;
label_2e5034:
    // 0x2e5034: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x2e5034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2e5038: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2E5038u;
    SET_GPR_U32(ctx, 31, 0x2E5040u);
    ctx->pc = 0x2E503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5038u;
    // 0x2e503c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2E5038u, 0x2E5040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5040u;
label_2e5040:
    // 0x2e5040: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e5040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5044: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x2e5044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e5048: 0xc041460  jal         func_105180
    ctx->pc = 0x2E5048u;
    SET_GPR_U32(ctx, 31, 0x2E5050u);
    ctx->pc = 0x2E504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5048u;
    // 0x2e504c: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x2E5048u, 0x2E5050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5050u;
label_2e5050:
    // 0x2e5050: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e5050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5054: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5058: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x2e5058u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e505c: 0x26830030  addiu       $v1, $s4, 0x30
    ctx->pc = 0x2e505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x2e5060: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2e5060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e5064: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e5064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5068: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e5068u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e506c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e506cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5070: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2e5070u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2e5074: 0xe683000c  swc1        $f3, 0xC($s4)
    ctx->pc = 0x2e5074u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2e5078: 0xe682001c  swc1        $f2, 0x1C($s4)
    ctx->pc = 0x2e5078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x2e507c: 0xe681002c  swc1        $f1, 0x2C($s4)
    ctx->pc = 0x2e507cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
    // 0x2e5080: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2E5080u;
    {
        const bool branch_taken_0x2e5080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5080u;
        // 0x2e5084: 0xe680003c  swc1        $f0, 0x3C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5080) {
            ctx->pc = 0x2E5248u;
            goto label_2e5248;
        }
    }
    ctx->pc = 0x2E5088u;
label_2e5088:
    // 0x2e5088: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e5088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2e508c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2e508cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e5090: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e5090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e5094: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E5094u;
    SET_GPR_U32(ctx, 31, 0x2E509Cu);
    ctx->pc = 0x2E5098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5094u;
    // 0x2e5098: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E5094u, 0x2E509Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E509Cu;
label_2e509c:
    // 0x2e509c: 0x920400c5  lbu         $a0, 0xC5($s0)
    ctx->pc = 0x2e509cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 197)));
    // 0x2e50a0: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x2e50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2e50a4: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x2e50a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x2e50a8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2e50a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e50ac: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2e50acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2e50b0: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x2e50b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e50b4: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x2e50b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e50b8: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2E50B8u;
    SET_GPR_U32(ctx, 31, 0x2E50C0u);
    ctx->pc = 0x2E50BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E50B8u;
    // 0x2e50bc: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2E50B8u, 0x2E50C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50C0u;
label_2e50c0:
    // 0x2e50c0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2e50c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50c4: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x2e50c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2e50c8: 0xc041460  jal         func_105180
    ctx->pc = 0x2E50C8u;
    SET_GPR_U32(ctx, 31, 0x2E50D0u);
    ctx->pc = 0x2E50CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E50C8u;
    // 0x2e50cc: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x2E50C8u, 0x2E50D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50D0u;
label_2e50d0:
    // 0x2e50d0: 0x26840020  addiu       $a0, $s4, 0x20
    ctx->pc = 0x2e50d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2e50d4: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2E50D4u;
    SET_GPR_U32(ctx, 31, 0x2E50DCu);
    ctx->pc = 0x2E50D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E50D4u;
    // 0x2e50d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2E50D4u, 0x2E50DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50DCu;
label_2e50dc:
    // 0x2e50dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e50dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50e0: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x2e50e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e50e4: 0xc041460  jal         func_105180
    ctx->pc = 0x2E50E4u;
    SET_GPR_U32(ctx, 31, 0x2E50ECu);
    ctx->pc = 0x2E50E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E50E4u;
    // 0x2e50e8: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x2E50E4u, 0x2E50ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E50ECu;
label_2e50ec:
    // 0x2e50ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e50ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e50f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e50f4: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x2e50f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e50f8: 0x26830030  addiu       $v1, $s4, 0x30
    ctx->pc = 0x2e50f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x2e50fc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2e50fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e5100: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e5100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5104: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e5104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e510c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2e510cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2e5110: 0xe683000c  swc1        $f3, 0xC($s4)
    ctx->pc = 0x2e5110u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2e5114: 0xe682001c  swc1        $f2, 0x1C($s4)
    ctx->pc = 0x2e5114u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x2e5118: 0xe681002c  swc1        $f1, 0x2C($s4)
    ctx->pc = 0x2e5118u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
    // 0x2e511c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2E511Cu;
    {
        const bool branch_taken_0x2e511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E511Cu;
        // 0x2e5120: 0xe680003c  swc1        $f0, 0x3C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e511c) {
            ctx->pc = 0x2E5248u;
            goto label_2e5248;
        }
    }
    ctx->pc = 0x2E5124u;
    // 0x2e5124: 0x0  nop
    ctx->pc = 0x2e5124u;
    // NOP
label_2e5128:
    // 0x2e5128: 0x920400c5  lbu         $a0, 0xC5($s0)
    ctx->pc = 0x2e5128u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 197)));
    // 0x2e512c: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x2e512cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x2e5130: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x2e5130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2e5134: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2e5134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e5138: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2e5138u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2e513c: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x2e513cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e5140: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x2e5140u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e5144: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2E5144u;
    SET_GPR_U32(ctx, 31, 0x2E514Cu);
    ctx->pc = 0x2E5148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5144u;
    // 0x2e5148: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2E5144u, 0x2E514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E514Cu;
label_2e514c:
    // 0x2e514c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2e514cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5150: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x2e5150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e5154: 0xc041460  jal         func_105180
    ctx->pc = 0x2E5154u;
    SET_GPR_U32(ctx, 31, 0x2E515Cu);
    ctx->pc = 0x2E5158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5154u;
    // 0x2e5158: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x2E5154u, 0x2E515Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E515Cu;
label_2e515c:
    // 0x2e515c: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x2e515cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e5160: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2E5160u;
    SET_GPR_U32(ctx, 31, 0x2E5168u);
    ctx->pc = 0x2E5164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5160u;
    // 0x2e5164: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2E5160u, 0x2E5168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5168u;
label_2e5168:
    // 0x2e5168: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e5168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e516c: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x2e516cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e5170: 0xc041460  jal         func_105180
    ctx->pc = 0x2E5170u;
    SET_GPR_U32(ctx, 31, 0x2E5178u);
    ctx->pc = 0x2E5174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5170u;
    // 0x2e5174: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x2E5170u, 0x2E5178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5178u;
label_2e5178:
    // 0x2e5178: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e5178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e517c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e517cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5180: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x2e5180u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e5184: 0x26830030  addiu       $v1, $s4, 0x30
    ctx->pc = 0x2e5184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x2e5188: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2e5188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e518c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e518cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5190: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e5190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5198: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2e5198u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2e519c: 0xe683000c  swc1        $f3, 0xC($s4)
    ctx->pc = 0x2e519cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2e51a0: 0xe682001c  swc1        $f2, 0x1C($s4)
    ctx->pc = 0x2e51a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x2e51a4: 0xe681002c  swc1        $f1, 0x2C($s4)
    ctx->pc = 0x2e51a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
    // 0x2e51a8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2E51A8u;
    {
        const bool branch_taken_0x2e51a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E51ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E51A8u;
        // 0x2e51ac: 0xe680003c  swc1        $f0, 0x3C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51a8) {
            ctx->pc = 0x2E5248u;
            goto label_2e5248;
        }
    }
    ctx->pc = 0x2E51B0u;
label_2e51b0:
    // 0x2e51b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2e51b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2e51b4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2e51b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e51b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2e51b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e51bc: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E51BCu;
    SET_GPR_U32(ctx, 31, 0x2E51C4u);
    ctx->pc = 0x2E51C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E51BCu;
    // 0x2e51c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E51BCu, 0x2E51C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E51C4u;
label_2e51c4:
    // 0x2e51c4: 0x920400c5  lbu         $a0, 0xC5($s0)
    ctx->pc = 0x2e51c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 197)));
    // 0x2e51c8: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x2e51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2e51cc: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x2e51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x2e51d0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2e51d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e51d4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2e51d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2e51d8: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x2e51d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2e51dc: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x2e51dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e51e0: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2E51E0u;
    SET_GPR_U32(ctx, 31, 0x2E51E8u);
    ctx->pc = 0x2E51E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E51E0u;
    // 0x2e51e4: 0x26840020  addiu       $a0, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2E51E0u, 0x2E51E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E51E8u;
label_2e51e8:
    // 0x2e51e8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2e51e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e51ec: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x2e51ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e51f0: 0xc041460  jal         func_105180
    ctx->pc = 0x2E51F0u;
    SET_GPR_U32(ctx, 31, 0x2E51F8u);
    ctx->pc = 0x2E51F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E51F0u;
    // 0x2e51f4: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x2E51F0u, 0x2E51F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E51F8u;
label_2e51f8:
    // 0x2e51f8: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x2e51f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e51fc: 0xc041472  jal         func_1051C8
    ctx->pc = 0x2E51FCu;
    SET_GPR_U32(ctx, 31, 0x2E5204u);
    ctx->pc = 0x2E5200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E51FCu;
    // 0x2e5200: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051C8u, 0x2E51FCu, 0x2E5204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5204u;
label_2e5204:
    // 0x2e5204: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e5204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5208: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x2e5208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2e520c: 0xc041460  jal         func_105180
    ctx->pc = 0x2E520Cu;
    SET_GPR_U32(ctx, 31, 0x2E5214u);
    ctx->pc = 0x2E5210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E520Cu;
    // 0x2e5210: 0x26860020  addiu       $a2, $s4, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105180u, 0x2E520Cu, 0x2E5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5214u;
label_2e5214:
    // 0x2e5214: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e5214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5218: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e521c: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x2e521cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2e5220: 0x26830030  addiu       $v1, $s4, 0x30
    ctx->pc = 0x2e5220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x2e5224: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2e5224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e5228: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2e5228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e522c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e522cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5230: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5234: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2e5234u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x2e5238: 0xe683000c  swc1        $f3, 0xC($s4)
    ctx->pc = 0x2e5238u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
    // 0x2e523c: 0xe682001c  swc1        $f2, 0x1C($s4)
    ctx->pc = 0x2e523cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x2e5240: 0xe681002c  swc1        $f1, 0x2C($s4)
    ctx->pc = 0x2e5240u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 44), bits); }
    // 0x2e5244: 0xe680003c  swc1        $f0, 0x3C($s4)
    ctx->pc = 0x2e5244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 60), bits); }
label_2e5248:
    // 0x2e5248: 0x8e630128  lw          $v1, 0x128($s3)
    ctx->pc = 0x2e5248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
    // 0x2e524c: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x2e524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x2e5250: 0x122980  sll         $a1, $s2, 6
    ctx->pc = 0x2e5250u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2e5254: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x2e5254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2e5258: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x2e5258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e525c: 0xc04144e  jal         func_105138
    ctx->pc = 0x2E525Cu;
    SET_GPR_U32(ctx, 31, 0x2E5264u);
    ctx->pc = 0x2E5260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E525Cu;
    // 0x2e5260: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105138u, 0x2E525Cu, 0x2E5264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5264u;
label_2e5264:
    // 0x2e5264: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2e5264u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2e5268:
    // 0x2e5268: 0x92c30003  lbu         $v1, 0x3($s6)
    ctx->pc = 0x2e5268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
    // 0x2e526c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e526cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e5270: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x2e5270u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e5274: 0x1460fef8  bnez        $v1, . + 4 + (-0x108 << 2)
    ctx->pc = 0x2E5274u;
    {
        const bool branch_taken_0x2e5274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5274) {
            ctx->pc = 0x2E4E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4e58;
        }
    }
    ctx->pc = 0x2E527Cu;
    // 0x2e527c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e527cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e5280: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2e5280u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e5284: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2e5284u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e5288: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e5288u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e528c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e528cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5290: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e5290u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5294: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e5294u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e5298: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e5298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e529c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e529cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e52a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e52a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e52a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E52A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E52A4u;
        // 0x2e52a8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E52A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E52ACu;
}
